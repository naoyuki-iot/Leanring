#define PIN 3
void setup()
{
// シリアルモニターの初期化をする
Serial.begin(9600);
pinMode(PIN,OUTPUT);
}
void loop()
{
int i ;
long x,y,z;
//50回センサ値を読み込んで平均を算出
x=y=z=0;
for (i=0 ; i < 50 ; i++) {
x = x + analogRead(3) ; // Ｘ軸
y = y + analogRead(4) ; // Ｙ軸
z = z + analogRead(5) ; // Ｚ軸
}
x = x / 50 ;
y = y / 50 ;
z = z / 50 ;
int rotateX = (x-277)/2.48 - 90; //角度を求める式
Serial.print("X:") ;
Serial.print(x) ;
Serial.print(" ") ;
Serial.print(rotateX) ;
int rotateY = (y-277)/2.48 - 90;
Serial.print(" Y:") ;
Serial.print(y) ;
Serial.print(" ") ;
Serial.println(rotateY) ;
delay(50) ;

 if(rotateX<-170){
    digitalWrite(PIN,HIGH);
    delay(100);
  }
  else{
    digitalWrite(PIN,LOW);
  }
}
