#include "CSpieler.h"
#include "CSpieler.cpp"
#include <iostream>
#include <string>
using namespace std;


class CTorwart : CSpieler {
public:

    void print();

    //war void
    CTorwart(string ein_name, string ein_vorname, unsigned int ein_alter, e_position ein_position, unsigned int ein_nummer);

private:
    unsigned int strafRaumBeherrschung;
    unsigned int linienQualitaet;
    unsigned int abwehrKommunikation;
};