#include<Servo.h>

Servo barrierServo;

bool doorLocked = true;
 int touchPin = 2;
 int buzzPin = 12;

void setup() 
{
  barrierServo.attach(9);
  pinMode(touchPin, INPUT);
  pinMode (buzzPin,OUTPUT );
}

void loop() 
{
  int touchState = digitalRead(touchPin);

  if (touchState == HIGH) 
  {
    if (doorLocked) 
    {
      barrierServo.write(90);  
      tone(buzzPin, 1000, 200);
      delay(200);
      doorLocked = false;
    } 
    else 
    {
      barrierServo.write(45);
      doorLocked = true ;
    }
    delay(1000);
  }
}
