#ifndef INSTRUMENT
#define INSTRUMENT

#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
#include <fstream>
#include <sstream>
#include <map>

using namespace std;

class Instruments {
private:
	string Nom;
	int instru;
public:
	~Instruments();
	void choix_instrument();
	string get_name();
	int get_instru();
	void ListenForKeyPress();
	
};

class Guitare : public Instruments {
private:

public:
	Guitare();
	~Guitare();
};

class Xylophone : public Instruments {
private:

public:
	Xylophone();
	~Xylophone();

};

class Piano : public Instruments {
private:

public:
	Piano();
	~Piano();
};


#endif