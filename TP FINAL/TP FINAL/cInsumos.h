#pragma once
#include <string>
class cInsumos
{

public:
	cInsumos();
	virtual ~cInsumos();

protected:
	int Cantidad;
	float Costo;
	const string Nombre;

};
