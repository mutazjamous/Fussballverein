#include <iostream>
#include "CTorwart.h"

int main()
{
	CTorwart* ctorwart = new CTorwart("Manuel", "Neuer", 34, e_position::torwart, 5);
	ctorwart->print();
}


