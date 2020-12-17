#include "CTrainer.h"

void CTrainer::print() {

	cout << "----" << endl;
	cout << "Vorname " << vorname << endl;
	cout << "Nachname " <<  name << endl;
	cout << "Alter " << alter << endl;
	cout << "Lizenz Stufe: " << lizenzStufe << endl;
	cout << "----" << endl;
	
}

CTrainer::CTrainer(string ein_name, string ein_vorname, unsigned int ein_alter) {

	name = ein_name;
	vorname = ein_vorname;
	alter = ein_alter;
	
}
