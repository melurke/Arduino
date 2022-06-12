int s;

void setup() {
  randomSeed(analogRead(A1));
  pinMode(3, OUTPUT);
}

void loop() {
  s=random(0, 255);
  analogWrite(3, s);
  delay(50);
}
