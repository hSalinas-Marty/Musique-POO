#ifndef INSTRUMENT_Partition
#define INSTRUMENT_Partition

#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
#include <fstream>
#include <sstream>
#include <map>
#include <windows.h>

using namespace std;


class Partitions {
public:
	void EcoutePartition(string url);
	float  Extrait_note(string nom_note);
};


#endif