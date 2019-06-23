#pragma once
#include <string>
#include <ctime>
#include <iostream>
#include "ExcesoCapacidad.h"
#include "cProceso.h"
#define TA 23  //Temperatura ambiente

using namespace std;

class cOlla
{
protected:
	const float Capacidad;
	const string Material;
	float Temperatura; //Dato arrojado por el sensor de temperatura

public:
	cOlla();
	cOlla(const float capacidad, const string material, float Temperatura = TA);
	virtual ~cOlla();
	float getCapacidad() const { return Capacidad; }
	string getMaterial() const { return Material; }
	float getTemperatura() const { return Temperatura; }
	virtual void Hacer_Algo(cProceso* Proceso, float) = 0; //en cada olla lo voy a usar para manejar la temperatura (que cambia progresivamente durante un tiempo) del contenido y llamar al método agregar

};


void Generador_Tiempo(int Cantidad)
{
	double Duracion;
	clock_t comienzo = clock();
	Duracion = ((double)clock() - comienzo) / (double)CLOCKS_PER_SEC;

	while (Cantidad > Duracion)
	{
		Duracion = ((double)clock() - comienzo) / (double)CLOCKS_PER_SEC;
	}
}