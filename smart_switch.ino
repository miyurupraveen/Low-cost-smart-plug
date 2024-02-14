#define BLYNK_TEMPLATE_ID "--------------"
#define BLYNK_TEMPLATE_NAME "--------------"

#define BLYNK_FIRMWARE_VERSION        "0.1.0"

#define BLYNK_PRINT Serial
//#define BLYNK_DEBUG

#define APP_DEBUG

#define relayPin 0
#define Redled 1
#define Greenled 2

int valueParse;

#include "BlynkEdgent.h"

BLYNK_WRITE(V0){
  int pinValue = param.asInt();
  valueParse = pinValue;
  digitalWrite(relayPin,pinValue);

  if(pinValue == 0){
    digitalWrite(2,LOW);
    digitalWrite(1,HIGH);
  }else if(pinValue == 1){
    digitalWrite(1,LOW);
    digitalWrite(2,HIGH);
  }
}

void setup()
{
  pinMode(18,OUTPUT);
  pinMode(16,OUTPUT);
  pinMode(17,OUTPUT);
  Serial.begin(115200);
  delay(100);

  if(pinValue == 0){
    digitalWrite(2,LOW);
    digitalWrite(1,HIGH);
  }else if(pinValue == 1){
    digitalWrite(1,LOW);
    digitalWrite(2,HIGH);
  }

  BlynkEdgent.begin();
}

void loop() {
  BlynkEdgent.run();
}

