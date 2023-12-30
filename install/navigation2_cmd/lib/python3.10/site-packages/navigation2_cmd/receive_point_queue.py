#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import rclpy                      # ROS2 Python接口库
from rclpy.node   import Node     # ROS2 节点类
from geometry_msgs.msg import PointStamped
from visualization_msgs.msg import MarkerArray, Marker
import pickle
import os
import random
"""
创建一个转发者节点
"""
class Retransmission_Node(Node):

    def __init__(self, name):
        super().__init__(name)                             # ROS2节点父类初始化
        #接收选中的点
        self.sub = self.create_subscription(PointStamped, "/clicked_point", self.listener_callback, 10) # 创建订阅者对象（消息类型、话题名、订阅者回调函数、队列长度）
        #转发被选中的点序列
        self.pub = self.create_publisher(MarkerArray, 'visualization_marker_array', 10)
        self.marker_array = MarkerArray()
        self.id=1
        file_path=os.path.dirname(os.path.relpath(__file__))
        self.goal_poses_file=(file_path.split('/')[0])+"/src/navigation2_cmd/point_temp.pkl"
        self.goal_poses=[]
        #print(self.goal_poses_file)

    def listener_callback(self, msg):                      # 创建回调函数，执行收到话题消息后对数据的处理
        self.get_logger().info('I heard: "%s"' % msg)      # 输出日志信息，提示订阅收到的话题消息
        #添加标记点
        marker = Marker()
        marker.header.frame_id = msg.header.frame_id
        marker.type = Marker.SPHERE
        marker.action = Marker.ADD
        marker.pose.position.x = msg.point.x
        marker.pose.position.y = msg.point.y
        marker.pose.position.z = msg.point.z
        marker.pose.orientation.w=1.0
        marker.scale.x = 0.2
        marker.scale.y = 0.2
        marker.scale.z = 0.2
        marker.color.a = 0.75
        marker.color.r = random.random()
        marker.color.g = random.random()
        marker.color.b = random.random()
        marker.id=self.id
        self.id=self.id+1
        self.marker_array.markers.append(marker)
        self.pub.publish(self.marker_array)
        #存入文件中
        self.goal_poses.append([msg.point.x,msg.point.y,msg.point.z])
        with open(self.goal_poses_file, 'wb') as f:
            pickle.dump(self.goal_poses, f)

def main(args=None):                               # ROS2节点主入口main函数
    rclpy.init(args=args)                          # ROS2 Python接口初始化
    node = Retransmission_Node("clickepoint_sub")  # 创建ROS2节点对象并进行初始化
    rclpy.spin(node)                               # 循环等待ROS2退出
    node.destroy_node()                            # 销毁节点对象
    rclpy.shutdown()  