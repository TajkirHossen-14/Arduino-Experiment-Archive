#include <Servo.h>

Servo myServo;

const int RED_LED = 7;
const int YELLOW_LED = 6;
const int GREEN_LED = 5;

const int SERVO_PIN = 0;

void setup()
{
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);

  myServo.attach(SERVO_PIN);
}

void loop()
{
  digitalWrite(RED_LED, HIGH);
  myServo.write(90);
  delay(2000);

  digitalWrite(RED_LED, LOW);

  digitalWrite(YELLOW_LED, HIGH);
  myServo.write(45);
  delay(1000);

  digitalWrite(YELLOW_LED, LOW);

  digitalWrite(GREEN_LED, HIGH);
  myServo.write(0);
  delay(2000);

  digitalWrite(GREEN_LED, LOW);
}
