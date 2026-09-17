#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const int led[5] = {2, 3, 4, 5, 6};

int d = 1000; // delay time
int ti = 0;

void setup() {
  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("Start!!!");

  for (int i = 0; i < 5; i++) {
    pinMode(led[i], OUTPUT);
  }

}

void loop() {

  // Forward
  for (int i = 0; i < 5; i++) {
    digitalWrite(led[i], HIGH);
    delay(d);
    digitalWrite(led[i], LOW);
  }

  ti++;
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Loop is Done:");
  lcd.setCursor(0, 1);
  lcd.print(ti);

  // Backward
  for (int i = 3; i > 0; i--) {
    digitalWrite(led[i], HIGH);
    delay(d);
    digitalWrite(led[i], LOW);
  }
}
