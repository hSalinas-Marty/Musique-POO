#ifndef INSTRUMENTS
#define INSTRUMENTS

#include <iostream>
#include <conio.h>

using namespace std;

//class Instrument {
//};
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
	string note_do;
	string note_re;
	string note_mi;
	string note_fa;
	string note_sol;
	string note_la;
	string note_si;
public:
	void listenForKeyPress();

};

#endif