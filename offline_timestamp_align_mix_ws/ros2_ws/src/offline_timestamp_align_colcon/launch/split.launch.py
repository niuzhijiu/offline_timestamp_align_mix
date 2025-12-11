from launch import LaunchDescription
from launch.actions import ExecuteProcess, LogInfo
import os

def generate_launch_description():
    # 定义ROS1环境加载以及split执行的命令串
    split_cmd = [
        'bash',
        '-c',
        'source /opt/ros/noetic/setup.bash && source /home/slam/mix_ws/ros1_ws/devel/setup.bash && \
         /home/slam/mix_ws/ros1_ws/devel/lib/offline_timestamp_align/split' 
    ]

    # 执行split命令
    split_node = ExecuteProcess(
        cmd=split_cmd,
        name='ros1_split_node',
        output='screen', 
        on_exit=LogInfo(msg="EUROC bag拆分完成")  
    )

    # 组装launch描述
    return LaunchDescription([
        LogInfo(msg="开始拆分EUROC ROS1 bag..."), 
        split_node
    ])
