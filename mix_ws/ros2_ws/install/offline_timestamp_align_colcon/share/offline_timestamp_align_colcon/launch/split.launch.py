from launch import LaunchDescription
from launch.actions import ExecuteProcess, LogInfo
import os

def generate_launch_description():
    # ===================== 核心：启动ROS1的split可执行文件（拆分EUROC bag） =====================
    # 定义ROS1环境加载 + split执行的命令串（替换为你的实际路径！）
    split_cmd = [
        'bash',
        '-c',
        # 命令逻辑：加载ROS1环境 → 执行split可执行文件 → 指定输入/输出bag路径
        'source /opt/ros/noetic/setup.bash && source /home/slam/mix_ws/ros1_ws/devel/setup.bash && \
         /home/slam/mix_ws/ros1_ws/devel/lib/offline_timestamp_align/split \
         --input /home/slam/euroc_bag_split/MH_01_easy.bag \
         --output /home/slam/20251209'
    ]

    # 执行split命令（拆分bag）
    split_node = ExecuteProcess(
        cmd=split_cmd,
        name='ros1_split_node',
        output='screen',  # 拆分日志输出到终端，方便新人调试
        on_exit=LogInfo(msg="EUROC bag拆分完成！")  # 拆分完成后打印提示
    )

    # 组装launch描述（仅保留拆分逻辑）
    return LaunchDescription([
        LogInfo(msg="开始拆分EUROC ROS1 bag..."),  # 启动时打印提示
        split_node
    ])
