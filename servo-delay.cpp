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
