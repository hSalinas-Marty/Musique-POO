#include "Instruments.hpp"
#include "fstream"
#include "Partitions.hpp"
#include "Affichage_Utilisateur.hpp"

Instruments::~Instruments()
{
}

string Instruments::get_name()
{
	return Nom;
}

void Instruments::ListenForKeyPress()
{
	cout << " appuyez sur une des touches suivantes (s, e, d, r, f, g, y, h, u, j, i, k)." << endl;
	cout << "Appuyez sur 'q' pour quitter." << endl;

	while (true) {
		if (_kbhit()) {
			char key = _getch();
			switch (key) {
			case 's':
				cout << "DO" << endl;
				break;
			case 'e':
				cout << "DO#" << endl;
				break;
			case 'd':
				cout << "RE" << endl;
				break;
			case 'r':
				cout << "RE#" << endl;
				break;
			case 'f':
				cout << "MI" << endl;
				break;
			case 'g':
				cout << "FA" << endl;
				break;
			case 'y':
				cout << "FA#" << endl;
				break;
			case 'h':
				cout << "SOL" << endl;
				break;
			case 'u':
				cout << "SOL#" << endl;
				break;
			case 'j':
				cout << "LA" << endl;
				break;
			case 'i':
				cout << "LA#" << endl;
				break;
			case 'k':
				cout << "SI" << endl;
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






Guitare::Guitare()
{
}

void Guitare::ListenForKeyPress()
{

	cout << " Note a la guitare :";
	Instruments::ListenForKeyPress();
	cout << endl;
}

Guitare::~Guitare()
{
}


Piano::Piano()
{
}

void Piano::ListenForKeyPress()
{
	
	cout << " Note au Piano :";
	Instruments::ListenForKeyPress();
	cout << endl;
}

Piano::~Piano()
{
}

Xylophone::Xylophone()
{
}

void Xylophone::ListenForKeyPress()
{
	cout << " Note au Xylophone :";
	Instruments::ListenForKeyPress();
	cout << endl;
}

Xylophone::~Xylophone()
{
}



