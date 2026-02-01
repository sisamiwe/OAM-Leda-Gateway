
// PiPico-BCU-Connector with Waveshare CAN-B
#ifdef DEVICE_PIPICO_BCU_CONNECTOR_WAVESHARE_CAN_B
    #define DEVICE_ID "PiPico-CAN-Gateway"
    #define DEVICE_NAME "OpenKNX PiPico CAN Gateway"

    // Copy of PiPico-BCU-Connector
    #define PROG_LED_PIN 21
    #define PROG_LED_PIN_ACTIVE_ON HIGH
    #define PROG_BUTTON_PIN 22
    #define PROG_BUTTON_PIN_INTERRUPT_ON FALLING
    #define SAVE_INTERRUPT_PIN 20
    #define KNX_SERIAL Serial1
    #define KNX_UART_RX_PIN 1
    #define KNX_UART_TX_PIN 0

    // Copy of OAM-Meter
    #define OPENKNX_BI_GPIO_PINS 2, 3, 4, 5, 6
    #define OPENKNX_BI_GPIO_COUNT 5
    #define OPENKNX_BI_PULSE -1
    #define OPENKNX_BI_PULSE_PAUSE_TIME 0
    #define OPENKNX_BI_PULSE_WAIT_TIME 0
    #define OPENKNX_BI_ONLEVEL LOW

    // Definitons for Waveshare CAN-B
    #define CAN0_INT_PIN 21      // INT output of MCP2515
    #define CAN0_CS_PIN 5        // CS input of MCP2515
    #define CAN0_SPI_SCK_PIN 6   // SCK input of MCP2515
    #define CAN0_SPI_MOSI_PIN 7  // SDI input of MCP2515
    #define CAN0_SPI_MISO_PIN 4  // SDO output of MCP2515
#endif