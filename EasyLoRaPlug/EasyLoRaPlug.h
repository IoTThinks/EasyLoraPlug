// ===================================================
// Put all pin mappings and library here
// ===================================================
// ====================================
// Serial
// ====================================
#define BAUD_RATE 9600

// ====================================
// LED
// ====================================
#define LED1      26    // GPIO26
#define LED2      25    // GPIO25

// ====================================
// Speaker
// ====================================
#define SPK       13    // GPIO13

// ====================================
// Button
// ====================================
#define BTN           39    // SENSOR_VN / GPIO39 / Input only

// ====================================
// Power
// ====================================
// Relay
#define RL1       12    // GPIO12
#define RL2       14    // GPIO14
#define RL3       27    // GPIO27

// interrupt pin from power supply
#define X_5V220   35    // GPIO35, input only
#define X_5VEXT   34    // GPIO34, input only

// OSC 32768
#define XTAL_32K_P    32
#define XTAL_32K_N    33

// =====================
// LoRa
// =====================
//#include <SPI.h>
//#include <LoRa.h>

// Definitions
// CC2530 ZNP SPI interface
#define LORA_SS   23
#define LORA_SCK   18
#define LORA_MOSI  5
#define LORA_MISO  36
#define LORA_DIO012      39
#define LORA_RESET  -1 // Not in used

#define LORA_SF 7
#define LORA_CR 4 //4/5
#define LORA_BW 125E3
#define LORA_PREAMBLE_LENGTH  8

// =====================
// WiFi
// =====================
#include <WiFi.h>

// =====================
// OTA
// =====================
#include <ArduinoOTA.h>
