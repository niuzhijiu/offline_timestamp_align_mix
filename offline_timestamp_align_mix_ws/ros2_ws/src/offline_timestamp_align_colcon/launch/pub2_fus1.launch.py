from launch import LaunchDescription
from launch.actions import ExecuteProcess, LogInfo, TimerAction
from launch_ros.actions import Node  

def generate_launch_description():
    # ===================== 1. 启动ROS1的fusion_node =====================
    ros1_fusion_node = ExecuteProcess(
        cmd=[
            'bash',
            '-c',
            # 清空ROS2环境,加载ROS1环境,启动fusion_node
            'unset ROS_DISTRO ROS_VERSION AMENT_PREFIX_PATH COLCON_PREFIX_PATH && \
             source /opt/ros/noetic/setup.bash && \
             source /home/slam/mix_ws/ros1_ws/devel/setup.bash && \
             /home/slam/mix_ws/ros1_ws/devel/lib/offline_timestamp_align/fusion_node'
        ],
        name='fusion_node',
        output='screen'  
    )

    # ===================== 2. 启动ROS2的publish_node_colcon（延迟1秒） =====================
    # 延迟1秒：确保ROS1的fusion_node先启动就绪，避免数据丢失
    ros2_publish_node_delayed = TimerAction(
        period=1.0,
        actions=[
            Node(
                package='offline_timestamp_align_colcon',  # ROS2包名
                executable='publish_node_colcon',          # ROS2可执行文件
                name='publish_node_colcon',                # ROS2节点名
                output='screen',
                parameters=[
                    {'cam_csv': '/home/slam/20251212_ros2/cam0_aligned.csv'},
                    {'image_dir': '/home/slam/20251212_ros2/cam0/'},
                    {'imu_csv': '/home/slam/20251212_ros2/imu0_data.csv'}
                ]
            )
        ]
    )

    # ===================== 组装启动逻辑 =====================
    return LaunchDescription([

        LogInfo(msg="=== 注意：请先手动启动ros1_bridge！==="),
        LogInfo(msg="=== 启动ROS1 fusion_node + ROS2 publish_node_colcon ==="),
        ros1_fusion_node,          # 先启动ROS1融合节点
        ros2_publish_node_delayed  # 延迟1秒启动ROS2发布节点
    ])
