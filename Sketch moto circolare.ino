#include<Servo.h>
char numeri;
Servo motore;
void setup() {
 Serial.begin(9600);
 motore.attach(7);
 
}

void loop() {
  numeri=Serial.read();
  if(numeri=='a'){
    delay(3000);
    motore.write(30);
  }
}