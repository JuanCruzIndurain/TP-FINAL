#pragma once
#include "cOlla.h"

class cOllaMaceracion : public cOlla
{

public:
	cOllaMaceracion();
	virtual ~cOllaMaceracion();
	virtual void Hacer_Algo();
	void agregar(float agua, float malta);

private:
	string Filtro;
	string Remo;

};
