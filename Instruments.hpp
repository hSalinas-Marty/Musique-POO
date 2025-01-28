#ifndef INSTRUMENT
#define INSTRUMENT

#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
#include <fstream>

using namespace std;

class Instruments {
private:
	string Nom;
	float vitesse;
	int instru;
	int partition;
	int activite;
public:
	~Instruments();
	void choix_instrument();
	void choix_activite();
	void choix_partition();
	void choix_vitesse();
	string get_name();
	int get_activite();
	int get_instru();
	int get_partition();
	void ListenForKeyPress();
};

class Guitare : public Instruments {
private:

public:
	Guitare();
	~Guitare();
	void play_guitare();

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