#include "cMalta.h"

cMalta::cMalta() : cInsumos(), EBC(0)
{

}

cMalta::cMalta(string nombre, float Cantidad, float Costo, const int ebc): cInsumos(nombre, Cantidad, Costo), EBC(ebc)
{
	
}

cMalta::~cMalta()
{

}