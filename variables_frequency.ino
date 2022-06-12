int f;

void setup() {
  f = 100;
}

void loop() {
  tone(11, f);
  delay(100);
  f += 1;
}
