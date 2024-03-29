#include "cInsumo.h"

cInsumo::cInsumo() : Nombre("")
{
	Cantidad = 0;
	Costo = 0;
}

cInsumo::cInsumo(string nombre, float Cantidad, float Costo) 
{
	Nombre = nombre;
	this->Cantidad = Cantidad;
	this-> Costo = Costo;
}

cInsumo::~cInsumo()
{

}

cInsumo * cInsumo::operator=(cInsumo & p)
{
	
		Nombre = p.Nombre;
		Cantidad =  p.Cantidad;
		Costo = p.Costo;
		return this;
}

bool cInsumo::operator==(cInsumo & p)
{
	if (p.Nombre == Nombre)
	{
		return true;
	}
	return false;
}

bool cInsumo::operator!=(cInsumo & p)
{

	if (p.Nombre != Nombre)
	{
		return true;
	}
	return false;
}

cInsumo* cInsumo::operator++()
{
	this->Cantidad++;
	return this;
}

bool cInsumo::operator<(cInsumo & p)
{
	if (p.Cantidad > Cantidad)
	{
		return true;
	}
	return false;
}

bool cInsumo::operator>(cInsumo & p)
{
	if (p.Cantidad < Cantidad)
	{
		return true;
	}
	return false;
}

ostream & operator<<(ostream & o, const cInsumo & i)
{
	o << "Nombre Insumo: " << i.Nombre << endl << "Cantidad: " << i.Cantidad << endl;
	return o;
}
