#include "cExtras.h"

cExtras::cExtras() : cInsumo()
{
	Tiempo_Hervor = 0;
	Temperatura = 0;
}

cExtras::cExtras(string nombre, float Cantidad, float Costo) :cInsumo(nombre, Cantidad, Costo)
{
	Tiempo_Hervor = 0;
	Temperatura = 0;
}

cExtras::cExtras(string nombre, float Cantidad, float Costo, int Tiempo_Hervor) : cInsumo(nombre, Cantidad, Costo)
{
	this->Tiempo_Hervor = Tiempo_Hervor;
	Temperatura = 0;
}

cExtras::cExtras(string nombre, float Cantidad, float Costo, int tiempo_Hervor, int temperatura) :cInsumo(nombre, Cantidad, Costo)
{
	Tiempo_Hervor = tiempo_Hervor;
	Temperatura = temperatura;
}

cExtras::~cExtras()
{

}