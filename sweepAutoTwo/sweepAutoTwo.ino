/*
 * Doug Whitton Jan 2021
 * Thiscode works with a standard servo motor 
 * It makes the servo arm rotate automatically back and forth 
 */

/*
 * Edited By Savannah Dalgado Feb 2021
 * Changed rang of motion from 180 degrees to 40 degrees
 */

#include <Servo.h>

Servo servoMotor;       // creates an instance of the servo object to control a servo
int servoPin = 9;       // Control pin for servo motor
int servoAngle = 0;     // variable for changing the angle of the servo 0 - 180

void setup() {
  Serial.begin(9600);                // initialize serial communications
  servoMotor.attach(servoPin);       // attaches the servo on pin 3 to the servo object
} 
 
void loop() {
  
  int x = 1;
   for (int i = 65; i > 64; i = i + x){
    servoMotor.write(i);                 //set the angle of the servo to i
      
      if (i == 105) x = -1;             // switch direction at the max 180 degree point
      delay(20);                         // change the delay to speed up or slow down
      Serial.println(i);                // print i to the serial monitor to make sure the numbers are OK
      
   }  
}
