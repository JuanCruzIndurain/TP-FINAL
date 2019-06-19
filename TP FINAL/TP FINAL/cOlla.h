#pragma once

#include <string>

using namespace std;

class cOlla
{
protected:
	const float Capacidad;
	const string Material;
	float Tempertatura;

public:
	cOlla();
	cOlla(const float capacidad, const string material, float Temperatura);
	virtual ~cOlla();
	float getCapacidad() const { return Capacidad; }
	string getMaterial() const { return Material; }
	float getTemperatura() const { return Tempertatura; }
	virtual void Hacer_Algo(); //en cada olla lo voy a usar para manejar la temperatura (que cambia progresivamente durante un tiempo) del contenido y llamar al método agregar
};