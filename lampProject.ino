

#include <Servo.h>
Servo servo;

int myservo[] = {
  5, 6, 9, 10, 11, 12  
};             // an array of pin numbers to which LEDs are attached
int pinCount = 6; // six servos
int pos = 0;    // variable to store the servo position
int currentPin;
int timer = 100;

void setup() {
  
  //myservo.attach();  // attaches the servo on pin 9 to the servo object
  for (int thisPin = 0; thisPin < pinCount; thisPin++) {
    pinMode(myservo[thisPin], OUTPUT);
    
}
}
void loop() {
  currentPin = random(0, 5);
  //currentPin = 4;
  timer = random(15, 40);
  servo.attach(myservo[currentPin]);
  for (pos = 45; pos <= 135; pos += 1) { // goes from 45 degrees to 135 degrees
    // in steps of 1 degree
    servo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(timer);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 135; pos >= 45; pos -= 1) { // goes from 135 degrees to 45 degrees
    servo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(timer);                       // waits 15ms for the servo to reach the position
  }
  
}
