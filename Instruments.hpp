#ifndef INSTRUMENTS
#define INSTRUMENTS

#include <thread>
#include <chrono>
#include <conio.h>
#include <iostream>
#include <windows.h>
#include <string>



using namespace std;

class Instrument {
private :
	string instrument;
public:
	void chooseInstrument();
	void makeSound();
	string getInstrument() { return instrument; }
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
	float vitesse;
public:
	void choirithme();
	void listenForKeyPress();
};

#endif