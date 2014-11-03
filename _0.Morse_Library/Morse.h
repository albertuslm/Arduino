/*
  Morse.h - Library for flashing Morse code.
  Created by Alberto López, November 2, 2014.
  Released into the public domain.

  NOTES About use:
  - It is only possible configure the pin for output and the time of the dot.
  - The duration of a dash is three times the duration of a dot.
  - Each dot or dash is followed by a short silence, equal to the dot duration.
  - The letters of a word are separated by a space equal to three dots (one dash),
  and the words are separated by a space equal to seven dots.
  - The dot duration is the basic unit of time measurement in code transmission.

*/
#ifndef Morse_h
#define Morse_h

#include "Arduino.h"

class Morse
{
  public:

	/*Constructor
	 * @Parameters:
	 * 	- pin: pin where is the LED
	 * 	- time: in miliseconds. Time of dot, basic measure.
	 *
	 * @Return:
	 *
	 */
    Morse(int pin, unsigned int time);

    //LETTERS
    /*
     * void A()
     * 	·-
     */
    void A_();

    /*
     * void B()
     * 	-···
     */
    void B_();

    /*
     * void C()
     * 	-·-·
     */
    void C_();

    /*
     * void D()
     * 	-··
     */
    void D_();

    /*
     * void E()
     * 	·
     */
    void E_();

    /*
     * void F()
     * 	··-·
     */
    void F_();

    /*
     * void G()
     * 	--·
     */
    void G_();

    /*
     * void H()
     * 	····
     */
    void H_();

    /*
     * void I()
     * 	··
     */
    void I_();

    /*
     * void J()
     * 	·---
     */
    void J_();

    /*
     * void K()
     * 	-·-
     */
    void K_();

    /*
     * void L()
     * 	·-··
     */
    void L_();

    /*
     * void M()
     * 	--
     */
    void M_();

    /*
     * void N()
     * 	-·
     */
    void N_();

    /*
     * void O()
     * 	---
     */
    void O_();

    /*
     * void P()
     * 	·--·
     */
    void P_();

    /*
     * void Q()
     * 	--·-
     */
    void Q_();

    /*
     * void R()
     * 	·-·
     */
    void R_();

    /*
     * void S()
     * 	···
     */
    void S_();

    /*
     * void T()
     * 	-
     */
    void T_();

    /*
     * void U()
     * 	··-
     */
    void U_();

    /*
     * void V()
     * 	···-
     */
    void V_();

    /*
     * void W()
     * 	·--
     */
    void W_();

    /*
     * void X()
     * 	-··-
     */
    void X_();

    /*
     * void Y()
     * 	-·--
     */
    void Y_();

    /*
     * void Z()
     * 	--··
     */
    void Z_();

    /*
     * void n0()
     * 	-----
     */
    void _0();

    /*
     * void n1()
     * 	·----
     */
    void _1();

    /*
     * void n2()
     * 	··---
     */
    void _2();

    /*
     * void n3()
     * 	···--
     */
    void _3();

    /*
     * void n4()
     * 	····-
     */
    void _4();

    /*
     * void n5()
     * 	·····
     */
    void _5();

    /*
     * void n6()
     * 	-····
     */
    void _6();

    /*
     * void n7()
     * 	--···
     */
    void _7();

    /*
     * void n8()
     * 	---··
     */
    void _8();

    /*
     * void n9()
     * 	----·
     */
    void _9();

    /*
     * void nextLetter()
     * Time for pause between letters. By convention, it is the same that used for 3 dots.
     *
     */
    void nextLetter();

    /*
     * void nextWord()
     * Time for pause between words. By convention, it is the same that used for 7 dots.
     *
     */
    void nextWord();

  private:
    int _pin;
    unsigned int _time;
};

#endif
