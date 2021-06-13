#include <WiFi.h>
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP280.h>
#include "Ambient.h"

#define SSID "IODATA-af2f44-2G"
#define PASSWORD "4613892169708"
#define INTERVAL 5 * 60 * 1000 // 5分毎にAmbientさんにデーターを送る
#define CHANNEL_ID 36375
#define WRITE_KEY "dce1b2bd0f2c7082"
#define SOLAR_VOLTAGE 25

Adafruit_BMP280 bme;
WiFiClient client;
Ambient ambient;
float temperature;
float pressure;
float solar_voltage;

void setup() {
  pinMode(2, OUTPUT);
  Serial.begin(115200);
  Serial.println(F("BMP280 test"));

  if (!bme.begin(0x76)) {
    Serial.println("Could not find a valid BMP280 sensor, check wiring!");
    while (1);
  }
}

void loop() {
  connectWifi();
  readData();
  sendData();
  disconnectWifi();
  delay(INTERVAL);
}

void connectWifi() {
  WiFi.mode(WIFI_STA);
  WiFi.begin(SSID, PASSWORD);

  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(100);
  }

  Serial.println("connected!");
}

void disconnectWifi() {
  WiFi.disconnect();
  Serial.println("disconnected!");
}

void readData() {
  temperature = bme.readTemperature();
  pressure = bme.readPressure();
  solar_voltage = analogRead(SOLAR_VOLTAGE);

  Serial.print("Temperature = ");
  Serial.print(temperature);
  Serial.println(" *C");

  Serial.print("Pressure = ");
  Serial.print(pressure);
  Serial.println(" Pa");

  Serial.print("Solar Voltage = ");
  Serial.print(solar_voltage);
  Serial.println(" Pa");

  Serial.println();
}

void sendData() {
  ambient.begin(CHANNEL_ID, WRITE_KEY, &client);
  ambient.set(1, temperature);
  ambient.set(2, pressure);
  ambient.set(3, solar_voltage);
  ambient.send();
}
