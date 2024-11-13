import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/mnt/c/Users/atlak/OneDrive/Рабочий стол/labs/ros/lab2/ex03/install/pekpuch'
