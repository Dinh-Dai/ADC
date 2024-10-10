#include <Arduino.h>

const int LDR_PIN = 34; 

void setup() {
    Serial.begin(115200); 
    analogReadResolution(12); 
}

void loop() {
    int lightValue = analogRead(LDR_PIN); 
    Serial.println(lightValue); 
    delay(100); 
}
