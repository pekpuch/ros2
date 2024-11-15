import sys
import rclpy
from rclpy.node import Node
from tutorial_interfaces.srv import FullName

class FullNameClient(Node):
    def __init__(self):
        super().__init__('client_name')
        self.client = self.create_client(FullName, 'summ_full_name')

        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting...')

        self.req = FullName.Request()

    def send_request(self, last_name, first_name, patronymic):
        self.req.last_name = last_name
        self.req.first_name = first_name
        self.req.patronymic = patronymic

        future = self.client.call_async(self.req)
        rclpy.spin_until_future_complete(self, future)

        return future.result()

def main(args=None):
    rclpy.init(args=args)

    if len(sys.argv) != 4:
        print("Usage: ros2 run <package_name> client_name <LastName> <FirstName> <Patronymic>")
        return

    last_name = sys.argv[1]
    first_name = sys.argv[2]
    patronymic = sys.argv[3]

    node = FullNameClient()
    response = node.send_request(last_name, first_name, patronymic)

    if response:
        node.get_logger().info(
   	    'Full Name: %s' % response.full_name)

    else:
        node.get_logger().error('Ошибка при вызове сервиса')


    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

