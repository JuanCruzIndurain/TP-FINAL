#include "cOlla.h"

cOlla::cOlla() : Capacidad(25), Material("Aluminio")
{
	Temperatura = 24;
}

cOlla::cOlla(const float capacidad, const string material, float Temperatura) : Capacidad(capacidad), Material(material)
{
	this->Temperatura = Temperatura;
}

cOlla::~cOlla()
{

}