#include <Servo.h>
Servo servoMotor;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
servoMotor.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:

/*servoMotor.write(0);
delay(1000);

servoMotor.write(180);
delay(1000);
*/


for(int i=0; i<=180; i+=1)
{

  servoMotor.write(i);
  delay(20);

for(int i=180; i>=180; i-=1)
{
  servoMotor.write(i);
  delay(20);
}

}


}
