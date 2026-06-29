void setup(){
    pinMode(11,OUTPUT);//Red
    pinMode(12,OUTPUT);//Yellow
    pinMode(13,OUTPUT);//Green
}
void loop(){

    //Red on
    digitalWrite(11,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(13,LOW);
    delay(5000);

    //Green on
    digitalWrite(11,LOW);
    digitalWrite(12,LOW);
    digitalWrite(13,HIGH);
    delay(3000);

    //Yellow on
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
    delay(1000);
}