#pragma once

#include <string>

using namespace std;

class cInsumo
{
protected:
	float Cantidad;
	float Costo;
	const string Nombre;

public:
	cInsumo();
	cInsumo(string nombre, float Cantidad, float Costo);
	~cInsumo();
	float getCantidad() const { return Cantidad; }
	float getCosto() const { return Costo; }
	string getNombre() const { return Nombre; }
	virtual int getTiempoHervor()const { return 0; }
};