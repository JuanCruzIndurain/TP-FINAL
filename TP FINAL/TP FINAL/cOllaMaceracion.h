#pragma once

#include "cOlla.h"

class cOllaMaceracion : public cOlla
{

public:
	cOllaMaceracion();
	virtual ~cOllaMaceracion();
	void Hacer_Algo();
	void agregar(float agua, float malta) { return; }

private:
	string Filtro;
	string Remo;

};