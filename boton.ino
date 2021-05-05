void setup()//tu codigo es el doble de incompleto
{
 pinMode (2,OUTPUT);
 pinMode (3,OUTPUT);
 pinMode (4,INPUT); 
}

void loop()
{
if(digitalRead(4)==HIGH){
  digitalWrite(2, HIGH);
  digitalWrite(3,LOW);
}
  
else {
  digitalWrite(3, HIGH);
    digitalWrite(2, LOW);

}
  
}
