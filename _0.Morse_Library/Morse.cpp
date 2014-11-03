/*
  Morse.cpp - Library for flashing Morse code.
  Created by Alberto López, November 2, 2014.
  Released into the public domain.
 */
#include "Morse.h"
#include "Arduino.h"


Morse::Morse(int pin, unsigned int time){
	_pin  = pin;
	_time = time;

	pinMode(_pin,OUTPUT);
	digitalWrite(_pin,LOW);
}

void Morse::A_(){
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
}

void Morse::B_(){
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
}
void Morse::C_(){
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
}

void Morse::D_(){
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
}

void Morse::E_(){
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
}

void Morse::F_(){
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
}

void Morse::G_(){
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
}

void Morse::H_(){
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
}

void Morse::I_(){
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
}

void Morse::J_(){
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
}

void Morse::K_(){
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
}

void Morse::L_(){
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
}

void Morse::M_(){
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
}

void Morse::N_(){
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
}

void Morse::O_(){
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
}

void Morse::P_(){
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
}

void Morse::Q_(){
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
}

void Morse::R_(){
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
}

void Morse::S_(){
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
}

void Morse::T_(){
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
}

void Morse::U_(){
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
}

void Morse::V_(){
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
}

void Morse::W_(){
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
}

void Morse::X_(){
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
}

void Morse::Y_(){
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
}

void Morse::Z_(){
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
}


void Morse::_0(){
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
}

void Morse::_1(){
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
}

void Morse::_2(){
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
}

void Morse::_3(){
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
}

void Morse::_4(){
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
}

void Morse::_5(){
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
}

void Morse::_6(){
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
}

void Morse::_7(){
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
}

void Morse::_8(){
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
}

void Morse::_9(){
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time*3);
	digitalWrite(_pin,LOW);
	delay(_time);
	digitalWrite(_pin,HIGH);
	delay(_time);
	digitalWrite(_pin,LOW);
}

void Morse::nextLetter(){
	delay(_time*3);
}

void Morse::nextWord(){
	delay(_time*7);
}



