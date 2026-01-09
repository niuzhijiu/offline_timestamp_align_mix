from launch import LaunchDescription
from launch.actions import ExecuteProcess, LogInfo, TimerAction
from launch_ros.actions import Node  

def generate_launch_description():

    # 集中管理编码路径
    # ROS1环境配置路径
    ROS1_WS_SETUP = "/home/cat/education_mix_ws/ros1_ws/devel/setup.bash"
    ROS1_NOETIC_SETUP = "/opt/ros/noetic/setup.bash"
    
    # ROS1 发布节点参数
    ROS1_PUB_PARAMS = {
        "cam_csv": "/home/cat/noetic_education_data/cam0_aligned.csv",
        "image_dir": "/home/cat/noetic_education_data/cam0/",
        "imu_csv": "/home/cat/noetic_education_data/imu0_data.csv"
    }
    
    # ROS2 融合节点配置
    ROS2_FUSION_PACKAGE = "offline_timestamp_align_colcon"
    ROS2_FUSION_EXEC = "fusion_node_colcon"
    ROS2_FUSION_NODE_NAME = "fusion_node_colcon"

    # 1. 启动ROS2的fusion_node_colcon
    ros2_fusion_node = Node( 
        package=ROS2_FUSION_PACKAGE,
        executable=ROS2_FUSION_EXEC,
        name=ROS2_FUSION_NODE_NAME,  
        output='screen'
    )

    # 2. 延迟1秒启动ROS1的publish_node
    ros1_pub_cmd = (
        f'unset ROS_DISTRO ROS_VERSION AMENT_PREFIX_PATH COLCON_PREFIX_PATH && '
        f'source {ROS1_NOETIC_SETUP} && '
        f'source {ROS1_WS_SETUP} && '
        f'rosrun offline_timestamp_align publish_node '
        f'_cam_csv:={ROS1_PUB_PARAMS["cam_csv"]} '
        f'_image_dir:={ROS1_PUB_PARAMS["image_dir"]} '
        f'_imu_csv:={ROS1_PUB_PARAMS["imu_csv"]}'
    )

    ros1_publish_node_delayed = TimerAction(
        period=1.0,
        actions=[
            ExecuteProcess(
                cmd=['bash', '-c', ros1_pub_cmd],
                name='publish_node',
                output='screen'
            )
        ]
    )

    # 组装启动逻辑
    return LaunchDescription([
        LogInfo(msg="=== 请先手动启动roscore和ros1_bridge ==="),
        ros2_fusion_node,                                               # 启动ROS2融合节点
        ros1_publish_node_delayed                                       # 延迟1秒启动ROS1发布节点
    ])
