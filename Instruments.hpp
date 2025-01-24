#ifndef INSTRUMENTS
#define INSTRUMENTS

#include <iostream>
#include <conio.h>

using namespace std;

class Instrument {
private :
	string instrument;
public:
	void chooseInstrument();
};
//
//class Guitare : public Instrument {
//};
//
//class Piano : public Instrument {
//};
//
//class Xylophone : public Instrument {
//};

class Touch {
private:
	int vitesse;
public:
	void choirithme();
	void listenForKeyPress();
};

#endif