void setup() {
  Serial.begin(9600);
  for (int n=0; n<30; n++) {
    Serial.println("Hallo");
    Serial.println(n);
  }
}

void loop() {}
