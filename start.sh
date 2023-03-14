#!/usr/bin/env bash
. /usr/share/gazebo/setup.sh #source the gazebo setup.
. /home/magnum/simuate_ws/src/robot/install/setup.bash #source the install/setup.bash file in the workspace.
ros2 launch  robot show.robot.launch.py world:=/home/magnum/simuate_ws/src/robot/worlds/new.world  #launch the gazebo world.
ros2 launch robot navigation.launch.py #launch the navigation file.
