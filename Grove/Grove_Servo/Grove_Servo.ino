#include <Servo.h> 
 
Servo myservo;  

int angle = 0;
int pas = 1;

void setup() 
{ 
  myservo.attach(3);  // Servomoteur branché sur Digital 3
  // Attention, seules les pin Digital PWM peuvent recevoir un servomoteur, c-a-d D3, D5, et D6
} 
 
void loop()
{
  myservo.write(angle);
  delay(20);

  // Un servomoteur ne peut tourner qu'entre 0 deg et 180 deg
  if(angle + pas > 180) {
    pas = -1;
  }
  else if(angle + pas < 0) {
    pas = 1;
  }

  angle = angle + pas;
 }
