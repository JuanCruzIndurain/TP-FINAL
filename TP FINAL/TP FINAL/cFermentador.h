#pragma once
#include "cProceso.h"
#include <ctime>
#include <iostream>
#include <string>

using namespace	std;

class cFermentador
{
private:
	const float Capacidad;
	float Temperatura;
	float Volumen_Actual;
	string Tipo_De_Enfriamiento;

public:
	cFermentador();
	cFermentador(float cap, float temp, float vol, string tipo);
	~cFermentador();
	void Agregar(float vol);
	void Fermentar(cProceso* Proceso);
	void Generador_Tiempo(int Cantidad);
};

