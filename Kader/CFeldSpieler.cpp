#include "CFeldSpieler.h"


void CFeldSpieler::print() {
	cout << "----" << endl;
	cout << "Vorname " << vorname << endl;
	cout << "Nachname " << name << endl;
	cout << "Alter " << alter << endl;
	cout << "Nummer: " << nummer << endl;
	cout << "Position: " << position << endl;
	cout << "Starker Fuss" << starkerFuss << endl;
	cout << "Verteidigung" << verteidigung << endl;
	cout << "Ball Beherrschung" << ballBeherrschung << endl;
	cout << "Schuss Kraft" << schussKraft << endl;
	cout << "Schuss Genauigkeit" << schussGenauigkeit << endl;
	cout << "----" << endl;
}


CFeldSpieler::CFeldSpieler(string ein_name, string ein_vorname, unsigned int ein_alter, e_position ein_position, unsigned int ein_nummer) {
	/*name = ein_name;
	vorname = ein_vorname;
	alter = ein_alter;*/
	position = ein_position;
	nummer = ein_nummer;
}