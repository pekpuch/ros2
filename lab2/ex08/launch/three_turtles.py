from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # Запуск первого окна с черепахой
        Node(
            package='turtlesim',
            executable='turtlesim_node',
            name='turtle1'
        ),
        
        # Запуск второго окна с черепахой
        Node(
            package='turtlesim',
            executable='turtlesim_node',
            name='turtle2'
        ),
        
        # Запуск третьего окна с черепахой
        Node(
            package='turtlesim',
            executable='turtlesim_node',
            name='turtle3'
        ),
        
        # Узел mimic для второй черепахи, повторяющей движения первой
        Node(
            package='turtlesim',
            executable='mimic',
            name='mimic2',
            remappings=[
                ('/input', '/turtle1/cmd_vel'),
                ('/output', '/turtle2/cmd_vel'),
            ]
        ),
        
        # Узел mimic для третьей черепахи, повторяющей движения второй
        Node(
            package='turtlesim',
            executable='mimic',
            name='mimic3',
            remappings=[
                ('/input', '/turtle2/cmd_vel'),
                ('/output', '/turtle3/cmd_vel'),
            ]
        )
    ])
