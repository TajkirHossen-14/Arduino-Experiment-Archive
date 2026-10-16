#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C MyLCD(0x23, 16, 2);

const int Temp_Pin = A0;
const int Gas_Sensor_Port = A1;
const int Wind_Sensor_Pin = A2;

const int Trig_Pin = 12;
const int Echo_Pin = 11;

float V_Wind, V_Temp, Temperature, Distance_CM;
int Gas_Sensor_Value, Wind_Speed;
unsigned long Duration;

float ReadDistance()
{
  digitalWrite(Trig_Pin, LOW);
  delayMicroseconds(2);

  digitalWrite(Trig_Pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig_Pin, LOW);

  Duration = pulseIn(Echo_Pin, HIGH, 30000UL);

  if (Duration == 0)
  {
    return 999;
  }

  return Duration * 0.0343 / 2;
}

void setup()
{
  pinMode(Temp_Pin, INPUT);
  pinMode(Gas_Sensor_Port, INPUT);
  pinMode(Wind_Sensor_Pin, INPUT);

  pinMode(Trig_Pin, OUTPUT);
  pinMode(Echo_Pin, INPUT);

  MyLCD.init();
  MyLCD.backlight();
  MyLCD.clear();

  MyLCD.setCursor(0, 0);
  MyLCD.print("Weather Monitor");

  delay(2000);
}

void loop()
{
  Gas_Sensor_Value = analogRead(Gas_Sensor_Port);

  V_Wind = analogRead(Wind_Sensor_Pin) * (5.0 / 1023.0);
  Wind_Speed = (V_Wind - 0.4) * 20;

  if (Wind_Speed < 0)
  {
    Wind_Speed = 0;
  }

  V_Temp = analogRead(Temp_Pin) * (5.0 / 1023.0);
  Temperature = (V_Temp - 0.5) * 100;

  Distance_CM = ReadDistance();

  // Temperature Alert
  
  if (Temperature > 35)
  {
    MyLCD.clear();

    MyLCD.setCursor(0, 0);
    MyLCD.print("T:");
    MyLCD.print(Temperature, 1);
    MyLCD.print(" C");

    MyLCD.setCursor(0, 1);
    MyLCD.print("Temperature High");

    delay(2000);
  }

  // Gas Alert
  
  if (Gas_Sensor_Value > 200)
  {
    MyLCD.clear();

    MyLCD.setCursor(0, 0);
    MyLCD.print("Gas Detected!");

    MyLCD.setCursor(0, 1);
    MyLCD.print("Level: ");
    MyLCD.print(Gas_Sensor_Value);

    delay(2000);
  }

  // Wind Speed Alert
  
  if (Wind_Speed > 10)
  {
    MyLCD.clear();

    MyLCD.setCursor(0, 0);
    MyLCD.print("Wind ALERT!");

    MyLCD.setCursor(0, 1);
    MyLCD.print(Wind_Speed);
    MyLCD.print(" mph");

    delay(2000);
  }

  // Rain Alert
  
  if (Distance_CM < 100)
  {
    MyLCD.clear();

    MyLCD.setCursor(0, 0);
    MyLCD.print("Rain ALERT!");

    MyLCD.setCursor(0, 1);
    MyLCD.print(Distance_CM, 0);
    MyLCD.print(" cm");

    delay(2000);
  }

  delay(500);
}