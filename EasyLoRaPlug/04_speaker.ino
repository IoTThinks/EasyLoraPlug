// https://techtutorialsx.com/2017/07/01/esp32-arduino-controlling-a-buzzer-with-pwm/
int freq = 2400;
int channel = 0;
int resolution = 8;

void setupSpeaker()
{
  // speaker
  ledcSetup(channel, freq, resolution);
  ledcAttachPin(SPK, channel);   
  onSpeaker();
  delay(100);
  offSpeaker(); 
}

void onSpeaker()
{
  Serial.println("On Speaker");
  //ledcWriteTone(channel, 2400);
  ledcWrite(channel, 127);
}

void offSpeaker()
{
  Serial.println("Off Speaker");
  ledcWrite(channel, 0);
}


