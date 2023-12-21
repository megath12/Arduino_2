
#include <Servo.h>

Servo myservo;  
int pos = 90;    


void setup() {
  myservo.attach(9);
}


void loop() {
  myservo.write(pos);              
  delay(1000);                       
}
