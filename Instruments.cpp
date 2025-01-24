#include "Instruments.hpp"

void Touch::choirithme()
{
    int tempo;

	cout << "Appuyez sur une touche correspondant à un rythme. \n1 = lent \n2 = normal \n3 = rapide" << endl;
	cin >> tempo;

	if (tempo == 1) {
		vitesse = 1;
	}
	else if (tempo == 2) {
		vitesse = 0,500;
	}
	else if (tempo == 3) {
		vitesse = 0,250;
	}
	else {
		cout << "Valeur incorrecte." << endl;
	}
}


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
