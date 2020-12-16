  #include "CPerson.h"
#include "e_position.h"
#include <iostream>
#include <string>
using namespace std;

class CSpieler : CPerson {
protected:
    e_position position;
    unsigned int nummer;

public:

    void print();

};
