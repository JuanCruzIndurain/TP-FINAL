#pragma once

#include "cOlla.h"

class cOllaCoccion : public cOlla
{
private:
	string Espumadera = "Espumadera";
	float Contenido_Actual;
	int tiempo = 0;

public:
	cOllaCoccion();
	virtual ~cOllaCoccion();

	void Hacer_Algo(cProceso* Proceso, float CantidadAgua);
	void HervirMosto(float);
	float getContenido() { return Contenido_Actual; }
};