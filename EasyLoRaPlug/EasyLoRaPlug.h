// ===================================================
// Put all pin mappings and library here
// ===================================================
// ====================================
// Serial
// ====================================
#define BAUD_RATE 9600

// interrupt pin from power supply
#define X_5V220   35    // GPIO35, input only
#define X_5VEXT   34    // GPIO34, input only

// Led
#define LED1      26    // GPIO26
#define LED2      25    // GPIO25

// Button
#define BTN           39    // SENSOR_VN / GPIO39 / Input only

// Relay
#define RL1       12    // GPIO12
#define RL2       14    // GPIO14
#define RL3       27    // GPIO27

// Speaker
#define SPK       13    // GPIO13

// OSC 32768
#define XTAL_32K_P    32
#define XTAL_32K_N    33

// SPI Lora
#define LORA_RST      23
#define LORA_SS       22
#define LORA_MOSI     5
#define LORA_MISO     17
#define LORA_SCK      18
#define LORA_DIO012   15
