#ifndef INSTRUMENTS
#define INSTRUMENTS

#include <iostream>
#include <conio.h>

using namespace std;

// Classe abstraite pour les instruments
class Instrument {
public:
      virtual ~Instrument() = default;
};

// Classe Guitare
class Guitare : public Instrument {
public:
    void affiche() const override;
    void jouerNote(const std::string& note) const override;
};

// Classe Piano
class Piano : public Instrument {
public:
    void affiche() const override;
    void jouerNote(const std::string& note) const override;
};

// Classe Xylophone
class Xylophone : public Instrument {
public:
    void affiche() const override;
    void jouerNote(const std::string& note) const override;
};
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
