#ifndef _DEBUG_H_
#define _DEBUG_H_

/* Debug flag definitions. */
/* BitMask for sections of code to be debugged through UART display (values can be or'ed together). */
#define DEBUG_NONE          0x0000000000000000
#define DEBUG_ALARMS        0x0000000000000001
#define DEBUG_BME280        0x0000000000000002
#define DEBUG_BRIGHTNESS    0x0000000000000004
#define DEBUG_CHIME         0x0000000000000008
#define DEBUG_COMMAND_QUEUE 0x0000000000000010
#define DEBUG_CORE          0x0000000000000020
#define DEBUG_CRC16         0x0000000000000040
#define DEBUG_DHT           0x0000000000000080
#define DEBUG_DST           0x0000000000000100
#define DEBUG_EVENT         0x0000000000000200
#define DEBUG_FLASH         0x0000000000000400
#define DEBUG_IDLE_MONITOR  0x0000000000000800
#define DEBUG_INDICATORS    0x0000000000001000
#define DEBUG_IR_COMMAND    0x0000000000002000
#define DEBUG_NTP           0x0000000000004000
#define DEBUG_PICO_W        0x0000000000008000
#define DEBUG_PWM           0x0000000000010000
#define DEBUG_RTC           0x0000000000020000
#define DEBUG_SCROLL        0x0000000000040000
#define DEBUG_SOUND_QUEUE   0x0000000000080000
#define DEBUG_TEMP          0x0000000000100000
#define DEBUG_TEST          0x0000000000200000
#define DEBUG_TIMER         0x0000000000400000
#define DEBUG_TIMING        0x0000000000800000
#define DEBUG_WATCHDOG      0x0000000001000000
// #define DEBUG_?????            0x0000000002000000
// #define DEBUG_?????            0x0000000004000000
// #define DEBUG_?????            0x0000000008000000
// #define DEBUG_?????            0x0000000010000000
// #define DEBUG_?????            0x0000000020000000
// #define DEBUG_?????            0x0000000040000000
// #define DEBUG_?????            0x0000000080000000
// #define DEBUG_?????            0x0000000100000000
// #define DEBUG_?????            0x0000000200000000
// #define DEBUG_?????            0x0000000400000000
// #define DEBUG_?????            0x0000000800000000
// etc...

#endif  // _DEBUG_H_
