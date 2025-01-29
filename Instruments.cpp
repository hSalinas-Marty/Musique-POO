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
	cout << "Appuyez sur une touche correspondant à une note musicale (c, d, e, f, g, a, b)." << endl;
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
			map<string, int> note_to_frequency = {
	{"B0", 31}, {"C1", 33}, {"C#1", 35}, {"D1", 37}, {"D#1", 39}, {"E1", 41}, {"F1", 44}, {"F#1", 46}, {"G1", 49}, {"G#1", 52},
	{"A1", 55}, {"A#1", 58}, {"B1", 62}, {"C2", 65}, {"C#2", 69}, {"D2", 73}, {"D#2", 78}, {"E2", 82}, {"F2", 87}, {"F#2", 93},
	{"G2", 98}, {"G#2", 104}, {"A2", 110}, {"A#2", 117}, {"B2", 123}, {"C3", 131}, {"C#3", 139}, {"D3", 147}, {"D#3", 156},
	{"E3", 165}, {"F3", 175}, {"F#3", 185}, {"G3", 196}, {"G#3", 208}, {"A3", 220}, {"A#3", 233}, {"B3", 247}, {"C4", 262},
	{"C#4", 277}, {"D4", 294}, {"D#4", 311}, {"E4", 330}, {"F4", 349}, {"F#4", 370}, {"G4", 392}, {"G#4", 415}, {"A4", 440},
	{"A#4", 466}, {"B4", 494}, {"C5", 523}, {"C#5", 554}, {"D5", 587}, {"D#5", 622}, {"E5", 659}, {"F5", 698}, {"F#5", 740},
	{"G5", 784}, {"G#5", 831}, {"A5", 880}, {"A#5", 932}, {"B5", 988}, {"C6", 1047}, {"C#6", 1109}, {"D6", 1175}, {"D#6", 1245},
	{"E6", 1319}, {"F6", 1397}, {"F#6", 1480}, {"G6", 1568}, {"G#6", 1661}, {"A6", 1760}, {"A#6", 1865}, {"B6", 1976},
	{"C7", 2093}, {"C#7", 2217}, {"D7", 2349}, {"D#7", 2489}, {"E7", 2637}, {"F7", 2794}, {"F#7", 2960}, {"G7", 3136},
	{"G#7", 3322}, {"A7", 3520}, {"A#7", 3729}, {"B7", 3951}, {"C8", 4186}, {"C#8", 4435}, {"D8", 4699}, {"D#8", 4978}
			};
			// Lecture de la note et de la durée
			fluxLigne >> note >> duree;

			cout << "Ligne mal formatee ou vide : " << ligne << endl;
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
