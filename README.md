# Ros-2-simulated-robot.
A ros 2 simulated robot.

NOTE: You can also use a cad design software(FUSION 360, SOLIDWORKS......) to design the robot and export to ROS  and also ROS 2,but this is just a repository that describes how to design a robot manually, by writing .xacro files which are said to be robot meshes.

Fisrt step in building the differential-drive robot:

Launch the Node:
```
ros2 launch <name_of_package> robot.launch.py
```

The centre of the robot which is the "base_link".
![Screenshot from 2023-02-27 21-04-28](https://user-images.githubusercontent.com/97457075/221671549-a60614d6-63c9-412c-a5c9-c64f835dd671.png)

Side View:
![Screenshot from 2023-02-27 21-14-38](https://user-images.githubusercontent.com/97457075/221673697-7cae1bd6-102d-47cf-85dd-04da080cab99.png)

The joint state publisher node must be launched/be active when launching the robot in rviz2.
```
  ros2 run joint_state_publisher_gui joint_state_publisher_gui
```
[Screencast from 02-27-2023 11:49:18 PM.webm](https://user-images.githubusercontent.com/97457075/221705863-6d2f564c-4097-4932-8e82-64d90084fdc4.webm)
