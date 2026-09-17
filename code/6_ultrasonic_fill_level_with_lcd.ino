#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

const int trigPin = 2;
const int echoPin = 3;

const float EMPTY_DISTANCE = 28.0;  // 0%
const float FULL_DISTANCE = 9.0;    // 100%

float getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH, 30000);

  if (duration == 0) {
    return -1;
  }

  return duration * 0.0343 / 2;
}

void setup() {
  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  lcd.init();
  lcd.backlight();
}

void loop() {

  float distance = getDistance();

  if (distance == -1) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("No Reading");
    delay(500);
    return;
  }

  float fillPercent =
    (EMPTY_DISTANCE - distance) /
    (EMPTY_DISTANCE - FULL_DISTANCE) * 100.0;

  fillPercent = constrain(fillPercent, 0, 100);

  // Line 1: Distance
  lcd.setCursor(0, 0);
  lcd.print("Distance:");
  lcd.print(distance, 1);
  lcd.print("cm ");

  // Line 2: Fill Level
  lcd.setCursor(0, 1);
  lcd.print("Fill:");
  lcd.print(fillPercent, 1);
  lcd.print("%       ");

  delay(500);
}
