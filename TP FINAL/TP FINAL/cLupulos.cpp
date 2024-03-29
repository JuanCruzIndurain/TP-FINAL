#include "cLupulos.h"

cLupulos::cLupulos(): cInsumo(), Alfa_Acidos(0)
{
	Tiempo_Hervor = 0;
}

cLupulos::cLupulos(string nombre, float Cantidad, float Costo, const float AlfaAcidos, int TiempoHervor) : cInsumo(nombre, Cantidad, Costo), Alfa_Acidos(AlfaAcidos), Tiempo_Hervor(TiempoHervor)
{

}

cLupulos::~cLupulos()
{

}

ostream & operator<<(ostream & o, const cLupulos & E)
{
	cInsumo &P = (cInsumo&)E;
	o << P;
	o << "Tiempo Hervor: " << E.Tiempo_Hervor << endl;
	return o;
}

istream & operator>>(istream & i, cLupulos & E)
{
	cInsumo &P = (cInsumo&)E;
	i >> P;
	int aux;
	cout << "Ingrese tiempo hervor: " << endl;
	i >> aux;
	E.setTiempo_Hervor(aux);
	return i;
}
