import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/kirill/Desktop/robotics/lab4/ex02/morkovka/install/morkovka'
