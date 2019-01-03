#! /usr/bin/env python
 
import rospy
from sensor_msgs.msg import LaserScan
 
def callback(msg):
    print len('laser array size: ' + msg.ranges)
 
rospy.init_node('scan_values')
sub = rospy.Subscriber('/robot1/scan', LaserScan, callback)
rospy.spin()
