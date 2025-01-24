#include "Instruments.hpp"

void Touch::listenForKeyPress()
{
        cout << "Appuyez sur une touche correspondant à une note musicale (d, r, m, f, s, l, i)." << endl;
        cout << "Appuyez sur 'q' pour quitter." << endl;

        while (true) {
            if (_kbhit()) {
                char key = _getch();

                switch (key) {
                case 'c':
                    cout << "note_do" << endl;
                    break;
                case 'd':
                    cout << "note_re" << endl;
                    break;
                case 'e':
                    cout << "note_mi" << endl;
                    break;
                case 'f':
                    cout << "note_fa" << endl;
                    break;
                case 'g':
                    cout << "note_sol" << endl;
                    break;
                case 'a':
                    cout << "note_la" << endl;
                    break;
                case 'b':
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
