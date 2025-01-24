#include "Instruments.hpp"

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
