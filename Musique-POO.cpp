#include "Instruments.hpp"

void listenForKeyPress() {
    cout << "Appuyez sur une touche correspondant à une note musicale (d, r, m, f, s, l, i)." << endl;
    cout << "Appuyez sur 'q' pour quitter." << endl;

    while (true) {
        if (_kbhit()) { 
            char key = _getch(); 

            switch (key) {
            case 'd': 
                cout << do << endl;
                break;
            case 'f': 
                cout << re << endl;
                break;
            case 'g':
                cout << mi << endl;
                break;
            case 'h': 
                cout << fa << endl;
                break;
            case 'j': 
                cout << sol << endl;
                break;
            case 'k': 
                cout << la << endl;
                break;
            case 'l':
                cout << note_si << endl;
                break;
            case 'q': 
                cout << "Fin du programme." << endl;
                return;
            default:
                cout << "Touche non reconnue." << endl;
            }
        }
    }
}
