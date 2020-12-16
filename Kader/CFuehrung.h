#include "CPerson.h"
#include "e_aufgabe.h"
#include <iostream>
#include <string>
using namespace std;


class CFuehrung : public CPerson {
public:

    void print();
    CFuehrung(string ein_name, string ein_vorname, unsigned int ein_alter, e_aufgabe ein_aufgabe);

private:
    e_aufgabe aufgabe;
};
