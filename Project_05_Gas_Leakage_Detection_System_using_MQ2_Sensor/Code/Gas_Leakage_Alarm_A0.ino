void setup() {
  Serial.begin(9600);
  pinMode(8,OUTPUT);
}

void loop() {
  int value=analogRead(A0);
  Serial.println(value);
  if(value>=130)
  digitalWrite(8,LOW);
  else
  digitalWrite(8,HIGH);
  delay(1000);
}