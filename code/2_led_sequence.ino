const int led[5] = {5, 6, 7, 8, 9};

int d = 500; // delay time

void setup() {
  for (int i = 0; i < 5; i++) {
    pinMode(led[i], OUTPUT);
  }
}

void loop() {
  // from Led 0 to Led 4
  for (int i = 0; i < 5; i++) {
    digitalWrite(led[i], HIGH);
    delay(d);
    digitalWrite(led[i], LOW);
  }

  // from Led 3 to Led 1
  for (int i = 3; i > 0; i--) {
    digitalWrite(led[i], HIGH);
    delay(d);
    digitalWrite(led[i], LOW);
  }
}
