#include "Instruments.hpp"

int main() {
	Instruments instrument;
	instrument.choix_activite();
	if (instrument.get_activite() == 1) {
		instrument.choix_instrument();
		if (instrument.get_instru() == 1) {
			Guitare guitare;
			guitare.ListenForKeyPress();
		}
		if (instrument.get_instru() == 2) {
			Xilophone xilophone;
			xilophone.ListenForKeyPress();
		}
		if (instrument.get_instru() == 3) {
			Piano piano;
			piano.ListenForKeyPress();
		}
	}
	else {
		instrument.choix_partition();
		if (instrument.get_partition() == 1) {
			instrument.choix_instrument();
			if (instrument.get_instru() == 1) {
				Guitare guitare;
				guitare.choix_vitesse();
			}
			if (instrument.get_instru() == 2) {
				Xilophone xilophone;
				xilophone.choix_vitesse();
			}
			if (instrument.get_instru() == 3) {
				Piano piano;
				piano.choix_vitesse();
			}
		}
		else {
			if (instrument.get_instru() == 1) {
				Guitare guitare;
				guitare.choix_vitesse();
			}
			if (instrument.get_instru() == 2) {
				Xilophone xilophone;
				xilophone.choix_vitesse();
			}
			if (instrument.get_instru() == 3) {
				Piano piano;
				piano.choix_vitesse();
			}
		}
	}

	return 0;
}