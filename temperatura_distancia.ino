// C++ code
//
int distancia = 0;
int promedio1=0;
int promedio2=0;
int temperatura = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
 promedio1 = 0;
 promedio2 = 0;

for(int i=0; i<5; i+=1){
  distancia = 0.01723 * readUltrasonicDistance(3, 3);
  temperatura = -40 + 0.488155 * (analogRead(A0) - 20);
  
  promedio1=promedio1 + distancia;  
  promedio2=promedio2+ temperatura;
  
  Serial.print("dist= ");
  Serial.println(distancia);
  Serial.print("temp= ");
  Serial.println(temperatura);
}
  promedio1=promedio1/5;
  promedio2=promedio2/5;
  Serial.print("La temperatura es ");
  Serial.print(promedio2);
  Serial.print(" grados ");
  Serial.print("y la distancia es ");
  Serial.print(promedio1);
  Serial.println(" cm.");
  
}
