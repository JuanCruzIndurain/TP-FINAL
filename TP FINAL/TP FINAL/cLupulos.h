#pragma once

#include "cInsumos.h"

class cLupulos : public cInsumos
{
	const float Alfa_Acidos;
	const int Tiempo_Hervor;

public:
	cLupulos();
	cLupulos(string nombre, int cant, int cost, const float AA, int tiempo) :Alfa_Acidos(AA), Tiempo_Hervor(tiempo) {}
	virtual ~cLupulos();

};