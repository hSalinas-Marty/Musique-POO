#include "Instruments.hpp"


void Instrument::chooseInstrument()
{
    int choix;
    cout << "Choisissez un instrument. \n1 = guitare \n2 = piano \n3 = xylophone" << endl;
    cin >> choix;
    if (choix == 1) {
        cout << "Vous avez choisi la guitare." << endl;
        instrument = "guitare";
    }
    else if (choix == 2) {
        cout << "Vous avez choisi le piano." << endl;
        instrument = "piano";
    }
    else if (choix == 3) {
        cout << "Vous avez choisi le xylophone." << endl;
        instrument = "xylophone";
    }
    else {
        cout << "Valeur incorrecte." << endl;
    }
}

void Instrument::makeSound()
{
    if (instrument == "guitare") {
        PlaySound(TEXT("metallophone.wav"), NULL, SND_FILENAME | SND_ASYNC);
    }
    /*else if (instrument == "piano") {
        PlaySound(TEXT("piano.wav"), NULL, SND_FILENAME | SND_ASYNC);
    }
    else if (instrument == "xylophone") {
        PlaySound(TEXT("xylophone.wav"), NULL, SND_FILENAME | SND_ASYNC);
    }*/
    else {
        cout << "Aucun son à jouer pour cet instrument." << endl;
    }
}

void Touch::choirithme()
{
    int tempo;

    cout << "Appuyez sur une touche correspondant à un rythme. \n1 = lent \n2 = normal \n3 = rapide" << endl;
    cin >> tempo;

    if (tempo == 1) {
        vitesse = 1.00;
    }
    else if (tempo == 2) {
        vitesse = 0.50;
    }
    else if (tempo == 3) {
        vitesse = 0.25;
    }
    else {
        cout << "Valeur incorrecte." << endl;
    }
}

void Touch::listenForKeyPress()
{
    cout << "Appuyez sur une touche correspondant à une note musicale (c, d, e, f, g, a, b)." << endl;
    cout << "Appuyez sur 'q' pour quitter." << endl;

    while (true) {
        if (_kbhit()) {
            char key = _getch();

            switch (key) {
            case 'c':
                cout << "note_do " << vitesse << endl;
                //this_thread::sleep_for(std::chrono::milliseconds(static_cast<int>(1000 * vitesse)));
                PlaySound(TEXT("metallophone.wav"), NULL, SND_FILENAME | SND_ASYNC);

                break;
            case 'd':
                cout << "note_re " << vitesse << endl;
                this_thread::sleep_for(std::chrono::milliseconds(static_cast<int>(1000 * vitesse)));
                break;
            case 'e':
                cout << "note_mi " << vitesse << endl;
                this_thread::sleep_for(std::chrono::milliseconds(static_cast<int>(1000 * vitesse)));
                break;
            case 'f':
                cout << "note_fa " << vitesse << endl;
                this_thread::sleep_for(std::chrono::milliseconds(static_cast<int>(1000 * vitesse)));
                break;
            case 'g':
                cout << "note_sol " << vitesse << endl;
                this_thread::sleep_for(std::chrono::milliseconds(static_cast<int>(1000 * vitesse)));
                break;
            case 'a':
                cout << "note_la " << vitesse << endl;
                this_thread::sleep_for(std::chrono::milliseconds(static_cast<int>(1000 * vitesse)));
                break;
            case 'b':
                cout << "note_si " << vitesse << endl;
                this_thread::sleep_for(std::chrono::milliseconds(static_cast<int>(1000 * vitesse)));
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
