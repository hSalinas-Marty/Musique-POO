#include "Instruments.hpp"
#include <fstream>


void Touch::listenForKeyPress()
{
        cout << "Appuyez sur une touche correspondant à une note musicale (d, r, m, f, s, l, i)." << endl;
        cout << "Appuyez sur 'q' pour quitter." << endl;

        while (true) {
            if (_kbhit()) {
                char key = _getch();

                switch (key) {
                case 'd':
                    cout << "note_do" << endl;
                    break;
                case 'f':
                    cout << "note_re" << endl;
                    break;
                case 'g':
                    cout << "note_mi" << endl;
                    break;
                case 'h':
                    cout << "note_fa" << endl;
                    break;
                case 'j':
                    cout << "note_sol" << endl;
                    break;
                case 'k':
                    cout << "note_la" << endl;
                    break;
                case 'l':
                    cout << "note_si" << endl;
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
// Implémentation de Guitare
void Guitare::affiche() const {
    std::cout << "Vous avez choisi une guitare." << std::endl;
}

void Guitare::jouerNote(const std::string& note) const {
    std::cout << "La guitare joue la note : " << note << std::endl;
    ifstream starwars("C:\Users\vicky\Desktop\VictoriaB1\opp\Musique-POO");  //On essaye d'ouvrir le fichier

    if (starwars)  //On teste si tout est OK
    {
        //Tout est OK, on peut utiliser le fichier
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }
}

// Implémentation de Piano
void Piano::affiche() const {
    std::cout << "Vous avez choisi un piano." << std::endl;
}

void Piano::jouerNote(const std::string& note) const {
    std::cout << "Le piano joue la note : " << note << std::endl;
}

// Implémentation de Xylophone
void Xylophone::affiche() const {
    std::cout << "Vous avez choisi un xylophone." << std::endl;
}

void Xylophone::jouerNote(const std::string& note) const {
    std::cout << "Le xylophone joue la note : " << note << std::endl;
}
