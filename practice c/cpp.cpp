#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_CCS811.h>
#include <Adafruit_MLX90614.h>

// Initialize CO2 sensor
Adafruit_CCS811 ccs;

// Initialize motion sensor
int motionPin = 2;

void setup() {
  Serial.begin(9600);
  // Initialize CO2 sensor
  if (!ccs.begin()) {
    Serial.println("Failed to start CCS811 sensor! Please check your connections.");
    while (1);
  }
  
  // Initialize motion sensor
  pinMode(motionPin, INPUT);
}

void loop() {
  // Read CO2 level
  if (ccs.available()) {
    if (!ccs.readData()) {
      float co2 = ccs.geteCO2();
      Serial.print("CO2: ");
      Serial.print(co2);
      Serial.println(" ppm");
      
      // Check for motion
      int motionValue = digitalRead(motionPin);
      if (motionValue == HIGH) {
        Serial.println("Motion detected!");
        // You can send an alert here or trigger a trap mechanism.
      }
    }
  }
  delay(1000);
}
