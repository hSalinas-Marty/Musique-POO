#include "Instruments.hpp"
#include "Partitions.hpp"

int main() {
	Instruments instrument;
	instrument.choix_activite();
	instrument.get_active();
	//Lis la partition 
	
    Partitions partition; 
    cout << "Lecture des notes depuis le fichier si il veut bien\n" << endl;
    partition.EcoutePartition(); 
	string nom_note;
	partition.Extrait_note(nom_note);
	
	return 0;
}