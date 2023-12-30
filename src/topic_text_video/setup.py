from setuptools import find_packages, setup

package_name = 'topic_text_video'

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
            'topic_text_publisher  = topic_text_video.topic_text_publisher:main',
            'topic_text_subscriber  = topic_text_video.topic_text_subscriber:main',
            'topic_video_publisher  = topic_text_video.topic_video_publisher:main',
            'topic_video_subscriber  = topic_text_video.topic_video_subscriber:main',
        ],
    },
)
