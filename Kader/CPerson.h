#include <iostream>
#include <string>
using namespace std;



class CPerson {
protected:
    string name;
    string vorname;
    unsigned int alter;

public:
    void print() {

        cout << name << endl;
        cout << vorname << endl;
        cout << alter << endl;
    }


};
