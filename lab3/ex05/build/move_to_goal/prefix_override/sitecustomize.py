import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/kirill/Desktop/robotics/lab3/ex05/install/move_to_goal'
