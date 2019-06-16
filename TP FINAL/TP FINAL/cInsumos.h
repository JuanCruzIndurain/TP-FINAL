#pragma once
#include <string>
using namespace std;

class cInsumos
{

public:
	cInsumos();
	cInsumos(string nom);
	virtual ~cInsumos();
	float getCant() { return Cantidad; }
	float getCost() { return Costo; }
	string getNombre() const { return Nombre; }

protected:
	float Cantidad;
	float Costo;
	const string Nombre;

};