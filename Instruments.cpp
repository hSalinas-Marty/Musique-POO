#include <iostream>
#include <unistd.h>
#include <termios.h>
#include <cstdlib>
#include "Instruments.hpp"

using namespace std;

// Fonction pour obtenir une entrée sans appuyer sur 'Entrée'
char getKeyPress() {
    struct termios oldt, newt;
    char ch;
    
    // Sauvegarde des paramètres du terminal
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    
    // Désactive le mode canonique et les échos
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    
    // Attente d'une touche
    ch = getchar();
    
    // Restauration des paramètres du terminal
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    
    return ch;
}

void Touch::listenForKeyPress() {
    cout << "Appuyez sur une touche correspondant à une note musicale (d, r, m, f, s, l, i)." << endl;
    cout << "Appuyez sur 'q' pour quitter." << endl;

    while (true) {
        char key = getKeyPress();

        switch (key) {
        case 'd':
            cout << "Note: " << note_do << endl;
            break;
        case 'r':
            cout << "Note: " << note_re << endl;
            break;
        case 'm':
            cout << "Note: " << note_mi << endl;
            break;
        case 'f':
            cout << "Note: " << note_fa << endl;
            break;
        case 's':
            cout << "Note: " << note_sol << endl;
            break;
        case 'l':
            cout << "Note: " << note_la << endl;
            break;
        case 'i':
            cout << "Note: " << note_si << endl;
            break;
        case 'q':
            cout << "Fin du programme." << endl;
            return;
        default:
            cout << "Touche non reconnue." << endl;
        }
    }
}


