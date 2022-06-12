#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C Lcd(0x27, 16, 2);
void setup() {
  Lcd.init();
}

void loop() {
  Lcd.clear();
  Lcd.noBacklight();
  Lcd.setCursor(3, 0);
  Lcd.print("Zeit:");
  Lcd.print(millis());
  Lcd.backlight();
  delay(100);
}
