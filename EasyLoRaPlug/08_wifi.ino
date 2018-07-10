const char* ssid     = "Easy LoRa";
const char* password = "EasyLoRa123";

void WiFiEvent(WiFiEvent_t event)
{
    Serial.printf("[WiFi-event] event: %d\n", event);

    switch(event) {
    case SYSTEM_EVENT_STA_GOT_IP:
        Serial.println("WiFi connected");
        Serial.println("IP address: ");
        Serial.println(WiFi.localIP());
        WiFi.setHostname("EasyLoRaPlug");
        break;
    case SYSTEM_EVENT_STA_DISCONNECTED:
        Serial.println("WiFi lost connection");
        break;
    }
}

void setupWiFi()
{
    // delete old config
    //WiFi.disconnect(true);
    //delay(1000);

    WiFi.onEvent(WiFiEvent);

    WiFi.begin(ssid, password);
    Serial.println("[WiFi] Wait for WiFi...");
}
