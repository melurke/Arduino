int x = 10;

void setup() {
  Serial.begin(9600);
  while (x < 100) {
    Serial.println(x);
    x++;
    x++;
  }
}

void loop() {}
