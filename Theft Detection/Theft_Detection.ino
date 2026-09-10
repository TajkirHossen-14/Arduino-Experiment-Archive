#include <Servo.h>
#include <LiquidCrystal_I2C.h>

Servo myServo;

LiquidCrystal_I2C myLCD(0x20, 16, 2);

const int PIR_PIN = 4;
const int BUZZER_PIN = 11;
const int LED_PIN = 5;
const int SERVO_PIN = 2;

void setup()
{
  pinMode(PIR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);

  myServo.attach(SERVO_PIN);

  myLCD.init();
  myLCD.backlight();
  myLCD.clear();

  myLCD.setCursor(0, 0);
  myLCD.print("Security System");
  myLCD.setCursor(1, 1);
  myLCD.print("Monitoring...");
  delay(1500);

  myLCD.clear();
}

void loop()
{
  int Motion = digitalRead(PIR_PIN);

  if (Motion == HIGH)
  {
    myServo.write(90);
    tone(BUZZER_PIN, 2000);
    digitalWrite(LED_PIN, HIGH);

    myLCD.clear();
    myLCD.setCursor(1, 0);
    myLCD.print("MOTION DETECTED");
    myLCD.setCursor(3, 1);
    myLCD.print("ALERT!");
    
    delay(3000);
  }
  else
  {
    myServo.write(0);
    noTone(BUZZER_PIN);
    digitalWrite(LED_PIN, LOW);

    myLCD.clear();
    myLCD.setCursor(2, 0);
    myLCD.print("SYSTEM SAFE");
    myLCD.setCursor(2, 1);
    myLCD.print("Monitoring...");
  }

  delay(600);
}