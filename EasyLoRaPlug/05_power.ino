void setupPowerSwitch()
{
   pinMode(RL1, OUTPUT);
   pinMode(RL2, OUTPUT);
   pinMode(RL3, OUTPUT);
}

void onPowerSwitch1()
{
  digitalWrite(RL1, HIGH);
}

void offPowerSwitch1()
{
  digitalWrite(RL1, LOW);
}

void onPowerSwitch2()
{
  digitalWrite(RL2, HIGH);
}

void offPowerSwitch2()
{
  digitalWrite(RL2, LOW);
}

void onPowerSwitch3()
{
  digitalWrite(RL3, HIGH);
}

void offPowerSwitch3()
{
  digitalWrite(RL3, LOW);
}

