void setup() {
  // put your setup code here, to run once:

pinMode(1,INPUT);
pinMode(2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(1)==HIGH){
  digitalWrite(2,HIGH);
  delay(500);
  digitalWrite(1,LOW);
  delay(500);
}
else {

  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(1,LOW);
  delay(1000);

}
}
