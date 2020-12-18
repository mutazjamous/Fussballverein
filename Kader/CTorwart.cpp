#include "CTorwart.h"

void CTorwart::print()
{
	cout << "----" << endl;
	cout << "Nachname " << name << endl;
	cout << "Vorname " << vorname << endl;
	cout << "Alter " << alter << endl;
	cout << "Nummer: " << nummer << endl;
	cout << "Position" << position << endl;
	cout << "Straf RaumBeherrschung" << strafRaumBeherrschung << endl;
	cout << "linienQualitaet" << linienQualitaet << endl;
	cout << "abwehrKommunikation" << abwehrKommunikation << endl;
	cout << "----" << endl;
}

CTorwart::CTorwart(string ein_name, string ein_vorname, unsigned int ein_alter, e_position ein_position, unsigned int ein_nummer)
{
	name = ein_name;
	position = ein_position;
	nummer = ein_nummer;
}