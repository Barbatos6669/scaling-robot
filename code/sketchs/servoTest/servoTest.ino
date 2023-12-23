#include <Servo.h>

Servo myServo1;
Servo myServo2;
Servo myServo3;

void setup() 
{
    myServo1.attach(11);
    myServo1.write(90);
}

void loop() 
{
  delay(2000);
  myServo1.write(0);

  delay(2000);
  myServo1.write(45);

  delay(2000);
  myServo1.write(90);

  delay(2000);
  myServo1.write(135);

  delay(2000);
  myServo1.write(180);

  delay(2000);
  myServo1.write(135);

  delay(2000);
  myServo1.write(90);

  delay(2000);
  myServo1.write(45);
}
