import pickle
from nav2_simple_commander.robot_navigator import BasicNavigator, TaskResult
import rclpy
from rclpy.duration import Duration
import os
from geometry_msgs.msg import PoseStamped


def get_goal_poses(points,navigator):
    goal_poses=[]
    for point in points:
    # 访问点的坐标
        x,y,z= point
        goal_pose = PoseStamped()
        goal_pose.header.frame_id = 'map'
        goal_pose.header.stamp = navigator.get_clock().now().to_msg()
        goal_pose.pose.position.x = x
        goal_pose.pose.position.y = y
        goal_pose.pose.orientation.z = z
        goal_pose.pose.orientation.w = 1.0
        goal_poses.append(goal_pose)
    return goal_poses


def main(args=None): 
    rclpy.init()
    navigator = BasicNavigator()
    file_path=os.path.dirname(os.path.relpath(__file__))
    goal_poses_file=(file_path.split('/')[0])+"/src/navigation2_cmd/point_temp.pkl"
    with open(goal_poses_file, 'rb') as f:
        points = pickle.load(f)
    goal_poses=get_goal_poses(points,navigator)

    while True:
        try:
            navigator.followWaypoints(goal_poses)
            nav_start=navigator.get_clock().now()
            while not navigator.isTaskComplete():
                # Do something with the feedback
                feedback = navigator.getFeedback()
                if feedback :
                    print('Executing current waypoint: ' +
                          str(feedback.current_waypoint + 1) + '/' + str(len(goal_poses)))
                    now = navigator.get_clock().now()

                    # Some navigation timeout to demo cancellation
                    if now - nav_start > Duration(seconds=600.0):
                        navigator.cancelTask()

            # Do something depending on the return code
            result = navigator.getResult()
            if result == TaskResult.SUCCEEDED:
                print('Goal succeeded!')
            elif result == TaskResult.CANCELED:
                print('Goal was canceled!')
            elif result == TaskResult.FAILED:
                print('Goal failed!')
            else:
                print('Goal has an invalid return status!')
            pass
        except KeyboardInterrupt:
            navigator.cancelTask()
            print("循环被中断")
            break
    
    exit(0)
