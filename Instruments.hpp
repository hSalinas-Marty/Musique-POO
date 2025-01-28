#ifndef INSTRUMENTS
#define INSTRUMENTS

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

// Classe abstraite pour les instruments
class Instrument {
private:
    int choix_instrument;
    float vitesse;
public:
      void chooseInstrument(int choix_instrument);
      void choixrythme();
      void listenForKeyPress();
      virtual ~Instrument();
      void Lecture_partition(string partition);

};

// Classe Guitare
class Guitare : public Instrument {
public:
    void son_guitare();
};

// Classe Piano
class Piano : public Instrument {
public:

    void son_piano();
};

// Classe Xylophone
class Xylophone : public Instrument {
public:

    void son_xylophone();
};

#endif