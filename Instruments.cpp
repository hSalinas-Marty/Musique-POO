#include "Instruments.hpp"


Instruments::~Instruments()
{
}

void Instruments::choix_instrument()
{
	int choix;
	cout << "Veillez selectionner un instrument : \n1 = guitare \n2 = piano \n3 = xylophone" << endl;
	cin >> choix;
	if (choix == 1) {
		cout << "Vous avez choisi la guitare." << endl;
		instru = choix;
	}
	else if (choix == 2) {
		cout << "Vous avez choisi le piano." << endl;
		instru = choix;
	}
	else if (choix == 3) {
		cout << "Vous avez choisi le xylophone." << endl;
		instru = choix;
	}
	else {
		cout << "Valeur incorrecte." << endl;
	}
}

void Instruments::choix_activite()
{
	int choix;
	cout << "Selectionner ce que vous voulez faire : \n1 = Jouer de la mudique avec mon clavier \n2 = Ecouter de la musique" << endl;
	cin >> choix;
	activite = choix;
}

void Instruments::choix_partition()
{
	int choix;
	cout << "Quelle musique voulez-vous ecouter ? \n1 = Star Wars \n2 = Mario" << endl;
	cin >> choix;
	partition = choix;
}

void Instruments::choix_vitesse()
{
	int tempo;

	cout << "Appuyez sur une touche correspondant � un rythme. \n1 = lent \n2 = normal \n3 = rapide" << endl;
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

string Instruments::get_name()
{
	return Nom;
}

int Instruments::get_activite()
{
	return activite;
}

int Instruments::get_instru()
{
	return instru;
}

int Instruments::get_partition()
{
	return partition;
}

void Instruments::ListenForKeyPress()
{
	cout << "Appuyez sur une touche correspondant � une note musicale (c, d, e, f, g, a, b)." << endl;
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

void Instruments::EcoutePartition()
{
	ifstream monFlux("C:/Users/hugos/Documents/Ynov/POO/test-POO/Partitions/star_wars.txt");
	if (monFlux) {
		string ligne;
		while (getline(monFlux, ligne)) {
			istringstream fluxLigne(ligne);
			string note;
			double duree;

			// Lecture de la note et de la dur�e
			if (fluxLigne >> note >> duree) {

			}
			else {
				cout << "Ligne mal formatee ou vide : " << ligne << endl;
			}
		}
	}
	else {
		cout << "Erreur : impossible d'ouvrir le fichier en lecture" << endl;
	}
}

void Instruments::get_active()
{
	if (get_activite() == 1) {
		choix_instrument();
		if (get_instru() == 1) {
			Guitare guitare;
			guitare.ListenForKeyPress();
		}
		if (get_instru() == 2) {
			Xylophone xylophone;
			xylophone.ListenForKeyPress();
		}
		if (get_instru() == 3) {
			Piano piano;
			piano.ListenForKeyPress();
		}
	}
	else {
		choix_partition();
		if (get_partition() == 1) {
			choix_instrument();
			if (get_instru() == 1) {
				Guitare guitare;
				guitare.choix_vitesse();
				guitare.EcoutePartition();
			}
			if (get_instru() == 2) {
				Xylophone xylophone;
				xylophone.choix_vitesse();
				xylophone.EcoutePartition();
			}
			if (get_instru() == 3) {
				Piano piano;
				piano.choix_vitesse();
				piano.EcoutePartition();
			}
		}
		else {
			choix_instrument();
			if (get_instru() == 1) {
				Guitare guitare;
				guitare.choix_vitesse();
				guitare.EcoutePartition();
			}
			if (get_instru() == 2) {
				Xylophone xylophone;
				xylophone.choix_vitesse();
				xylophone.EcoutePartition();
			}
			if (get_instru() == 3) {
				Piano piano;
				piano.choix_vitesse();
				piano.EcoutePartition();
			}
		}
	}
}


Guitare::Guitare()
{
}

Guitare::~Guitare()
{
}

void Guitare::play_guitare()
{
}

Xylophone::Xylophone()
{
}

Xylophone::~Xylophone()
{
}

Piano::Piano()
{
}

Piano::~Piano()
{
}
