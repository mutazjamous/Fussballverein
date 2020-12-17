#include "CFuehrung.h"

void CFuehrung::print() {
	cout << "----" << endl;
	cout << "Vorname " << vorname << endl;
	cout << "Nachname " << name << endl;
	cout << "Alter " << alter << endl;
	cout << "Aufgabe: " << aufgabe << endl;
	cout << "----" << endl;
}


// war void
CFuehrung::CFuehrung(string ein_name, string ein_vorname, unsigned int ein_alter, e_aufgabe ein_aufgabe) {
	name = ein_name;
	vorname = ein_vorname;
	alter = ein_alter;
	aufgabe = ein_aufgabe;
}
