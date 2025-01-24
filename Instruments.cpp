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
    // Tableau des notes associées aux touches
    char notes[] = {'d', 'r', 'm', 'f', 's', 'l', 'i'};
    string names_notes[] = {"Do", "Ré", "Mi", "Fa", "Sol", "La", "Si"};
    
    cout << "Appuyez sur une touche correspondant à une note musicale (d, r, m, f, s, l, i)." << endl;
    cout << "Appuyez sur 'q' pour quitter." << endl;

    while (true) {
        // Attente d'une touche sans qu'elle ne soit répétée
        char key = getKeyPress();
        
        // Vérifie si la touche pressée est 'q' pour quitter
        if (key == 'q') {
            cout << "Fin du programme." << endl;
            break;
        }

        // Cherche la touche dans le tableau et affiche la note correspondante
        bool recognized = false;
        for (int i = 0; i < sizeof(notes) / sizeof(notes[0]); i++) {
            if (key == notes[i]) {
                cout << "Note: " << names_notes[i] << endl;
                recognized = true;
                break;
            }
        }

        if (!recognized) {
            cout << "Touche non reconnue." << endl;
        }
    }
}


