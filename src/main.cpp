#include <Arduino.h>

int sequence = 6;

void setup() {
  pinMode(GPIO_NUM_32, OUTPUT);
  pinMode(GPIO_NUM_33, OUTPUT);
}

void loop() {
  if( sequence == 6 ) digitalWrite(GPIO_NUM_32, true);
  if( sequence == 4 ) digitalWrite(GPIO_NUM_32, false);
  if( sequence == 3 ) digitalWrite(GPIO_NUM_33, true);
  if( sequence == 1 ) digitalWrite(GPIO_NUM_33, false);
  if(--sequence == 0) sequence =6;
  delayMicroseconds(10); // 15kHz
}