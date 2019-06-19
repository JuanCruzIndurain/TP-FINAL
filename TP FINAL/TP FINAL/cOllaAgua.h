#pragma once

#include "cOlla.h"

class cOllaAgua : public cOlla
{
	float Cantidad_Actual;

public:
	cOllaAgua();
	cOllaAgua(const float capacidad, const string material, float Temperatura, float Cantidad_Actual);
	virtual ~cOllaAgua();
	void Hacer_Algo(); //llama a "agregar", controla la temperatura y cambia el atributo temperatura
	void Agregar(float Agua); //agrega agua y cambia la capacidad
	void Calentar(float Temperatura);
};