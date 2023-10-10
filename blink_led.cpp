#include "headers.h"

void blink(char ch, DigitalOut led) {
    if (ch == '.') {
        led = !led;
        ThisThread::sleep_for(SHORT_RATE);
        led = !led;
        ThisThread::sleep_for(SPACE_BTW_MORSE_SIGNS);
    } else if (ch == '-') {
        led = !led;
        ThisThread::sleep_for(LONG_RATE);
        led = !led;
        ThisThread::sleep_for(SPACE_BTW_MORSE_SIGNS);
    } else if (ch == ' ') {
        ThisThread::sleep_for(SPACE_BTW_WORDS);
    } else {
        ThisThread::sleep_for(SPACE_BTW_LETTERS);
    }
}