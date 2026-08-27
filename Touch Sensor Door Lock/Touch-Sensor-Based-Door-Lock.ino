#include <Servo.h>

Servo myServo;

const int BUTTON_PIN = 4;
const int BUZZER_PIN = 12;
const int LED_PIN = 7;
const int SERVO_PIN = 2;

void setup()
{
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  myServo.attach(SERVO_PIN);
}

void loop()
{
  int buttonState = digitalRead(BUTTON_PIN);

  if (buttonState == HIGH)
  {
    digitalWrite(LED_PIN, HIGH);
    tone(BUZZER_PIN, 1000);

    myServo.write(90);
  }
  else
  {
    digitalWrite(LED_PIN, LOW);
    noTone(BUZZER_PIN);

    myServo.write(0);
  }
}