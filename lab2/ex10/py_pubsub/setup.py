from setuptools import setup
import os
from glob import glob

package_name = 'py_pubsub'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='pekpuch',
    maintainer_email='n.glazkov@g.nsu.ru',
    description='A package to translate text commands into velocity commands for turtlesim',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'text_to_cmd_vel = py_pubsub.text_to_cmd_vel:main'
        ],
    },
)
