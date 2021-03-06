#pragma config(Sensor, dgtl1,  ,               sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  ,               sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  ,               sensorQuadEncoder)
#pragma config(Sensor, dgtl7,  ,               sensorQuadEncoder)
#pragma config(Motor,  port2,           drivea,        tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port3,           driveb,        tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port4,           drivec,        tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port5,           drived,        tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port6,           puncher,       tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           intake,        tmotorVex393TurboSpeed_MC29, openLoop)
#pragma config(Motor,  port8,           flipper,       tmotorVex393HighSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port9,           roller_fix,    tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void drive_left(int speed){
	motor(drivea)=speed;
	motor(driveb)=speed;
}
void drive_right(int speed){
	motor(drivec)=speed;
	motor(drived)=speed;
}

// This code is for the VEX cortex platform
#pragma platform(VEX2)

// Select Download method as "competition"
#pragma competitionControl(Competition)

//Main competition background code...do not modify!
#include "Vex_Competition_Includes.c"

/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the cortex has been powered on and    */
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/

void pre_auton()
{

	bStopTasksBetweenModes = true;


	/*---------------------------------------------------------------------------*/
	/*                                                                           */
	/*                              Autonomous Task                              */
	/*                                                                           */
	/*  This task is used to control your robot during the autonomous phase of   */
	/*  a VEX Competition.                                                       */
	/*                                                                           */
	/*  You must modify the code to add your own robot specific commands here.   */
	/*---------------------------------------------------------------------------*/
}
task autonomous()
{

	AutonomousCodePlaceholderForTesting();
}

/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

task usercontrol()
{
	while(true){
		drive_left(vexRT[Ch3]);
		drive_right(vexRT[Ch2]);
		while(vexRT[Btn7U]==1){
			while(vexRT[Btn5U]==1){
		}
		//test



    }
}
