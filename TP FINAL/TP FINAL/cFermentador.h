 #pragma once

#include <string>

using namespace	std;

class cFermentador
{
private:
	const float Capacidad;
	float Temperatura;
	float Volumen_Actual;
	string Tipo_De_Enfriamiento;

public:
	cFermentador();
	virtual ~cFermentador();
};