#ifndef Affichage_Utilisateur
#define Affichage_Utilisateur

#include "Partitions.hpp"
#include "Instruments.hpp"

class Affichage_utilisateur {
private:
    float vitesse = 1;
    int partition;
    int activite;
    int instru;
public:
    void choix_partition();
    void choix_activite();
    float choix_vitesse();
    float get_vitesse();
    int get_partition();
    int get_activite();
    void get_active();
    int get_instru();
    void choix_instrument();
};

#endif 
