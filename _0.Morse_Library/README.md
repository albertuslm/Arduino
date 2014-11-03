Library Morse Code
-----------------
__Level__: Basic

__Description__: Morse code library. 

__To use it__: 
1. Copy the *.cpp & *.h files into the arduino libraries folder:
(on Windows):
  My Documents\Arduino\libraries\MorseLibrary\Morse.cpp
  My Documents\Arduino\libraries\MorseLibrary\Morse.h

(on Mac & Linux):
  Documents/Arduino/libraries/MorseLibrary/Morse.cpp
  Documents/Arduino/libraries/MorseLibrary/Morse.h

2. Include the library on your project.

3. Create the morse object, passing to it the pin and the operation time (in ms):

	Morse morse(7,200);

4. Call the letters/numbers:
	letters: <cappital letter>_()
				A_()
	numbers: _<number>()
				_1()

5. After each letter, call the method to set time between letters:
	nextLetter()

6. After each word, call the method to set time between words:
	nextWord()