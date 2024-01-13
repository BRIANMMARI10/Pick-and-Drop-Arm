#include <Servo.h>

Servo gripServo;  
Servo neckServo;
Servo bodyServo;
Servo baseServo;


void setup() {

  Serial.begin(9600);
 
  gripServo.attach(5); 
  neckServo.attach(3);
  bodyServo.attach(6);
  baseServo.attach(9);
}
void loop() {


  // pick fish
  bodyForward();
  delay(3000);
 
  neckForward();
  delay(3000);
  gripTighten();
  delay(3000);

  // hold up fish
  bodyBackward();
  delay(3000);
  neckBackward();
  delay(3000);
  baseBackBent();
  delay(3000);
 

  // return fish
  bodyForward();
  delay(3000);
  neckForward();
  delay(3000);
  baseForwardBent();
  delay(10000);
  gripLoosen();
  delay(3000);

   // back to normal
   baseNormal();
   delay(3000);
   bodyBackward();
   delay(3000);
   neckBackward();
   delay(10000);

}

void gripTighten() {
  gripServo.write(5);
}

void bodyForward() {
  bodyServo.write(20);
}

void bodyBackward() {
  bodyServo.write(200); 
}

void gripLoosen() {
  gripServo.write(100);
}

void neckForward() {
  neckServo.write(30);
}

void neckBackward() {
  neckServo.write(100);
}

void baseBackBent() {
  baseServo.write(90);
}

void baseForwardBent() {
  baseServo.write(30);
}

void baseNormal() {
  baseServo.write(100);

}