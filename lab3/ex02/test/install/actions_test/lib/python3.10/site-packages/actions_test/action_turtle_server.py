import math
import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from rclpy.action import ActionServer
from rclpy.executors import MultiThreadedExecutor
from actions_help.action import MessageTurtleCommands
import time


class CommandActionServer(Node):

    def __init__(self):
        super().__init__('action_turtle_server')
        
        self.twist = Twist()
        self.flag = 0
        self.after_pose = Pose()
        self.before_pose = Pose()
        self.feedback_time = time.time()
        
        self.publisher_ = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        self._action_server = ActionServer(
            self,
            MessageTurtleCommands,
            'move_turtle',
            self.execute_callback)
        self.odometry = 0
        self.subscription = self.create_subscription(Pose, '/turtle1/pose', self.pose_callback, 10)

    def pose_callback(self, msg):
        self.after_pose = msg
        if self.flag == 1:
            self.before_pose = msg
            self.flag = 0

    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')
        self.flag = 1
        
        if goal_handle.request.command == 'forward':
            self.twist.linear.x = float(goal_handle.request.s)
            self.twist.angular.z = 0.0
            self.publisher_.publish(self.twist)
            
            # Wait until the turtle has moved the specified distance
            target_distance = goal_handle.request.s
            self.wait_for_distance(target_distance)

        elif goal_handle.request.command == 'turn_left':
            self.twist.linear.x = 0.0
            self.twist.angular.z = float(goal_handle.request.angle) * math.pi / 180
            self.publisher_.publish(self.twist)
            
            # Wait until the turtle has turned the specified angle
            target_angle = goal_handle.request.angle
            self.wait_for_rotation(target_angle)

        elif goal_handle.request.command == 'turn_right':
            self.twist.linear.x = 0.0
            self.twist.angular.z = -float(goal_handle.request.angle) * math.pi / 180
            self.publisher_.publish(self.twist)
            
            # Wait until the turtle has turned the specified angle
            target_angle = -goal_handle.request.angle
            self.wait_for_rotation(target_angle)

        goal_handle.succeed()
        result = MessageTurtleCommands.Result()
        result.result = True
        return result

    def wait_for_distance(self, target_distance):
        """ Waits until the turtle has moved the specified distance. """
        initial_x = self.after_pose.x
        initial_y = self.after_pose.y

        feedback_msg = MessageTurtleCommands.Feedback()


        while True:
            # Calculate the distance moved so far
            distance_moved = math.sqrt(
                (self.after_pose.x - initial_x) ** 2 +
                (self.after_pose.y - initial_y) ** 2
            )
            feedback_msg.odom = int(distance_moved)
            if distance_moved >= target_distance:
                break

        time.sleep(0.01)  # Small delay to prevent busy looping
        self.get_logger().info(f'Feedback: {feedback_msg.odom} units moved')
        # Stop the turtle after reaching the target distance
        self.twist.linear.x = 0.0
        self.publisher_.publish(self.twist)

    def wait_for_rotation(self, target_angle):
        """ Waits until the turtle has turned the specified angle. """
        initial_theta = self.after_pose.theta
        feedback_msg = MessageTurtleCommands.Feedback()
        

        while True:
            # Calculate the angle turned so far
            current_theta = self.after_pose.theta
            angle_turned = self.normalize_angle(current_theta - initial_theta)
            feedback_msg.odom = int(abs(angle_turned * 180 / math.pi))
            if abs(angle_turned*180/math.pi) >= abs(target_angle):
                break
                
                
                

            time.sleep(0.1)  # Small delay to prevent busy looping
        self.get_logger().info(f'Feedback: {feedback_msg.odom} degrees turned')
        # Stop the turtle after reaching the target angle
        self.twist.angular.z = 0.0
        self.publisher_.publish(self.twist)

    def normalize_angle(self, angle):
        """ Normalize the angle to the range [-pi, pi]. """
        return math.atan2(math.sin(angle), math.cos(angle))


def main(args=None):
    rclpy.init(args=args)
    action_turtle_server = CommandActionServer()
    executor = MultiThreadedExecutor(num_threads=2)
    executor.add_node(action_turtle_server)
    executor.spin()
    executor.shutdown()
    action_turtle_server.destroy_node()
    
    rclpy.shutdown()


if __name__ == '__main__':
    main()
