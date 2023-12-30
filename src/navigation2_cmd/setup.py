from setuptools import find_packages, setup

package_name = 'navigation2_cmd'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ricardo',
    maintainer_email='ricardo@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "init_robot_pose=navigation2_cmd.init_robot_pose:main",
            "set_up_inspection_points=navigation2_cmd.set_up_inspection_points:main",
            "start_patrol=navigation2_cmd.start_patrol:main",
        ],
    },
)
