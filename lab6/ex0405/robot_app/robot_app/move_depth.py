from geometry_msgs.msg import Twist
from sensor_msgs.msg import Image
from rclpy.node import Node
import rclpy
from cv_bridge import CvBridge, CvBridgeError
import cv2
import numpy as np
import time
class Happy(Node):

     def __init__(self):
         # Creates a node with name 'turtlebot_controller' and make sure it is a
         # unique node (using anonymous=True).
         super().__init__('happy')

         # Publisher which will publish to the topic '/turtle1/cmd_vel'.
         self.velocity_publisher = self.create_publisher(Twist, '/robot/cmd_vel', 10)
         self.pose_subscriber = self.create_subscription(Image, '/depth/image', self.update_pose, 10)
         self.scan = Image()
         self.timer = self.create_timer(0.5, self.move)
         self.br = CvBridge()

     def update_pose(self, data):
         self.scan = data

     def move(self):
         """Moves the turtle to the goal."""
         
         vel_msg = Twist()
         d = self.scan
        #  vel_msg.linear.x = 0
         try:
            cv_image = self.br.imgmsg_to_cv2(d, desired_encoding='passthrough')

         except CvBridgeError as e:
            self.get_logger().error(f'CvBridge Error: {e}')

         depth_array = np.array(cv_image, dtype=np.float32).clip(min=0, max=10)
        #  print(depth_array.shape)
        #  print(depth_array)
         block = depth_array[30:60,420:460]
        #  print(block)
         dist = np.mean(block)
         print(dist) 
         depth_image = cv2.normalize(depth_array, None, 0, 255, cv2.NORM_MINMAX)
         depth_image = np.uint8(depth_image)
         cv2.imshow('Depth Image', depth_image)
         cv2.waitKey(1)
         if dist >0.7:
            vel_msg.linear.x = 0.6
         else:
            vel_msg.linear.x = 0.0
         self.velocity_publisher.publish(vel_msg)

         
 
         
def main(args=None):
    rclpy.init(args=args)
    #give time to place an obstacle 
    time.sleep(2)
    x = Happy()
    rclpy.spin(x)
    x.destroy_node()
    rclpy.shutdown()

 
if __name__ == '__main__':
    main()