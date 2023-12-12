#include <WiFi.h>

const char* ssid = "yourNetworkName";
const char* pass = "yourNetworkPassword";

  
void setup() {
Serial.begin(115200);
Serial.println("Configure access point");
WiFi.softAP(ssid, pass);
IPAddress myIP = WiFi.softAPIP();
Serial.print("AP-IP Address");
Serial.println(myIP);
}

void loop() {
}
