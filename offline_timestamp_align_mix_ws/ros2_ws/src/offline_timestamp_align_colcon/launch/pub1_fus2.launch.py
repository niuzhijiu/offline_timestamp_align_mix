from launch import LaunchDescription
from launch.actions import ExecuteProcess, LogInfo, TimerAction
from launch_ros.actions import Node  

def generate_launch_description():
    # ===================== 1. 启动ROS1的publish_node =====================
    ros1_publish_node = ExecuteProcess(
        cmd=[
            'bash',
            '-c',
            # 清空ROS2环境,加载ROS1环境,启动publish_node
            'unset ROS_DISTRO ROS_VERSION AMENT_PREFIX_PATH COLCON_PREFIX_PATH && \
             source /opt/ros/noetic/setup.bash && \
             source /home/slam/mix_ws/ros1_ws/devel/setup.bash && \
             /home/slam/mix_ws/ros1_ws/devel/lib/offline_timestamp_align/publish_node \
             _cam_csv:=/home/slam/20251212_ros1/cam0_aligned.csv \
             _image_dir:=/home/slam/20251212_ros1/cam0/ \
             _imu_csv:=/home/slam/20251212_ros1/imu0_data.csv'
        ],
        name='publish_node',
        output='screen'
    )

    # ===================== 2. 启动ROS2的fusion_node_colcon（延迟1秒） =====================
    # 延迟1秒启动,等ROS1 publish_node就绪，确保数据接收方先启动
    ros2_fusion_node_delayed = TimerAction(
        period=1.0,  # 延迟1秒
        actions=[
            Node( 
                package='offline_timestamp_align_colcon',
                executable='fusion_node_colcon',
                name='fusion_node_colcon',  
                output='screen'
            )
        ]
    )

    # ===================== 组装启动逻辑 =====================
    return LaunchDescription([
        LogInfo(msg="=== 注意：请先手动启动roscore + ros1_bridge！==="),
        LogInfo(msg="=== 启动ROS1 publish_node + ROS2 fusion_node_colcon ==="),
        ros1_publish_node,          # 先启动ROS1发布节点
        ros2_fusion_node_delayed    # 延迟1秒启动ROS2融合节点
    ])
