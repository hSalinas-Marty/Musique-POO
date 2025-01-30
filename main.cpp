#include "Instruments.hpp"
#include "Partitions.hpp"
#include "Affichage_Utilisateur.hpp"

int main() {
	Affichage_utilisateur affichage_utilisateur;
	affichage_utilisateur.choix_activite();
	affichage_utilisateur.get_active();
	
	return 0;
}