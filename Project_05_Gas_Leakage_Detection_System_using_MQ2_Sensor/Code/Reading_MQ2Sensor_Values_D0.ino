void setup() {
  Serial.begin(9600);
  pinMode(2,INPUT);
}

void loop() {
  int state=digitalRead(2);
  Serial.println(state);
  delay(500);
}