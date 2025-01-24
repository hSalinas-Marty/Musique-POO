#include "Instruments.hpp"

int main() {
    Touch touch;
	Instrument instrument;

	instrument.chooseInstrument();
	instrument.makeSound();
	touch.choirithme();
    touch.listenForKeyPress();
    return 0;
}