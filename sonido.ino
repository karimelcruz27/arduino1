void setup()
{
pinMode(2,OUTPUT);
pinMode(3,INPUT);
pinMode(7,OUTPUT);
  
}

void loop()
{

  
if (digitalRead(3)== HIGH)
{
  digitalWrite(2, HIGH);
  digitalWrite(7,HIGH);
  tone(7,200,1000);
}
  else{
  digitalWrite(2, LOW);
  noTone(7);
  }
}
