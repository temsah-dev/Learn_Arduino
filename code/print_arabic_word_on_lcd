#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

// أجزاء كلمة "تمساح"

byte part1[8] = {
  0b00000,
  0b11110,
  0b00001,
  0b01110,
  0b10000,
  0b10001,
  0b01110,
  0b00000
};// ح

byte part2[8] = {
  0b00000,
  0b01000,
  0b01000,
  0b01000,
  0b01111,
  0b00000,
  0b00000,
  0b00000
};// ا

byte part3[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b10101,
  0b11111,
  0b00000,
  0b00000,
  0b00000
};// س

byte part4[8] = {
  0b00000,
  0b00000,
  0b00000,
  0b00000,
  0b11111,
  0b01010,
  0b01110,
  0b00000
};// م

byte part5[8] = {
  0b00000,
  0b01010,
  0b00000,
  0b00100,
  0b11100,
  0b00000,
  0b00000,
  0b00000
};// ت



void setup() {
  lcd.init();
  lcd.backlight();

  lcd.createChar(0, part1);
  lcd.createChar(1, part2);
  lcd.createChar(2, part3);
  lcd.createChar(3, part4);
  lcd.createChar(4, part5);

  lcd.setCursor(5, 0);

  // تمساح
  lcd.write(byte(0));
  lcd.write(byte(1));
  lcd.write(byte(2));
  lcd.write(byte(3));
  lcd.write(byte(4));
}

void loop() {
}
