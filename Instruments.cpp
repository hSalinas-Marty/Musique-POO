#include "Instruments.hpp"
#include <fstream>
#include <string>

void Instrument::chooseInstrument(int choix_instrument)
{
    int choix;
    cout << "Choisissez un instrument. \n1 = guitare \n2 = piano \n3 = xylophone" << endl;
    cin >> choix;
    if (choix == 1) {
        cout << "Vous avez choisi la guitare." << endl;
        choix_instrument = Guitare;
    }
    else if (choix == 2) {
        cout << "Vous avez choisi le piano." << endl;
        choix_instrument = Piano;
    }
    else if (choix == 3) {
        cout << "Vous avez choisi le xylophone." << endl;
        choix_instrument = Xylophone;
    }
    else {
        cout << "Valeur incorrecte." << endl;
    }
};

   void Instrument::choixrythme()
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
   void Instrument::listenForKeyPress()
   {
       cout << "Appuyez sur une touche correspondant � une note musicale (c, d, e, f, g, a, b)." << endl;
       cout << "Appuyez sur 'q' pour quitter." << endl;

       while (true) {
           if (_kbhit()) {
               char key = _getch();
           switch (key) {
           case 'c':
               cout << "note_do " << vitesse << endl;

               break;
           case 'd':
               cout << "note_re " << vitesse << endl;
               break;
           case 'e':
               cout << "note_mi " << vitesse << endl;
               break;
           case 'f':
               cout << "note_fa " << vitesse << endl;
               break;
           case 'g':
               cout << "note_sol " << vitesse << endl;
               break;
           case 'a':
               cout << "note_la " << vitesse << endl;
               break;
           case 'b':
               cout << "note_si " << vitesse << endl;
               break;
           case 'q':
               cout << "Fin du programme." << endl;
               return;
           default:
               cout << "Touche non reconnue." << endl;
           }
       }
   };

Instrument::~Instrument()
{
};

void Instrument::Lecture_partition(string partition)
{
};

    
 // Impl�mentation de Guitare


void Guitare::son_guitare()
{
    cout << "vous avez choisie la guigui" << endl;
};


// Impl�mentation de Piano


void Piano::son_piano()
{
    cout << "vous avez choisie la piapia" << endl;
};


// Impl�mentation de Xylophone


void Xylophone::son_xylophone()
{
    cout << "vous avez choisie la xyxy" << endl;
};
