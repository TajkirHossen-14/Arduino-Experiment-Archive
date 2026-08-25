#include <LiquidCrystal_I2C.h>
#include <Servo.h>

Servo myServo;

const int TRIG_PIN = 12;
const int ECHO_PIN = 11;

const int RED_LED = 7;
const int YELLOW_LED = 6;
const int GREEN_LED = 5;

const int SERVO_PIN = 1;

LiquidCrystal_I2C myLCD(0x22, 16, 2);

long Duration;
float Distance;

void setup()
{
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);

  myServo.attach(SERVO_PIN);

  myLCD.init();
  myLCD.backlight();
}

void loop()
{
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  Duration = pulseIn(ECHO_PIN, HIGH);

  Distance = (Duration * 0.0343) / 2;

  myLCD.clear();
  myLCD.setCursor(3, 0);
  myLCD.print("Distance");
  myLCD.setCursor(3, 1);
  myLCD.print(Distance);
  myLCD.print(" cm");

  if (Distance < 50)
  {
    digitalWrite(RED_LED, HIGH);
    myServo.write(90);

    delay(500);

    digitalWrite(RED_LED, LOW);
  }

  else if (Distance >= 50 && Distance < 100)
  {
    digitalWrite(YELLOW_LED, HIGH);
    myServo.write(45);

    delay(500);

    digitalWrite(YELLOW_LED, LOW);
  }

  else
  {
    digitalWrite(GREEN_LED, HIGH);
    myServo.write(0);

    delay(500);

    digitalWrite(GREEN_LED, LOW);
  }
}
