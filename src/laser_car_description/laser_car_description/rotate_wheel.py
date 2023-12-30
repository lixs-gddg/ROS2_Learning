#!/usr/bin/env python3
# -*- coding: utf-8 -*-
import rclpy
import threading
import time
from rclpy.node import Node
from sensor_msgs.msg import JointState 
# 导入消息类型JointState

"""
创建一个轮子旋转节点
"""

class RotateWheelNode(Node):
    def __init__(self,name):
        super().__init__(name)
        self.get_logger().info(f"node {name} init..")
        self.joint_states_publisher=self.create_publisher(JointState,"joint_states", 10) # 创建并初始化发布者成员属性joint_states_publisher
        # 初始化数据
        # 初始左右轮子的速度
        self.joint_speeds = [0.0,0.0]

        self.joint_states = JointState()
        # 时间戳
        self.joint_states.header.stamp = self.get_clock().now().to_msg()
        self.joint_states.header.frame_id = ""
        # 关节名称
        self.joint_states.name = ['left_wheel_joint','right_wheel_joint']
        # 关节的位置
        self.joint_states.position = [0.0,0.0]
        # 关节速度
        self.joint_states.velocity = self.joint_speeds
        # 力 
        self.joint_states.effort = []

        self.pub_rate = self.create_rate(30)
        self.thread_ = threading.Thread(target=self.thread_pub)
        self.thread_.start()
    
    def thread_pub(self):          #多线程定频发布
        last_time = time.time()
        while rclpy.ok():
            recent_time=time.time()
            interval_time=recent_time-last_time
            last_time=recent_time
            # 更新位置
            self.joint_states.position[0]  += interval_time*self.joint_states.velocity[0]
            self.joint_states.position[1]  += interval_time*self.joint_states.velocity[1]
            # 更新速度
            self.joint_states.velocity = self.joint_speeds
            # 更新时间戳
            self.joint_states.header.stamp = self.get_clock().now().to_msg()
            # 发布关节数据
            self.joint_states_publisher.publish(self.joint_states)
            self.pub_rate.sleep()

    def set_speed(self,speeds):     #速度设置接口
        self.joint_speeds = speeds


def main(args=None):
    """
    ros2运行该节点的入口函数
    1. 导入库文件
    2. 初始化客户端库
    3. 新建节点
    4. spin循环节点
    5. 关闭客户端库
    """
    rclpy.init(args=args) # 初始化rclpy
    node = RotateWheelNode("rotate_laser_car_wheel")  # 新建一个节点
    node.set_speed([15.0,-15.0]) #设置速度
    rclpy.spin(node) # 保持节点运行，检测是否收到退出指令（Ctrl+C）
    rclpy.shutdown() # 关闭rclpy
