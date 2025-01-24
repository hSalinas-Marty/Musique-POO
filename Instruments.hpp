#ifndef INSTRUMENTS
#define INSTRUMENTS	

#include <iostream>
#include <string>

using namespace std;

class Instrument {
private:
	[] string note = ["C", "D", "E"];
public:
	void Instrument();
	void ~Instrument();


};

class Guitare : public Instrument {
};

class Piano : public Instrument {
};

class Xylophone : public Instrument {
};



#endif 