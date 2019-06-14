#pragma once
#include "cInsumos.h"

class cExtras : public cInsumos
{

public:
	cExtras();
	cExtras(string nombre);
	virtual ~cExtras();

private:
	string Nombre;

};

