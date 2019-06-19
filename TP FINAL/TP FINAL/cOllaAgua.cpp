#include "cOllaAgua.h"

cOllaAgua::cOllaAgua() : cOlla()
{
	Cantidad_Actual = 0;
}

cOllaAgua::cOllaAgua(const float capacidad, const string material, float Temperatura, float Cantidad_Actual) : cOlla(capacidad, material, Temperatura)
{
	this->Cantidad_Actual = Cantidad_Actual;
}

cOllaAgua::~cOllaAgua()
{

}

void cOllaAgua::Hacer_Algo()
{

}

void cOllaAgua::Agregar(float Agua)
{
	Cantidad_Actual = Agua;
	Hacer_Algo();
}

void cOllaAgua::Calentar(float Temperatura)
{
	this->Tempertatura = Temperatura;
	Hacer_Algo();
}
