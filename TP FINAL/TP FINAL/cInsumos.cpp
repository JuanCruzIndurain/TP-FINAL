#include "cInsumos.h"

cInsumos::cInsumos() : Nombre("")
{
	Cantidad = 0;
	Costo = 0;
}

cInsumos::cInsumos(string nombre, float Cantidad, float Costo) : Nombre(nombre)
{
	this->Cantidad = Cantidad;
	this-> Costo = Costo;
}

cInsumos::~cInsumos()
{

}