#include <LiquidCrystal_I2C.h>

const int IN1 = 8;
const int IN2 = 7;

const int TRIG_PIN = 12;
const int ECHO_PIN = 11;

LiquidCrystal_I2C myLCD(0x24, 16, 2);

long Duration;
float Distance;

void setup()
{
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  myLCD.init();
  myLCD.backlight();
  myLCD.clear();
}

void loop()
{
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(12);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(12);
  digitalWrite(TRIG_PIN, LOW);

  Duration = pulseIn(ECHO_PIN, HIGH, 30000);

  if (Duration == 0)
  {
    return;
  }

  Distance = (Duration * 0.0343) / 2;

  if (Distance <= 50)
  {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);

    myLCD.clear();
    myLCD.setCursor(4, 0);
    myLCD.print("TANK FULL");
  }

  else if (Distance > 150)
  {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);

    myLCD.clear();
    myLCD.setCursor(4, 0);
    myLCD.print("NOT FULL");
  }

  delay(1000);
}

