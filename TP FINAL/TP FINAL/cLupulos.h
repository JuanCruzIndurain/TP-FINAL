#pragma once

#include "cInsumo.h"

class cLupulos : public cInsumo
{
private:
	const float Alfa_Acidos;
	const int Tiempo_Hervor;

public:
	cLupulos();
	cLupulos(string nombre, float Cantidad, float Costo, const float AlfaAcidos, int TiempoHervor);
	~cLupulos();

	int getTiempoHervor()const { return Tiempo_Hervor; }
	float getAlfaAcidos()const { return Alfa_Acidos; }
};