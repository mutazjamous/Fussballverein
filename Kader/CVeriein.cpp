#include "CVeriein.h"
#include "CFuehrung.h"
#include "CKader.h"

bool CVeriein::add(const CFuehrung& ein_arg) {
    return false;
}

bool CVeriein::add(const CKader& ein_arg) {
    return false;
}

void CVeriein::print() {
	cout << "----" << endl;
	cout << "Anzahl Fuehrung" << anzFuehrung  << endl;
	cout << "----" << endl;
}