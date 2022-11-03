from trial_interface.srv import XYZ

import rclpy
from rclpy.node import Node

class TrialService(Node):
   def __init__(self):
      super().__init__('trial_server')   #node name
      self.srv = self.create_service(XYZ, 'trial_service', self.square_sum_callback) #srv name
      
   def square_sum_callback(self, request, response):
       response.sqsum = request.x ** 2 + request.y ** 2 +request.z **2
       self.get_logger().info('Incoming request\nx: %d  y:  %d  z:  %d'  % (request.x, request.y, request.z))
       return response
       

def main(args=None):
    try:
        rclpy.init(args=args)
        trial_server = TrialService()
        rclpy.spin(trial_server)
    except KeyboardInterrupt:
       pass
    finally:
       trial_server.destroy_node()
       rclpy.shutdown()
       
       
if __name__ == '__main__':
   main()               
