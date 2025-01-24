#ifndef INSTRUMENTS
#define INSTRUMENTS

#include <iostream>
#include <conio.h>

using namespace std;

// Classe abstraite pour les instruments
class Instrument {
private:
    float vitesse;
public:
      void chooseInstrument();
      void choirithme();
      void listenForKeyPress();
      virtual ~Instrument();
      void Lecture_partition(partition);

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