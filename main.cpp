#include "Instruments.hpp"
#include "Partitions.hpp"

int main() {
	Instruments instrument;
	instrument.choix_activite();
	instrument.get_active();
	//Lis la partition 
	
    Partitions partition; // Création d'un objet de la classe Partitions

    cout << "Lecture des notes depuis le fichier...\n" << endl;
    partition.EcoutePartition(); // Appel de la fonction pour lire et afficher les notes

    // Test de Extrait_note() individuellement
    string note_test = "A4";
    float frequence = partition.Extrait_note(note_test);

    if (frequence > 0) {
        cout << "La fréquence de " << note_test << " est : " << frequence << " Hz" << endl;
    }
    else {
        cout << "Note inconnue !" << endl;
    }
	
	return 0;
}