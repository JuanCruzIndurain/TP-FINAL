#pragma once
#include "cReceta.h"
#include <iostream>

class cSimulador
{
	cListaT<cReceta> *recetas;

public:
	cSimulador();
	virtual ~cSimulador();

	void Generador_Tiempo(int Cantidad);
	void Simular(int tipo);

};
