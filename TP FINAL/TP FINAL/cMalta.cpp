#include "cMalta.h"

cMalta::cMalta() : cInsumo(), EBC(0)
{

}

cMalta::cMalta(string nombre, float Cantidad, float Costo, const int ebc): cInsumo(nombre, Cantidad, Costo), EBC(ebc)
{
	
}

cMalta::~cMalta()
{

}