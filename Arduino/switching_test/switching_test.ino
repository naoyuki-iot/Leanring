void setup() {
  Serial.begin(2000000);
  pinMode(A0, INPUT);
  TCCR1A = 0b10000010;
  TCCR1B = 0b00011001;
  DDRB = 0b00000110;
  ICR1 = 80;
  OCR1A = 1;
}

void loop() {
  byte t;
  if (analogRead(A0) > 691) {
    t--;
  }
  if (analogRead(A0) <= 691) {
    t++;
  }
  Serial.println(t);
  OCR1A = t;
}
