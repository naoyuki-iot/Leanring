#include <Wire.h>           //I2C Arduino Library
#define address 0x6B        //1101011b, I2C 7bit address of L3GD20
#define PIN 5
int outZH,outZL,angleIn5;
long timeNow,timePre;
float degree,angle,addTime;

void setup() {
    Serial.begin(9600);
    Wire.begin();
    Wire.beginTransmission(address);
    Wire.write(0x20);       //CTRL_REG1
    Wire.write(0x0F);       //power-down mode -> normal mode
    Wire.endTransmission();
    pinMode(PIN,OUTPUT);
}

void loop() {
    delay(50);
    Wire.beginTransmission(address);
    Wire.write(0x28);
    Wire.endTransmission(); 
    Wire.requestFrom(address, 1);
    outZL = Wire.read();
    Wire.beginTransmission(address);
    Wire.write(0x29);
    Wire.endTransmission(); 
    Wire.requestFrom(address, 1);
    outZH = Wire.read();
    degree = 0.00875 * ((outZH<<8) + outZL);

    timeNow = micros();
    if(timeNow > timePre) addTime = (timeNow - timePre) / 1000;
    timePre = timeNow;
    degree = 0.0888+degree * addTime / 1000;
    if( (degree>0.05) || (degree<-0.05)) angle += degree;
    if(angle>360) angle = angle-360;
    if(angle<0) angle = 360-angle;
    angleIn5 = (angle/2.5+1)/2;
    angleIn5 = angleIn5 * 5;
    if(angleIn5 == 360) angleIn5 = 0;


    Serial.print(" angle ");
    Serial.print(angle);
    Serial.print(" = ");
    Serial.println(angleIn5);
    
  if(angleIn5<90 && angleIn5>40 ){
    digitalWrite(PIN,HIGH);
    delay(100);
  }
  else{
    digitalWrite(PIN,LOW);
  }
}
