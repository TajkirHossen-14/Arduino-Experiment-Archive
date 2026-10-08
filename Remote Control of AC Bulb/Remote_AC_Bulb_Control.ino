#include <IRremote.h>

const int RELAY_PIN = 3;
const int IR_RECEIVER_PIN = 7;

const unsigned long ON_CODE_1 = 4010852096UL;
const unsigned long ON_CODE_2 = 3994140416UL;
const unsigned long ON_CODE_3 = 3977428736UL;

const unsigned long OFF_CODE = 4278238976UL;

void setup()
{
  pinMode(RELAY_PIN, OUTPUT);

  digitalWrite(RELAY_PIN, LOW);

  IrReceiver.begin(IR_RECEIVER_PIN);
}

void loop()
{
  if (IrReceiver.decode())
  {
    unsigned long receivedCode = IrReceiver.decodedIRData.decodedRawData;

    if (receivedCode == ON_CODE_1 ||
        receivedCode == ON_CODE_2 ||
        receivedCode == ON_CODE_3)
    {
      digitalWrite(RELAY_PIN, HIGH);
    }
    else if (receivedCode == OFF_CODE)
    {
      digitalWrite(RELAY_PIN, LOW);
    }

    IrReceiver.resume();
  }
}