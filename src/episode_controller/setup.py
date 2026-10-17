from setuptools import setup, find_packages
import os
from glob import glob

package_name = 'episode_controller'

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
    include_package_data=True,
    maintainer='enpei',
    maintainer_email='enpeicv@outlook.com',
    description='Episode controller package',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'interface = episode_controller.robot_interface_node:main',
            'client_demo = demo.client_demo:main',
            'moveit_bridge = episode_controller.moveit_trajectory_bridge:main',
        ],
    },
)
