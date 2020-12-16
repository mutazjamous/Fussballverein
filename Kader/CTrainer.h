#include "CPerson.h"
#include <iostream>
#include <string>
using namespace std;


class CTrainer : CPerson {
public:

    void print();
    CTrainer(string ein_name, string ein_vorname, unsigned int ein_alter);

private:
    unsigned int lizenzStufe;
};