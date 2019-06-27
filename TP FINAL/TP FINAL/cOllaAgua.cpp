#include "cOllaAgua.h"

cOllaAgua::cOllaAgua() : cOlla()
{
	Cantidad_Actual = 0;
}

cOllaAgua::cOllaAgua(const float capacidad, const string material, float Temperatura) : cOlla(capacidad, material, Temperatura)
{
	this->Cantidad_Actual = 0;
}

cOllaAgua::~cOllaAgua()
{

}

void cOllaAgua::Hacer_Algo(cProceso* Proceso, float)
{
	if (Proceso->Cant_Usada <= Capacidad)
		Cantidad_Actual = Proceso->Cant_Usada;
	cout << "\n";
	for (int i = (int)Temperatura; i < (int)Proceso->Temperatura + 1; i++)
	{
		Temperatura = (float)i;
		cout << "\rCalentando... " << i << " C";
		Generador_Tiempo(1);
	}
	cout << "\n";
}