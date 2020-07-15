#include <Servo.h>

Servo servo1;
Servo servo2;
int L1 = 20 ;
int L2 = 10 ;
float q1 = 90 ;
float q2 = 45 ;
float X,Y;
float Q1 , Q2;
void setup() {
  Serial.begin(9600);
  servo1.attach(9); 
  servo2.attach(10); 
}
void loop() {
  servo1.write(q1);
  servo2.write(q2);
  Q2 = (q2/180)*3.14;
  Q1 = (q1/180)*3.14;
  X = (L1*cos(Q1))+(L2*cos(Q1+Q2));
  Y = (L1*sin(Q1))+(L2*sin(Q1+Q2));
  Serial.print("X = ");
  Serial.print(X);
   Serial.print("Y = ");
  Serial.println(Y);
  
}
