#pragma once

#include "cOlla.h"

class cOllaMaceracion : public cOlla
{
private:
	string Filtro;
	string Remo;

public:
	cOllaMaceracion();
	virtual ~cOllaMaceracion();
	void Agregar(float Agua, float Malta);
	void Hacer_Algo(float agua, float malta, float mosto, float temperatura);
};