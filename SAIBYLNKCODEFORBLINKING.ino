#define BLYNK_TEMPLATE_ID "TMPL36NcGLKCo"
#define BLYNK_TEMPLATE_NAME "led"
#define BLYNK_AUTH_TOKEN "YW4SECYMuXz8vKjkzTDXy8jQ72uopFNg"
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <BlynkApiArduino.h>

char ssid[] = "MSB";
char pass[] = "onetwothreefour";

#define LED_PIN D2

void setup() {
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);

  Serial.begin(9600);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

BLYNK_WRITE(V0) {
  int value = param.asInt();
  digitalWrite(LED_PIN, value);
}

void loop() {
  Blynk.run();
}

