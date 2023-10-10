#include <string>
#pragma once
#include "mbed.h"
#include <string>
#include <iostream>

#define SHORT_RATE     200ms
#define LONG_RATE   600ms
#define SPACE_BTW_WORDS   800ms
#define SPACE_BTW_LETTERS   600ms
#define SPACE_BTW_MORSE_SIGNS   200ms

std::string toMorseCode(char ch);

void blink(char ch, DigitalOut led);