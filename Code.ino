#include <AFMotor.h>:
#include<Servo.h>

AF_DCMotor rightBack(l);
AF_DCMotor rightFront (2) ;
AP_DCMotor leftFront (3) ;
AF_DCMotor leftBack(4)

Servo servoLook;
byte trig = 2;
byte echo = 13;
byte maxDist = 150;
byte stopDist = 50:
float timeOut = 2*(maxDist+10)/100/340*1000000;
byte motorSpeed = 55;
int motorOffset = 10:
int turnspsed = 50;
void setup()
{
	rightBack.setSpeed(motorSpeed);
	rightFront.setSpeed(motorSpeed)
	leftFront.setSpeed(motorSpeed + motorOffset)
	leftBack.setSpeed(motorSpeed + motorOffset)
	rightBack. run(RELEASE);
	rightFrone. run (RELEASE)
	leftFront. run (RELEASE) ;
	leftBack. run (RELEASE);
	servoLook.attach(20):
	pinMode (trig, OUTPUT):
	pinMode (echo, INPUT) ;
}
