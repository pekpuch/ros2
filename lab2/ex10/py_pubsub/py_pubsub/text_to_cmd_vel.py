#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from geometry_msgs.msg import Twist


class TextToCmdVel(Node):
    def __init__(self):
        super().__init__('text_to_cmd_vel')
        
        # Подписчик на топик 'cmd_text'
        self.subscription = self.create_subscription(
            String,
            'cmd_text',
            self.listener_callback,
            10
        )
        self.subscription  # предотвращает предупреждение о ненужной переменной

        # Публикатор в топик '/turtle1/cmd_vel'
        self.publisher_ = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        self.get_logger().info('Node text_to_cmd_vel has been started')

    def listener_callback(self, msg):
        # Создаем сообщение Twist для управления черепахой
        twist = Twist()

        # Обрабатываем текстовые команды
        if msg.data == 'move_forward':
            twist.linear.x = 1.0  # 1 метр в секунду вперед
            twist.angular.z = 0.0
        elif msg.data == 'move_backward':
            twist.linear.x = -1.0  # 1 метр в секунду назад
            twist.angular.z = 0.0
        elif msg.data == 'turn_left':
            twist.linear.x = 0.0
            twist.angular.z = 1.5  # 1.5 радиан в секунду влево
        elif msg.data == 'turn_right':
            twist.linear.x = 0.0
            twist.angular.z = -1.5  # 1.5 радиан в секунду вправо
        else:
            self.get_logger().warn('Received unknown command: "%s"' % msg.data)
            return

        # Публикуем сообщение Twist
        self.publisher_.publish(twist)
        self.get_logger().info('Published Twist command for: "%s"' % msg.data)


def main(args=None):
    rclpy.init(args=args)
    node = TextToCmdVel()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
