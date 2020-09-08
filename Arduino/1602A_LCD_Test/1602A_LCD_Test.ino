#include <LiquidCrystal_I2C.h>

//アドレス0x27 １６文字２行の液晶
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("hogehoge");
  lcd.setCursor(3, 1);
  lcd.print("DEF");
}

void loop() {
}
