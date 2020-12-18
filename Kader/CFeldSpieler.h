#include "CSpieler.h"
#include "e_starkerFuss.h"
#include <iostream>
#include <string>
using namespace std;


class CFeldSpieler : CSpieler {
public:

    void print();

    // war void
     CFeldSpieler(string ein_name, string ein_vorname, unsigned int ein_alter, e_position ein_position, unsigned int ein_nummer);

private:
    e_starkerFuss starkerFuss;
    unsigned int verteidigung;
    unsigned int ballBeherrschung;
    unsigned int schussKraft;
    unsigned int schussGenauigkeit;
};
