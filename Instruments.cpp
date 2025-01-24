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

