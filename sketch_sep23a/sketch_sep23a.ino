#include <Servo.h>
Servo myservo;
int analogPin = 0;

void setup() {
  Serial.begin(9600); // open the serial port at 9600 bps:
   myservo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  // delay(2000);
  
  int sensorValue = analogRead(analogPin);
  
  float voltage= sensorValue * (5.0 / 1023.0);
  
  if(voltage >= 4.8){
    myservo.write(0);
    Serial.println("on");
  }else{
    myservo.write(75);
    Serial.println("off");
  }
}
