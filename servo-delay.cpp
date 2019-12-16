//rather crude servo control, varing pulse width from 1ms to 2ms for a range of ~90 degrees

#include <Arduino.h>

void setup() {
pinMode(0, OUTPUT);
}

void loop() {
for(int i=0; i<50; i++) {
digitalWrite(0, HIGH);
delay(1);
digitalWrite(0, LOW);
delay(10);
}
delay(1000);
for(int j=0; j<50; j++) {
digitalWrite(0, HIGH);
delay(2);
digitalWrite(0, LOW);
delay(10);
}
delay(1000);
}
