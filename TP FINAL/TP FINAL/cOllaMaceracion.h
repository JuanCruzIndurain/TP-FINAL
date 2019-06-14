#pragma once
#include "cOlla.h"

class cOllaMaceracion : public cOlla
{

public:
	cOllaMaceracion();
	virtual ~cOllaMaceracion();
	void HacerAlgo();
	void agregar(float agua, float malta);

private:
	string Filtro;
	string Remo;

};
