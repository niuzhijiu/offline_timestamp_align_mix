from launch import LaunchDescription
from launch.actions import ExecuteProcess, LogInfo, TimerAction
from launch_ros.actions import Node  

def generate_launch_description():

    # 集中管理编码路径
    # ROS1工作空间环境变量路径
    ROS1_WS_SETUP = "/home/cat/education_mix_ws/ros1_ws/devel/setup.bash"
    # ROS1 fusion_node可执行文件路径
    ROS1_FUSION_NODE_EXEC = "/home/cat/education_mix_ws/ros1_ws/devel/lib/offline_timestamp_align/fusion_node"
    # ROS2发布节点参数路径
    ROS2_PUB_PARAMS = {
        "cam_csv": "/home/cat/foxy_education_data/cam0_aligned.csv",
        "image_dir": "/home/cat/noetic_education_data/cam0/",
        "imu_csv": "/home/cat/noetic_education_data/imu0_data.csv"
    }

    # 1. 启动ROS1的fusion_node
    ros1_fusion_node = ExecuteProcess(
        cmd=[
            'bash',
            '-c',
            f'unset ROS_DISTRO ROS_VERSION AMENT_PREFIX_PATH COLCON_PREFIX_PATH && source /opt/ros/noetic/setup.bash && source {ROS1_WS_SETUP} && {ROS1_FUSION_NODE_EXEC}'
        ],
        name='fusion_node',
        output='screen'  
    )

    # 2. 延迟1秒启动ROS2的publish_node_colcon
    ros2_publish_node_delayed = TimerAction(
        period=1.0,
        actions=[
            Node(
                package='offline_timestamp_align_colcon',                 # ROS2包名
                executable='publish_node_colcon',                         # ROS2可执行文件
                name='publish_node_colcon',                               # ROS2节点名
                output='screen',
                parameters=[ROS2_PUB_PARAMS]
            )
        ]
    )

    # 组装启动逻辑
    return LaunchDescription([
        LogInfo(msg="=== 请先手动启动roscore和ros1_bridge ==="),
        ros1_fusion_node,                                                 # 启动ROS1融合节点
        ros2_publish_node_delayed                                         # 延迟1秒启动ROS2发布节点
    ])
