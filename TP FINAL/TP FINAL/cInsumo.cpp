#include "cInsumos.h"

cInsumos::cInsumo() : Nombre("")
{
	Cantidad = 0;
	Costo = 0;
}

cInsumos::cInsumo(string nombre, float Cantidad, float Costo) : Nombre(nombre)
{
	this->Cantidad = Cantidad;
	this-> Costo = Costo;
}

cInsumos::~cInsumo()
{

}