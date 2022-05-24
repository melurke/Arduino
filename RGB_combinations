int blueLED = 11;
int greenLED = 12;
int redLED = 13;

void setup() {
  pinMode(blueLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
}

void loop() {
  for (int b=0; b < 256; b++) {
    for (int g=0; g < 256; g++) {
      for (int r=0; r < 256; r++) {
        analogWrite(blueLED, b);
        analogWrite(greenLED, g);
        analogWrite(redLED, r);
      }
    }
  }
}
