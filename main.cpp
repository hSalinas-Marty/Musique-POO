#include "Instruments.hpp"

int main() {
    int Choix;
    cout << "Choisissez votre instrument (1 : Guitare; 2 : Piano; 3 : Xylophone) ";
   
    cin >> Choix;

    Touch touch;

    touch.listenForKeyPress();
    return 0;

}