from launch import LaunchDescription
from launch.actions import ExecuteProcess, LogInfo
import os

def generate_launch_description():
    # 1. 启动ROS1的fusion_node
    fusion_cmd = [
        'bash',
        '-c',
        # 显式bash，绝对路径
        'source /opt/ros/noetic/setup.bash && source /home/slam/mix_ws/ros1_ws/devel/setup.bash && \
         /home/slam/mix_ws/ros1_ws/devel/lib/offline_timestamp_align/fusion_node'
    ]
    fusion_node = ExecuteProcess(
        cmd=fusion_cmd,
        name='fusion_node',
        output='screen'
    )

    # 2. 启动ROS1的publish_node（延迟1秒，固化参数）
    publish_cmd = [
        'bash',
        '-c',
        'source /opt/ros/noetic/setup.bash && source /home/slam/mix_ws/ros1_ws/devel/setup.bash && \
         sleep 1 && \
         /home/slam/mix_ws/ros1_ws/devel/lib/offline_timestamp_align/publish_node \
         _cam_csv:=/home/slam/20251212_ros1/cam0_aligned.csv \
         _image_dir:=/home/slam/20251212_ros1/cam0/ \
         _imu_csv:=/home/slam/20251212_ros1/imu0_data.csv'
    ]
    publish_node = ExecuteProcess(
        cmd=publish_cmd,
        name='publish_node',
        output='screen'
    )

    # 3. 组装launch描述
    return LaunchDescription([
        LogInfo(msg="Starting ROS1 nodes (fusion + publish) from ROS2 launch..."),
        fusion_node,
        publish_node
    ])
