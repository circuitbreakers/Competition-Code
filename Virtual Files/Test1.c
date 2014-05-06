#pragma config(Sensor, in1,    leftLineFollower, sensorLineFollower)
#pragma config(Sensor, in2,    centerLineFollower, sensorLineFollower)
#pragma config(Sensor, in3,    rightLineFollower, sensorLineFollower)
#pragma config(Sensor, in4,    gyro,           sensorGyro)
#pragma config(Sensor, in6,    armPot,         sensorPotentiometer)
#pragma config(Sensor, dgtl1,  rightEncoder,   sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  leftEncoder,    sensorQuadEncoder)
#pragma config(Sensor, dgtl6,  touchSensor,    sensorTouch)
#pragma config(Sensor, dgtl8,  sonarSensor,    sensorSONAR_cm)
#pragma config(Motor,  port2,           rightMotor,    tmotorServoContinuousRotation, openLoop, reversed)
#pragma config(Motor,  port3,           leftMotor,     tmotorServoContinuousRotation, openLoop)
#pragma config(Motor,  port4,           right1,        tmotorServoContinousRotation,  openLoop, reversed)
#pragma config(Motor,  port5,           left1,         tmotorServoContinousRotation,  openLoop)
#pragma config(Motor,  port8,           lift1,         tmotorServoContinousRotation, openLoop)
#pragma config(Motor,  port9,           lift2,         tmotorServoContinousRotation, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard
//	This setup is for the SQUAREBOT	model

/************************************\
|*  Robot Virtual World Template    *|
|*                                  *|
|*  DO NOT OVERWRITE THIS FILE      *|
|*  MAKE SURE TO "SAVE AS" INSTEAD  *|
\************************************/

void stop(){
	motor[rightMotor] = 0;
	motor[right1] = 0;
	motor[left1] = 0;
	motor[leftMotor]= 0;
}


void forward(int speed, int time) {
	motor[rightMotor] = speed;
	motor[leftMotor] = -speed;
	motor[right1] = speed;
	motor[left1] = -speed;
	wait1Msec(time);
stop();
}//end of function

void lift(int speed) {
   motor[lift1] = speed;
   motor[lift2] = speed;
}



task main()
{


	forward(75, 1000);
	lift(80);

}
