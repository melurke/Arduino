int a;
int b;

void setup() {
  pinMode(11, OUTPUT);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  noTone(11);
  a = digitalRead(4);
  b = digitalRead(5);

  if (a==0) {
    tone(11, 500);
  }
  else if (b==0) {
    tone(11, 200);
  }
}
