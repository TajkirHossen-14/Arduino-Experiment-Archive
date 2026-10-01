#include <LiquidCrystal_I2C.h>

const int IN1 = 8;
const int IN2 = 7;

const int MOISTURE_PIN = A0;

LiquidCrystal_I2C myLCD(0x24, 16, 2);

const int DRY_LIMIT = 800;
const int ALMOST_DRY_LIMIT = 500;

int moistureValue;

void setup()
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(MOISTURE_PIN, INPUT);

  myLCD.init();
  myLCD.backlight();
  myLCD.clear();

  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  myLCD.setCursor(1, 0);  
  myLCD.print("Plant Watering");

  myLCD.setCursor(0, 1);
  myLCD.print("System Starting");

  delay(1500);

  myLCD.clear();
}

void loop()
{
  moistureValue = analogRead(MOISTURE_PIN);

  myLCD.clear();

  myLCD.setCursor(0, 0);
  myLCD.print("Moisture: ");
  myLCD.print(moistureValue);

  if (moistureValue >= DRY_LIMIT)
  {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);

    myLCD.setCursor(0, 1);
    myLCD.print("Dry Soil");

    delay(2000);
  }
  else if (moistureValue > ALMOST_DRY_LIMIT && moistureValue < DRY_LIMIT)
  {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);

    myLCD.setCursor(0, 1);
    myLCD.print("Almost Dry Soil");

    delay(2000);
  }
  else
  {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);

    myLCD.setCursor(0, 1);
    myLCD.print("Wet Soil");

    delay(2000);
  }
}