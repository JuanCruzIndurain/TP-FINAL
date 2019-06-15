#pragma once

#include "cOlla.h"

class cOllaCoccion : public cOlla
{

public:
	cOllaCoccion();
	virtual ~cOllaCoccion();

	void Hacer_Algo();

private:
	string Espumadera;
};