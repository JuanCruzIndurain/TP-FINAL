#pragma once

#include "cOlla.h"

class cOllaAgua : public cOlla
{
	float Cant_Actual;

public:
	cOllaAgua();
	virtual ~cOllaAgua();
	void Hacer_Algo(); //llama a "agregar", controla la temperatura y cambia el atributo temperatura
	void agregar(float agua); //agrega agua y cambia la capacidad
	void calentar(float temp);
};