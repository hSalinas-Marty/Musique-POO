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
			case 'c':
				cout << "DO" << endl;
				break;
			case 'd':
				cout << "RE" << endl;
				break;
			case 'e':
				cout << "MI" << endl;
				break;
			case 'f':
				cout << "FA" << endl;
				break;
			case 'g':
				cout << "SOL" << endl;
				break;
			case 'a':
				cout << "LA" << endl;
				break;
			case 'b':
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

void Instruments::get_active()
{
	if (get_activite() == 1) {
		choix_instrument();
		if (get_instru() == 1) {
			Guitare guitare;
			guitare.ListenForKeyPress();
		}
		if (get_instru() == 2) {
			Xylophone xilophone;
			xilophone.ListenForKeyPress();
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
			}
			if (get_instru() == 2) {
				Xylophone xilophone;
				xilophone.choix_vitesse();
			}
			if (get_instru() == 3) {
				Piano piano;
				piano.choix_vitesse();
			}
		}
		else {
			choix_instrument();
			if (get_instru() == 1) {
				Guitare guitare;
				guitare.choix_vitesse();
			}
			if (get_instru() == 2) {
				Xylophone xilophone;
				xilophone.choix_vitesse();
			}
			if (get_instru() == 3) {
				Piano piano;
				piano.choix_vitesse();
			}
		}
	}
}

void Instruments::sdl()
{
	if (SDL_Init(SDL_INIT_AUDIO) < 0) {
		std::cerr << "Erreur lors de l'initialisation de SDL: " << SDL_GetError() << std::endl;
	}

	// Initialisation de SDL_mixer
	if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0) {
		std::cerr << "Erreur lors de l'initialisation de SDL_mixer: " << Mix_GetError() << std::endl;
		SDL_Quit();
	}

	// Charger un fichier audio (remplacez "son.wav" par le chemin de votre fichier)
	Mix_Chunk* sound = Mix_LoadWAV("metallophone.wav");
	if (!sound) {
		std::cerr << "Erreur lors du chargement du son: " << Mix_GetError() << std::endl;
		Mix_CloseAudio();
		SDL_Quit();
	}

	// Jouer le son
	if (Mix_PlayChannel(-1, sound, 0) == -1) {
		std::cerr << "Erreur lors de la lecture du son: " << Mix_GetError() << std::endl;
		Mix_FreeChunk(sound);
		Mix_CloseAudio();
		SDL_Quit();
	}

	std::cout << "Appuyez sur une touche pour quitter..." << std::endl;

	// Attendre un événement (par exemple, la fermeture de la fenêtre ou une touche)
	SDL_Event event;
	bool running = true;
	while (running) {
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT || event.type == SDL_KEYDOWN) {
				running = false;
			}
		}
		SDL_Delay(100); // Réduction de l'utilisation CPU
	}

	// Nettoyer les ressources
	Mix_FreeChunk(sound);
	Mix_CloseAudio();
	SDL_Quit();
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


