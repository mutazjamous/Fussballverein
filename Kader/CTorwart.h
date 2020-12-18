#include <iostream>
#include <string>
#include "CSpieler.h"
using namespace std;

class CTorwart : public CSpieler {
public:
    void print();
    CTorwart(string ein_name, string ein_vorname, unsigned int ein_alter, e_position ein_position, unsigned int ein_nummer);

private:
    unsigned int strafRaumBeherrschung;
    unsigned int linienQualitaet;
    unsigned int abwehrKommunikation;
};