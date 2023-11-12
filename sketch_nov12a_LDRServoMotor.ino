#include <Servo.h>

Servo myservo;

int lightVal;

void setup() {
  Serial.begin(9600);
  //digital pin 9
  myservo.attach(9);
}

void loop() {
  //reading light sensor on pin A0
  lightVal = analogRead(A0);
  //mapping values
  lightVal = map (lightVal, 0, 1023, 0 , 180);
  //output
  myservo.write(lightVal);
  
  Serial.println(lightVal);
  delay(500);
}
