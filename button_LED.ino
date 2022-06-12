int i;

void setup() {
  pinMode(4, INPUT_PULLUP);
  pinMode(9, OUTPUT);
}

void loop() {
  i=digitalRead(4);
  if (i==1) {
    digitalWrite(9, LOW);
  }
  else {
    digitalWrite(9, HIGH);
  }
}
