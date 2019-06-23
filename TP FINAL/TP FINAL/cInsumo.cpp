#include "cInsumo.h"

cInsumo::cInsumo() : Nombre("")
{
	Cantidad = 0;
	Costo = 0;
}

cInsumo::cInsumo(string nombre, float Cantidad, float Costo) : Nombre(nombre)
{
	this->Cantidad = Cantidad;
	this-> Costo = Costo;
}

cInsumo::~cInsumo()
{

}