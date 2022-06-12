int port1 = 9;
int portHigh = 4;
int portLow = 5;
int f = 200;

void setup() {
  pinMode(port1, OUTPUT);
  pinMode(portHigh, INPUT_PULLUP);
  pinMode(portLow, INPUT_PULLUP);
  Serial.begin(9600);
  tone(port1, 100);
  delay(500);
  noTone(port1);
}

void loop() {
  while (digitalRead(portHigh)==1 && digitalRead(portLow)==1) {}
  if (digitalRead(portHigh)==0) {
    f++;
  }
  else if (digitalRead(portLow)==0) {
    f--;
  }
  tone(port1, f);
  Serial.println(f);
  while (digitalRead(portHigh)==0 || digitalRead(portLow)==0) {}
}
