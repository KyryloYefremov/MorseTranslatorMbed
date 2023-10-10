#include "headers.h"


int main() {
    DigitalOut led(LED1);
    std::string line = "kyrylo";
    std::string morse;

    for (int i = 0; i < line.length(); i++) {
        morse = toMorseCode(line[i]);
        for (int i = 0; i < morse.length(); i++) {
            blink(morse[i], led);
        }
        blink('_', led);
    }

    return 0;
}
