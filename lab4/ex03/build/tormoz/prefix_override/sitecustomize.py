import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/kirill/Desktop/robotics/lab4/ex03/install/tormoz'
