#pragma once

#include "cReceta.h"
#include <ctime>
#include <iostream>

class cSimulador
{
	cListaT<cReceta> *Recetas;

public:
	cSimulador();
	virtual ~cSimulador();

	void Generador_Tiempo(int Cantidad);
	void Simular(int Tipo);
};