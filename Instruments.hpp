#ifndef INSTRUMENTS_HPP
#define INSTRUMENTS_HPP

#include <iostream>
using namespace std;

class Touch {
private:
    string note_do = "Do";
    string note_re = "Ré";
    string note_mi = "Mi";
    string note_fa = "Fa";
    string note_sol = "Sol";
    string note_la = "La";
    string note_si = "Si";
    
public:
    void listenForKeyPress();
};

#endif // INSTRUMENTS_HPP
