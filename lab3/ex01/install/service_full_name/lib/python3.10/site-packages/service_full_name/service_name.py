import rclpy
from rclpy.node import Node
from tutorial_interfaces.srv import FullName

class ServiceNameNode(Node):
	def __init__(self):
		super().__init__('service_name')
		self.service = self.create_service(FullName, 'summ_full_name', self.handle_service_request)
	def handle_service_request(self, request, response):
	
		full_name = f'{request.last_name} {request.first_name} {request.patronymic}'
		self.get_logger().info(f'Received: {request.last_name} {request.first_name}')
		response.full_name = full_name
		return response

def main(args=None):
	rclpy.init(args=args)
	node = ServiceNameNode()
	rclpy.spin(node)
	rclpy.shutdown()

if __name__ == '__main__':
	main()
