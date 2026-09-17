#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const int led[5] = {2, 3, 4, 5, 6};

int d = 1500; // delay time
int ti = 0;

void setup() {

  lcd.init();
  lcd.backlight();

  
  delay(d);
  for (int i = 0; i < 5; i++) {
    pinMode(led[i], OUTPUT);
  }

}

void loop() {
  ti = 0;
  lcd.setCursor(0, 0);
  lcd.print("ARE");
  delay(d);
  lcd.clear();
  lcd.setCursor(2, 0);
  lcd.print("YOU");
  delay(d);
  lcd.clear();
  lcd.setCursor(4, 0);
  lcd.print("READY");
  delay(d);

  for (int i=0; i<3; i++){
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Start IN :");
    lcd.setCursor(0, 1);
    lcd.print(3-i);

    digitalWrite(led[i], HIGH);
    delay(d);
    digitalWrite(led[i], LOW);
  }

  lcd.clear();
  lcd.setCursor(4, 0);
  lcd.print("GOOOoooo");

  for (int i=0; i<3; i++){
    digitalWrite(led[i], HIGH);
  }
  delay(d);
  for (int i=0; i<3; i++){
    digitalWrite(led[i], LOW);
  }

  for (int i=0; i<10; i++) {
    
    for (int i = 3; i < 5; i++) {
      digitalWrite(led[i], HIGH);
      delay(d/7);
      digitalWrite(led[i], LOW);
    }

    ti++;
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Loop is Done:");
    lcd.setCursor(0, 1);
    lcd.print(ti);
  }
}
