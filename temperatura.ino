int temperatura;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

pinMode(3,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

temperatura= digitalRead(3);
digitalRead(temperatura);
delay (1000);
Serial.print("La temperatura es: ");
Serial.print(temperatura);
}    
