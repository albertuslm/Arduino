
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
#include <Morse.h>

//LED connected to PIN 7
int ledPin = 7;

Morse morse(7,200);
//setup
void setup()
{
}

//loop
void loop()
{
  morse.S_();
  morse.nextLetter();
  morse.O_();
  morse.nextLetter();
  morse.S_();
  morse.nextWord();
}

/*END*/

