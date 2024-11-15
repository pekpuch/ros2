import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from action_help.action import MessageTurtleCommands

goals = []

class CommandsActionClient(Node):

	def __init__(self):
		super().__init__('action_client')
		self._action_client = ActionClient(self, MessageTurtleCommands, 'move_turtle')

	def activate(self):
		goal_msg = MessageTurtleCommands.Goal()
		global goals
		goals.append(['forward', 2, 0])
		goals.append(['turn_right', 0, 90])
		goals.append(['forward', 1, 0])
		for task in goals:
			goal_msg.command = task[0]
			goal_msg.s = task[1]
			goal_msg.angle = task[2]

			self._action_client.wait_for_server()
			self._send_goal_future = self._action_client.send_goal_async(goal_msg,feedback_callback=self.feedback_callback)
			self._send_goal_future.add_done_callback(self.goal_response_callback)
			goals.pop(0)
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
		self.get_logger().info('Result: {0}'.format(result.result))
	def feedback_callback(self, feedback_msg):
		feedback = feedback_msg.feedback



def main(args=None):
	rclpy.init(args=args)

	action_client = CommandsActionClient()
	
	global goals
	
	action_client.activate()

	rclpy.spin(action_client)


if __name__ == '__main__':
	main()
