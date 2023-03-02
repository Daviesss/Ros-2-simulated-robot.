# Ros-2-simulated-robot.
A ros 2 simulated robot.

NOTE: You can also use a cad design software(FUSION 360, SOLIDWORKS......) to design the robot and export to ROS  and also ROS 2,but this is just a repository that describes how to design a robot manually, by writing .xacro files which are said to be robot meshes.

Fisrt step in building the differential-drive robot:

Launch the Node:
```
ros2 launch <name_of_package> robot.launch.py
```

The joint state publisher node must be launched/be active when launching the robot in rviz2.
```
  ros2 run joint_state_publisher_gui joint_state_publisher_gui
```

Open Rviz2:
```
  ros2 run rviz2 rviz2
```

Set the fixed frame to "base_link".

The centre of the robot which is the "base_link".
![Screenshot from 2023-02-27 21-04-28](https://user-images.githubusercontent.com/97457075/221671549-a60614d6-63c9-412c-a5c9-c64f835dd671.png)

Side View:
![Screenshot from 2023-02-27 21-14-38](https://user-images.githubusercontent.com/97457075/221673697-7cae1bd6-102d-47cf-85dd-04da080cab99.png)

[Screencast from 02-27-2023 11:49:18 PM.webm](https://user-images.githubusercontent.com/97457075/221705863-6d2f564c-4097-4932-8e82-64d90084fdc4.webm)

Plugins used in simulation of the robot can be gotten from:
https://classic.gazebosim.org/tutorials?tut=ros_gzplugins


STEPS TO TAKE TO GET THE ROBOT UP AND READY:
1. Launch the robot_state_publisher in simulation mode.
2. Launch Gazebo.
3. Spawn the robot into Gazebo.

Set the sim time to true,we dealing with simulation.So our the boolean has to be true.
```
   ros2 launch robot robot.launch.py use_sim_time:=true
```
Start up Gazebo:
```
   ros2 launch gazebo_ros gazebo.launch.py 
```

# SPAWNING THE ROBOT INTO GAZEBO:
     To spawn the robot into gazebo, launch the file called show.robot.launch.py (Note: launch files in ROS 2 are python scripts/files)
 Command:
 ```
   ros2 launch robot show.robot.launch.py
 ```
 You will see the robot spawned into gazebo like below:
 
 ![Screenshot from 2023-03-02 22-17-08](https://user-images.githubusercontent.com/97457075/222561038-04a12b53-c1d6-42e7-8cdf-2b6499aefbdf.png)

 
 
 
 Check if the topics are available.This list all topics which are available:
 ```
   ros2 topic list
 ```
 Now,we can drive the robot around once we use the teleop_twist_keyboard node to publish to the "/cmd_vel" topic that the robot subscribes to.
 
 ```
   ros2 run teleop_twist_keyboard  teleop_twist_keyboard
 ```
 
 You can give colour to the robot,by adding colour to the .xacro file.Video decription below,while using the teleop_twist_keyboard to drive the robot.
 
 [Screencast from 03-02-2023 11:04:45 PM.webm](https://user-images.githubusercontent.com/97457075/222569557-016ae0a3-1b43-441e-ab52-4344ecfc5c50.webm)

 
 
 
 
 
 
 
