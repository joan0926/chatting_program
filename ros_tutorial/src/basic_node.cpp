#include <ros/ros.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "basic_node");
  ros::NodeHandle nh;

  int c=0;

  while (c<10)
  {
    ROS_INFO("20717 chi");
    c++;
  }

  return 0;
}
