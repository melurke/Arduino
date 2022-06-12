int x=1;

void setup() {
  Serial.begin(9600);
  while(x<100) {
    Serial.println(x);
    x++;
  }
  while (2<5) {
    Serial.print("!");
  }
}

void loop() {}
