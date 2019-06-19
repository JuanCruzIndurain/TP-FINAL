#pragma once

#include "cInsumos.h"

class cMalta : public cInsumos
{
private:
	const int EBC;

public:
	cMalta();
	cMalta(string nombre, float Cantidad, float Costo, const int ebc);
	virtual ~cMalta();
};