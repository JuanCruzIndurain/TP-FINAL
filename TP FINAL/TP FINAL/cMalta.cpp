#include "cMalta.h"

cMalta::cMalta() : cInsumo()
{
	EBC = 0;
}

cMalta::cMalta(string nombre, float Cantidad, float Costo, const int ebc): cInsumo(nombre, Cantidad, Costo), EBC(ebc)
{
	
}

cMalta::~cMalta()
{

}

ostream & operator<<(ostream & o, const cMalta & E)
{
	cInsumo &P = (cInsumo&)E;
	o << P;
	o << "EBC: " << E.EBC << endl;
	return o;
}

istream& operator>>(istream &i, cMalta &E)
{
	cInsumo &P = (cInsumo&)E;
	i >> P;
	int aux;
	cout << "Ingrese EBC: " << endl;
	i >> aux;
	E.setEBC(aux);
	return i;
}