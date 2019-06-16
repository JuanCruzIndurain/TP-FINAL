#pragma once
#include "cInsumos.h"

class cExtras : public cInsumos
{
	int Tiempo_Hervor;
	int Temperatura;

public:
	cExtras();
	cExtras(string nombre, float cant, float cost, int tiempo, int temperatura);
	cExtras(string nombre, float cant, float cost);
	int getTiempo()const { return Tiempo_Hervor; }
	int getTemp()const { return Temperatura; }
	virtual ~cExtras();

};