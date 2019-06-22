#pragma once

#include "cInsumo.h"

class cExtras : public cInsumo
{
private:
	int Tiempo_Hervor;
	int Temperatura;

public:
	cExtras();
	cExtras(string nombre, float Cantidad, float Costo);
	cExtras(string nombre, float Cantidad, float Costo, int Tiempo_Hervor, int Temperatura);
	int getTiempo() const { return Tiempo_Hervor; }
	int getTemperatura() const { return Temperatura; }
	virtual ~cExtras();
};