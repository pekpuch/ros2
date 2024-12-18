import math

from geometry_msgs.msg import Twist, Pose
import time
import rclpy
from rclpy.node import Node
from tf2_msgs.msg import TFMessage
from tf2_ros import TransformException
from tf2_ros.buffer import Buffer
from tf2_ros.transform_listener import TransformListener
from tf2_ros import TransformBroadcaster
from geometry_msgs.msg import TransformStamped

from turtlesim.srv import Spawn


class FrameListener(Node):

    def __init__(self):
        super().__init__('robot_frame_listener')

        self.publisher = self.create_publisher(Twist, '/robot/cmd_vel', 1)


        self.timer = self.create_timer(9, self.on_timer)

    def on_timer(self):
        itera = 0
        start = time.time()
        while itera < 60:
            msg = Twist()
            
            msg.angular.z = 5*math.sin(2*math.pi*((time.time()-start)%100)*40)
            msg.linear.x = 2.0
            self.publisher.publish(msg)
            time.sleep(.5)
            itera+=1
        msg.angular.z = 0.0
        msg.linear.x = 0.0
        self.publisher.publish(msg)
        self.timer.destroy()
 




def main():
    rclpy.init()
    node = FrameListener()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    rclpy.shutdown()