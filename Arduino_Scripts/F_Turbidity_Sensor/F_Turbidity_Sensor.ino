#define PIN_ANALOG_IN  1
void setup() {
  Serial.begin(115200);
}

void loop() {
  int adcVal = analogRead(PIN_ANALOG_IN);
  double voltage = adcVal * (5.0 / 1024.0);
  Serial.printf("Sensor Output (V): %d, \t Voltage: %.2fV\r\n", adcVal, voltage);
  delay(200);
}
