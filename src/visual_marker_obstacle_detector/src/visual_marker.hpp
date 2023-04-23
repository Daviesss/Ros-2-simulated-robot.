#pragma once 
#include "sensor_msgs/msg/laser_scan.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "rclcpp/rclcpp.hpp"
#include "visualization_msgs/msg/marker.hpp"
#include "tf2_ros/transform_listener.h"
#include "tf2_ros/transform_broadcaster.h"
#include "geometry_msgs/msg/transform_stamped.h"
#include "tf2/buffer_core.h"

namespace marker_{
using namespace std::chrono_literals;
using std::placeholders::_1;
class mark : public rclcpp::Node{
        public:
        mark(); //default constructor class
        void laser_callback(const sensor_msgs::msg::LaserScan::UniquePtr msg);//laser_scan callback 
        void visual_marker_control();
        void foward();
        void right();
        //Time duration
        const rclcpp::Duration Turning_time {2s};
        const rclcpp::Duration Backward_time{2s};
        const rclcpp::Duration Scan_time{1s};
        int counter;
        float distance_laser;
        float linear_speed;
        float angular_speed;
        visualization_msgs::msg::Marker marking;
        tf2::BufferCore buffer;
        geometry_msgs::msg::TransformStamped stamped_;
        geometry_msgs::msg::Twist pub_vel;
        tf2_ros::TransformListener listener;
        // tf2_ros::TransformBroadcaster broadcaster;
        rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr vel_pub;
        rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr scan_sub;
        rclcpp::TimerBase::SharedPtr timer_;
        rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr marker__;
};

}//namespace bump_go_cpp
