//セットアップ関数（初期設定）
void setup() {
  pinMode(3,OUTPUT);//3番ピンを出力設定する
}

//ループ関数（無限ループ）
void loop() {
  digitalWrite(3,HIGH);//LED点灯
  delay(100);//100ms(=0.1s)待つ
  digitalWrite(3,LOW);//LED消灯
  delay(100);//100ms(=0.1s)待つ
}
