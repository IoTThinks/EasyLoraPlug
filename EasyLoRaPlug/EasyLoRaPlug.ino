#include "EasyLoRaPlug.h"

void setup() {  
  setupSerial();
  setupLED();
  setupSpeaker();
  setupWiFi();
  setupPowerSwitch();
  delay(10000);
  setupOTA();
  onSpeaker();
  delay(500);
  offSpeaker();
}

void loop() {
  Serial.println("Start");
  onLED1();
  delay(1000);
  offLED1();
  delay(1000);
  onLED2();
  delay(1000);
  offLED2();
  delay(1000);
  /*
  onPowerSwitch1();
  delay(2000);
  offPowerSwitch1();
  delay(1000);
  onPowerSwitch2();
  delay(2000);
  offPowerSwitch2();
  delay(1000);
  onPowerSwitch3();
  delay(2000);
  offPowerSwitch3();
  delay(1000);
  onSpeaker();
  delay(500);
  offSpeaker();
  delay(500);
*/  
  waitingForOTA();
}
