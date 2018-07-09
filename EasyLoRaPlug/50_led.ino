// ====================================
// LED
// ====================================
// LEDs are connected anode to +5, cathode to i/o pin. Aka: Active LOW.
// So pin set to LOW will on the LED
String LED_Status = "Not initalized";

void setupLED() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  LED_Status = "OK";
}

void onLED1() {
  digitalWrite(LED1, LOW);
}

void offLED1() {  
  digitalWrite(LED1, HIGH);
}

void onLED2() {
  digitalWrite(LED2, LOW);
}

void offLED2() {  
  digitalWrite(LED2, HIGH);
}
