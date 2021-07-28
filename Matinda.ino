// AUTHOR: AARON MASUBA
//
/*
 /*
Write a program that allows the user to control the LED connected to pin 13 of the Arduino.
When the program is started, the LED should be off.
The user should open the serial monitor to communicate with the Arduino. 
If the user sends the character '1' through the serial monitor then the LED should turn on. If the user sends the character '0' through the serial monitor then the LED should turn off.
*/



int led = 13;


void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}
int state = 0;
void loop()
{
  if(Serial.available()>0)
  {
    state = Serial.read();
  }
  if (state == '0')
  {
    digitalWrite(led, LOW);
  }
  if (state == '1')
  {
    digitalWrite(led, HIGH);
  }
}