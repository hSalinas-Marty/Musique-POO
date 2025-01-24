#include "Instruments.hpp"


int main() {
    ifstream fichier("star_wars.txt"); // Ouvre le fichier en lecture

    if (!fichier) { // Vérifie si le fichier est ouvert correctement
        cout << "Erreur lors de l'ouverture du fichier." << endl;
        return 1;
    }

    string ligne;
    while (getline(fichier, ligne)) { // Lis le fichier ligne par ligne
        cout << ligne << endl;


    }

    fichier.close();
    Touch touch;

    touch.listenForKeyPress();
    return 0;
}