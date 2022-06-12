int LED1 = 9;
int LED2 = 10;
int LED3 = 11;
int LED4 = 12;
int LED5 = 13;

void setup() {
  for (int i=9; i<14; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for (int i=9; i<14; i++) {
    digitalWrite(i, HIGH);
    delay(50);
    digitalWrite(i, LOW);
  }
}
