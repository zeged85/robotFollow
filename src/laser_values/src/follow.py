#! /usr/bin/env python
 
import rospy
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import Twist 

seq = 0;

left = 0;
mid=0;
right=0;
 
def callback(msg):
	global seq
	global left
	global mid
	global right
	print 'seq:', seq, ' array size: ',len(msg.ranges)

	# values at 0 degree
	avg = 0;
	for x in range(719-50,719):
		avg += msg.ranges[x]
	left = avg / 51
	print left

	
	
	# values at 90 degree
	avg =0;
	for x in range(360-25,360+25):
		avg += msg.ranges[x]
	mid = avg / 51
	print mid


	# values at 180 degree
	avg = 0;
	for x in range(0,50):
		avg += msg.ranges[x]
	right = avg / 51
	print right	
	seq+=1

	#setSpeed(5,0)
	








 
rospy.init_node('scan_values')
sub = rospy.Subscriber('/robot2/scan', LaserScan, callback)
pub_ = rospy.Publisher('/robot2/mobile_base_controller/cmd_vel', Twist, queue_size=50)






def setSpeed(liner_x,angular_z ):

	#rospy.loginfo("Classifiers output: %s in unknown" % data.data)
	#rospy.sleep(2.)
	msg = Twist()
	msg.linear.x = liner_x
	msg.linear.y = 0
	msg.angular.z = -angular_z
	#speed = 0.4 
	#rospy.loginfo("checking for cmd" + str(msg.linear))
	rospy.sleep(0.2)
	pub_.publish(msg)


#follow

while (True):
	if (left > 2 and right > 2):
		if (mid>1):
			setSpeed(5,0)
		else:
			setSpeed(-5,0)

	if (left < 1):
		setSpeed(0,5)
	if (right < 1):
		setSpeed(0,5)





rospy.spin()
