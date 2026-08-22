#include <Servo.h>

Servo myServo;

int trigPin = 7;
int echoPin = 6;

int redLED = 10;
int yellowLED = 9;
int greenLED = 8;

int servoPin = 0;

long duration;
float distance;

void setup()
{
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  myServo.attach(servoPin);
}

void loop()
{
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = (duration * 0.0343) / 2;

  if (distance < 50)
  {
    digitalWrite(redLED, HIGH);
    myServo.write(90);

    delay(2000);

    digitalWrite(redLED, LOW);
  }

  else if (distance > 50 && distance < 100)
  {
    digitalWrite(yellowLED, HIGH);
    myServo.write(45);

    delay(2000);

    digitalWrite(yellowLED, LOW);
  }

  else
  {
    digitalWrite(greenLED, HIGH);
    myServo.write(0);

    delay(2000);

    digitalWrite(greenLED, LOW);
  }
}