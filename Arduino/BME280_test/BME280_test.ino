#include <Wire.h> //IC2 Library
#include <Adafruit_Sensor.h> 
#include <Adafruit_BME280.h>
#include <M5Core2.h>

#define SEALEVELPRESSURE_HPA (1013.25) //Ambient Pressure

Adafruit_BME280 bme; // I2C Instance

unsigned long delayTime;

void setup() {

    //M5Stack Setup
    M5.begin();
    M5.lcd.setTextSize(3);

    Serial.begin(115200);
    while(!Serial);    // time to get serial running
    Serial.println(F("BME280 test"));

    unsigned status;

    // default settings
    status = bme.begin();  
    // You can also pass in a Wire library object like &Wire2
    // status = bme.begin(0x76, &Wire2)
    if (!status) {
        Serial.println("Could not find a valid BME280 sensor, check wiring, address, sensor ID!");
        Serial.print("SensorID was: 0x"); Serial.println(bme.sensorID(),16);
        Serial.print("        ID of 0xFF probably means a bad address, a BMP 180 or BMP 085\n");
        Serial.print("   ID of 0x56-0x58 represents a BMP 280,\n");
        Serial.print("        ID of 0x60 represents a BME 280.\n");
        Serial.print("        ID of 0x61 represents a BME 680.\n");
        while (1) delay(10);
    }

    Serial.println("-- Default Test --");
    delayTime = 1000;

    Serial.println();
}


void loop() { 
    M5printValues();
    printValues();
    delay(delayTime);
}


void printValues() {
    Serial.print("Temperature = ");
    Serial.print(bme.readTemperature());
    Serial.println(" *C");

    Serial.print("Pressure = ");

    Serial.print(bme.readPressure() / 100.0F);
    Serial.println(" hPa");

    Serial.print("Approx. Altitude = ");
    Serial.print(bme.readAltitude(SEALEVELPRESSURE_HPA));
    Serial.println(" m");

    Serial.print("Humidity = ");
    Serial.print(bme.readHumidity());
    Serial.println(" %");

    Serial.println();
}

void M5printValues() {

    float temp = bme.readTemperature();
    float pres = bme.readPressure()/1000.0F; //[kPa]
    float humid = bme.readHumidity();

    M5.Lcd.setCursor(20,40);
    M5.Lcd.print("Temp: ");
    M5.Lcd.print(temp,1);
    M5.Lcd.print("degC");

    M5.Lcd.setCursor(20,100);
    M5.Lcd.print("Pressure: ");
    M5.Lcd.print(pres,1);
    M5.Lcd.print("kPa");

    M5.Lcd.setCursor(20,160);
    M5.Lcd.print("Humidity: ");
    M5.Lcd.print(humid,1);
    M5.Lcd.print("%RH");

}
