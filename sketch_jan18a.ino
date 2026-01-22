#define BLYNK_TEMPLATE_ID "TMPL3QM94vl85"
#define BLYNK_TEMPLATE_NAME "Quickstart Device"
#define BLYNK_AUTH_TOKEN "AFeu2nc9Ynrbg7tQEHO_oP6XMG9Euafs"

#define BLYNK_PRINT Serial

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "Nokia3310";
char pass[] = "ankit444";

int ledPin = 2;

BLYNK_WRITE(V1)
{
  int ledState = param.asInt();
  digitalWrite(ledPin, ledState);
}

void setup()
{
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop()
{
  Blynk.run();
}
