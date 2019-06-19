#pragma once

#include "cInsumos.h"

class cLupulos : public cInsumos
{
private:
	const float Alfa_Acidos;
	const int Tiempo_Hervor;

public:
	cLupulos();
	cLupulos(string nombre, float Cantidad, float Costo, const float AlfaAcidos, int TiempoHervor);
	virtual ~cLupulos();
};