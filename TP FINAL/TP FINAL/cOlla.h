#pragma once

class cOlla
{

public:
	cOlla();
	virtual ~cOlla();

	virtual void HacerAlgo(); //en cada olla lo voy a usar para manejar la temperatura (que cambia progresivamente durante un tiempo) del contenido y llamar al método agregar

protected:
	const float Capacidad;
	const string Material;
	float Tempertatura;
};
