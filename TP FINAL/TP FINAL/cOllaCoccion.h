#pragma once

#include "cOlla.h"

class cOllaCoccion : public cOlla
{
private:
	string Espumadera;

public:
	cOllaCoccion();
	virtual ~cOllaCoccion();

	void Hacer_Algo();
};