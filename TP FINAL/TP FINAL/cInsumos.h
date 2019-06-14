#pragma once
#include <string>
using namespace std;
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
