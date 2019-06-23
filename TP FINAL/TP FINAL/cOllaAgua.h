#pragma once

#include "cOlla.h"

class cOllaAgua : public cOlla
{
	float Cantidad_Actual;

public:
	cOllaAgua();
	cOllaAgua(const float capacidad, const string material, float Temperatura, float Cantidad_Actual);
	virtual ~cOllaAgua();
	float Hacer_Algo(cProceso* Proceso, float); //llama a "agregar", controla la temperatura y cambia el atributo temperatura
};