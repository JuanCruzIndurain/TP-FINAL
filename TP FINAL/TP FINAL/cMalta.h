#pragma once

#include "cInsumo.h"

class cMalta : public cInsumo
{
private:
	const int EBC;

public:
	cMalta();
	cMalta(string nombre, float Cantidad, float Costo, const int ebc);
	virtual ~cMalta();
};