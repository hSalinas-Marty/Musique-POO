#include "Instruments.hpp"
#include <fstream>


   void Instrument::chooseInstrument()
    {
        int choix;
        cout << "Choisissez un instrument. \n1 = guitare \n2 = piano \n3 = xylophone" << endl;
        cin >> choix;
        if (choix == 1) {
            cout << "Vous avez choisi la guitare." << endl;
            instrument = "guitare";
        }
        else if (choix == 2) {
            cout << "Vous avez choisi le piano." << endl;
            instrument = "piano";
        }
        else if (choix == 3) {
            cout << "Vous avez choisi le xylophone." << endl;
            instrument = "xylophone";
        }
        else {
            cout << "Valeur incorrecte." << endl;
        }
    }

 void Instrument::choirithme()
    {
        int tempo;

        cout << "Appuyez sur une touche correspondant à un rythme. \n1 = lent \n2 = normal \n3 = rapide" << endl;
        cin >> tempo;

        if (tempo == 1) {
            vitesse = 1.50;
        }
        else if (tempo == 2) {
            vitesse = 1.00;
        }
        else if (tempo == 3) {
            vitesse = 0.50;
        }
        else {
            cout << "Valeur incorrecte." << endl;
        }
    }

    void Instrument::listenForKeyPress()
    {
        cout << "Appuyez sur une touche correspondant à une note musicale (c, d, e, f, g, a, b)." << endl;
        cout << "Appuyez sur 'q' pour quitter." << endl;

        while (true) {
            if (_kbhit()) {
                char key = _getch();

                switch (key) {
                case 'c':
                    cout << "note_do " << vitesse << endl;

                    break;
                case 'd':
                    cout << "note_re " << vitesse << endl;
                    break;
                case 'e':
                    cout << "note_mi " << vitesse << endl;
                    break;
                case 'f':
                    cout << "note_fa " << vitesse << endl;
                    break;
                case 'g':
                    cout << "note_sol " << vitesse << endl;
                    break;
                case 'a':
                    cout << "note_la " << vitesse << endl;
                    break;
                case 'b':
                    cout << "note_si " << vitesse << endl;
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

Instrument::~Instrument()
 {
 }

void Instrument::Lecture_partition(partition)
{
}



    
    
 // Implémentation de Guitare


void Guitare::son_guitare()
{
}


// Implémentation de Piano


void Piano::son_piano()
{
}


// Implémentation de Xylophone


void Xylophone::son_xylophone()
{
}
