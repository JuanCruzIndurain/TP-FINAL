#pragma once

#include <string>

using namespace std;

class cInsumos
{
protected:
	float Cantidad;
	float Costo;
	const string Nombre;

public:
	cInsumos();
	cInsumos(string nombre, float Cantidad, float Costo);
	virtual ~cInsumos();
	float getCantidad() const { return Cantidad; }
	float getCosto() const { return Costo; }
	string getNombre() const { return Nombre; }
};