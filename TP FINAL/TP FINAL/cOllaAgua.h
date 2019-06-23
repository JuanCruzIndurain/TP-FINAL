#pragma once

#include "cOlla.h"

class cOllaAgua : public cOlla
{
	float Cantidad_Actual;
	friend void simular();

public:
	cOllaAgua();
	cOllaAgua(const float capacidad, const string material, float Temperatura, float Cantidad_Actual);
	virtual ~cOllaAgua();
	float getCantidad_Actual()const { return Cantidad_Actual; }
	void setCantidad_Actual(float ca) { Cantidad_Actual = ca; }
	void Hacer_Algo(cProceso* Proceso, float); //Controla la temperatura
};