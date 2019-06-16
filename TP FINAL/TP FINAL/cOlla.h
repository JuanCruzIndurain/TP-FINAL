#pragma once

#include <string>
using namespace std;

class cOlla
{

public:
	cOlla();
	cOlla(const float Cap, const string Mat, float temp) :Capacidad(Cap), Material(Mat) { Tempertatura = temp; }
	virtual ~cOlla();
	float getCapacidad() const { return Capacidad; }
	string getMaterial() const { return Material; }
	float getTemperatura() const { return Tempertatura; }
	virtual void Hacer_Algo(); //en cada olla lo voy a usar para manejar la temperatura (que cambia progresivamente durante un tiempo) del contenido y llamar al método agregar

protected:
	const float Capacidad;
	const string Material;
	float Tempertatura;
};