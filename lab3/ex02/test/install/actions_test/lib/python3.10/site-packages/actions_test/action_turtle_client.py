import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from actions_help.action import MessageTurtleCommands

class CommandsActionClient(Node):

    def __init__(self):
        super().__init__('action_client')
        self._action_client = ActionClient(self, MessageTurtleCommands, 'move_turtle')
        self.goals = [
            ['forward', 2, 0],
            ['turn_right', 0, 90],
            ['forward', 1, 0]
        ]
        self.current_goal_index = 0

    def activate(self):
        # Wait for the action server to become available
        self._action_client.wait_for_server()
        self.send_next_goal()

    def send_next_goal(self):
        if self.current_goal_index < len(self.goals):
            goal_msg = MessageTurtleCommands.Goal()
            task = self.goals[self.current_goal_index]

            goal_msg.command = task[0]
            goal_msg.s = task[1]
            goal_msg.angle = task[2]

            self.get_logger().info(f'Sending goal: {task}')

            self._send_goal_future = self._action_client.send_goal_async(
                goal_msg, feedback_callback=self.feedback_callback)
            self._send_goal_future.add_done_callback(self.goal_response_callback)
        else:
            self.get_logger().info('All goals sent')
            rclpy.shutdown()

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected')
            return

        self.get_logger().info('Goal accepted')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info(f'Result: {result.result}')
        self.current_goal_index += 1
        # Send the next goal after the current one finishes
        self.send_next_goal()

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger(f'{feedback} units moved')
        


def main(args=None):
    rclpy.init(args=args)

    action_client = CommandsActionClient()
    action_client.activate()

    rclpy.spin(action_client)


if __name__ == '__main__':
    main()
