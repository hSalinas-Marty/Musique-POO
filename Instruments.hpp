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
public:
	~Instruments();
	string get_name();
	virtual void ListenForKeyPress();
	
};

class Guitare : public Instruments {
private:

public:
	Guitare();
	void ListenForKeyPress() override;
	~Guitare();
};

class Piano : public Instruments {
private:

public:
	Piano();
	void ListenForKeyPress() override;
	~Piano();
};


class Xylophone : public Instruments {
private:

public:
	Xylophone();
	void ListenForKeyPress() override;
	~Xylophone();

};


#endif