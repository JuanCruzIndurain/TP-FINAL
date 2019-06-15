#pragma once

#include "cOlla.h"

class cOllaAgua : public cOlla
{

public:
	cOllaAgua();
	virtual ~cOllaAgua();
	const float getCapacidad();
	const string getMaterial();
	float getTemperatura();
	void Hacer_Algo(); //llama a "agregar", controla la temperatura y cambia el atributo temperatura
	void agregar(float agua) { return; } //agrega agua y cambia la capacidad
};