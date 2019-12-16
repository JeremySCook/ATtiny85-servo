//pulse width varies between 600 microseconds and 2400 microseconds
//creates a swing range of roughly ±90 degrees

#include <Arduino.h>

void setup() {
pinMode(0, OUTPUT);
}

void loop() {
for(int i=0; i<50; i++) {
digitalWrite(0, HIGH);
delayMicroseconds(600);
digitalWrite(0, LOW);
delay(10);
}
delay(1000);
for(int j=0; j<50; j++) {
digitalWrite(0, HIGH);
delayMicroseconds(2400);
digitalWrite(0, LOW);
delay(10);
}
delay(1000);
}
