#include "cExtras.h"

cExtras::cExtras(){ 
}

cExtras::cExtras(const string nombre, float cant, float cost, int tiempo, int temperatura) :cInsumos(nombre) 
{
	Cantidad = cant;
	Costo = cost;
	Tiempo_Hervor = tiempo;
	Temperatura = temperatura;
}

cExtras::cExtras(string nombre, float cant, float cost) :cInsumos(nombre)
{
	Cantidad = cant;
	Costo = cost;
	Tiempo_Hervor = 0;
	Temperatura = 0;
}

cExtras::~cExtras() {

}