void setup() {
  Serial.begin(9600);
  pinMode(2,INPUT);
}

void loop() {
  int motion=digitalRead(2);
  Serial.println(motion);
  delay(500);
}