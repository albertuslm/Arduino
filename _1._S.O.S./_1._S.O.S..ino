/*
  S.O.S. Morse Code
  -----------------
  Level: Basic
  Hardware:
        - Breadboard
        - 5mm LED
        - 100omh resistor
        - x2 jumper wires
  How to connect:
        (url to screenshot)
 
  Desc: Using a simple LED and Arduino board, this program makes the LED displays the S.O.S. message in Morse code.
*/

//LED connected to PIN 7
int ledPin = 7;

//setup
void setup()
{
  pinMode(ledPin, OUTPUT);
}

//loop
void loop()
{
  //displaying letter S = . . .
  for (int i=0; i<3; i++)
  {
    digitalWrite(ledPin,HIGH);
    delay(200);
    digitalWrite(ledPin,LOW);
    delay(150);
  }

  //waiting bettween letters like happens in real communication
  delay(250);
  
  //displaying letter O = - - - 
  for(int i=0; i<3; i++)
  {
    digitalWrite(ledPin,HIGH);
    delay(500);
    digitalWrite(ledPin,LOW);
    delay(150);
  }
  
  //waiting bettween letters like happens in real communication
  delay(250);
  
  //displaying letter S = . . .
  for (int i=0; i<3; i++)
  {
    digitalWrite(ledPin,HIGH);
    delay(200);
    digitalWrite(ledPin,LOW);
    delay(150);
  }
  
  delay(500);


/*END*/

