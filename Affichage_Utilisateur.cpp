#include "Affichage_Utilisateur.hpp"


int Affichage_utilisateur::get_partition()
{
	return partition;
}

int Affichage_utilisateur::get_activite()
{
	return activite;
}

float Affichage_utilisateur::choix_vitesse()
{
	int tempo;

	cout << "Appuyez sur une touche correspondant a un rythme. \n1 = lent \n2 = normal \n3 = rapide" << endl;
	cin >> tempo;

	if (tempo == 1) {
		vitesse = 1.5;
		return vitesse;
	}
	else if (tempo == 2) {
		vitesse = 1;
		return vitesse;
	}
	else if (tempo == 3) {
		vitesse = 0.5;
		return vitesse;
	}
	else {
		cout << "Valeur incorrecte." << endl;
	}
}

void Affichage_utilisateur::choix_partition()
{
	int choix = 0;
	cout << "Quelle musique voulez-vous ecouter ? \n1 = Star Wars \n2 = Mario" << endl;
	cin >> choix;
	partition = choix;
}

void Affichage_utilisateur::choix_activite()
{
	int choix;
	cout << "Selectionner ce que vous voulez faire : \n1 = Jouer de la musique avec mon clavier \n2 = Ecouter de la musique" << endl;
	cin >> choix;
	activite = choix;
}

float Affichage_utilisateur::get_vitesse()
{
	return vitesse;
}

void Affichage_utilisateur::get_active()
{
	shared_ptr<Instruments> instruments;
	if (get_activite() == 1) {
		choix_instrument();
		if (get_instru() == 1) {
			instruments = make_shared<Guitare>();
		}
		if (get_instru() == 2) {
			instruments = make_shared<Piano>();
		}
		if (get_instru() == 3) {
			instruments = make_shared<Xylophone>();
			
		}
		instruments->ListenForKeyPress();
	}
	else {
		choix_partition();
		if (get_partition() == 1) {
			choix_instrument();
			
			string texte;
			texte = "C:/Users/hugos/Documents/Ynov/POO/Musique_POO/Musique-POO/Partitions/star_wars.txt";
			if (get_instru() == 1) {
				Partitions partition;
				partition.EcoutePartition(texte);

			}
			if (get_instru() == 2) {
				Partitions partition;
				partition.EcoutePartition(texte);

			}
			if (get_instru() == 3) {
				Partitions partition;
				partition.EcoutePartition(texte);

			}
		}
		else {
			choix_instrument();
			string texte;
			texte = "C:/Users/hugos/Documents/Ynov/POO/Musique_POO/Musique-POO/Partitions/mario.txt";
			if (get_instru() == 1) {
				Partitions partition;
				partition.EcoutePartition(texte);
			}
			if (get_instru() == 2) {
				Partitions partition;
				partition.EcoutePartition(texte);
			}
			if (get_instru() == 3) {
				Partitions partition;
				partition.EcoutePartition(texte);

			}
		}
	}
}

void Affichage_utilisateur::choix_instrument()
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

int Affichage_utilisateur::get_instru()
{
	return instru;
}
