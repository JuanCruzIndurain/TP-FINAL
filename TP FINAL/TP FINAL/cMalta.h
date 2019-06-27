#pragma once

#include "cInsumo.h"

class cMalta : public cInsumo
{
private:
	int EBC;

public:
	cMalta();
	cMalta(string nombre, float Cantidad, float Costo, const int ebc);
	~cMalta();
	friend ostream& operator<<(ostream &o, const cMalta &E);
	void setEBC(int ebc) { EBC = ebc; }
};

istream& operator>>(istream &i, cMalta &E);