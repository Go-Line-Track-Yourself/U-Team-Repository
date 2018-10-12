#pragma config(Motor,  port2,           drivea,        tmotorVex393HighSpeed_MC29, openLoop, driveLeft)
#pragma config(Motor,  port3,           driveb,        tmotorVex393HighSpeed_MC29, openLoop, driveLeft)
#pragma config(Motor,  port4,           drivec,        tmotorVex393HighSpeed_MC29, openLoop, reversed, driveRight)
#pragma config(Motor,  port5,           drived,        tmotorVex393HighSpeed_MC29, openLoop, reversed, driveRight)
#pragma config(Motor,  port6,           intake,        tmotorVex393TurboSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port7,           catapulta,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           catapultb,     tmotorVex393_MC29, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void drive_left(int speed){
	motor(port2) = speed;
	motor(port3) =speed;
}
void drive_right(int speed){
	motor(port4) = speed;
	motor(port5)= speed;
}


task main(){
	while(true){

   	drive_left(vexRT[Ch3]);
  	drive_right(vexRT[Ch2]);





   while(vexRT[Btn5U]==1){
     motor(port6) = 172;
   }
   while(vexRT[Btn5D]==1){
     motor(port6)=-172;
   }
   while(vexRT[Btn7L]==1){
     motor(port6)=0;
     motor(port7)=0;
     motor(port8)=0;
   }
   while(vexRT[Btn6U]==1){
     motor(port7) = 172;
     motor(port8)= 172;
   }
   while (vexRT[Btn6D]==1){
     motor(port7) = -172;
     motor(port8)= -172;
   }
 }
}
