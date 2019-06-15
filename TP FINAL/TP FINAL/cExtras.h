#pragma once

#include "cInsumos.h"

class cExtras : public cInsumos
{

public:
	cExtras();
	cExtras(string nombre);
	virtual ~cExtras();
	string get_Extra() { return Nombre; }

private:
	string Nombre;

};