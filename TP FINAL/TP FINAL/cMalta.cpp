#include "cMalta.h"

cMalta::cMalta():EBC(0) {
}

cMalta::cMalta(string nom, float cant, float cost, const int ebc): cInsumos(nom), EBC(ebc)
{
	Cantidad = cant;
	Costo = cost;
}

cMalta::~cMalta() {

}