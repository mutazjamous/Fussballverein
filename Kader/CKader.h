#include "CPerson.h"

class CKader {
public:

    CKader();
    bool add(const CPerson &ein_arg);
    void print();

private:
    unsigned int anzKader;
    CPerson* pKaderMitglieder[50];
};