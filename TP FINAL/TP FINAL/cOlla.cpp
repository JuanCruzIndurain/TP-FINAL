#include "cOlla.h"

cOlla::cOlla() : Capacidad(25), Material("Aluminio")
{
	Tempertatura = 24;
}

cOlla::cOlla(const float capacidad, const string material, float Temperatura) : Capacidad(capacidad), Material(material)
{
	this->Tempertatura = Temperatura;
}

cOlla::~cOlla()
{

}

void cOlla::Hacer_Algo()
{

}