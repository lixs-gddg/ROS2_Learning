from setuptools import find_packages
from setuptools import setup

setup(
    name='cartographer_ros_msgs',
    version='2.0.9001',
    packages=find_packages(
        include=('cartographer_ros_msgs', 'cartographer_ros_msgs.*')),
)
