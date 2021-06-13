#include <RCS620S.h>

#define SERIAL_BOUND     9600
#define COMMAND_TIMEOUT  400
#define POLLING_INTERVAL 500
#define SD_PN            4

#define SYSCODE_SUICA 0x0003
#define SYSCODE_DEF   0xFFFF

#define SENSE_ITERATIONS 10
#define SENSE_INTERVAL   10


RCS620S rcs620s;

int iterations;
uint16_t targetSys; 

void setup() {
  // put your setup code here, to run once:
  int ret;

  Serial.begin(SERIAL_BOUND);
  Serial1.begin(SERIAL_BOUND);

  ret = rcs620s.initDevice();
  delay(10);
  Serial.print("Init RCS620s ");
  while(!ret) {
    delay(100);
    Serial.print(".");
  };
  Serial.println(".");
  Serial.println("Connect RCS620S");

  iterations = 0;
  targetSys = SYSCODE_SUICA;
}

void loop() {
  // put your main code here, to run repeatedly:
  int ret, i, interval;

  rcs620s.timeout = COMMAND_TIMEOUT;

  if(targetSys == SYSCODE_SUICA && iterations >= SENSE_ITERATIONS){
    targetSys = SYSCODE_DEF;
    interval = POLLING_INTERVAL;
    iterations = 0;
  }else{
    targetSys = SYSCODE_SUICA;
    interval = SENSE_INTERVAL;
    iterations++;
  }

  ret = rcs620s.polling(targetSys);

  if(ret) {
    Serial.print("--> find:");

    for(i = 0; i < 8; i++)
    {
      if(rcs620s.idm[i] / 0x10 == 0) Serial.print(0);
      Serial.print(rcs620s.idm[i], HEX);
    }
    Serial.println(".");
  }
  rcs620s.rfOff();
  delay(interval);
}
