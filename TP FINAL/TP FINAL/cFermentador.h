 #pragma once

#include <string>
using namespace	std;

class cFermentador
{

public:
	cFermentador();
	virtual ~cFermentador();

private:
	const float Capacidad;
	float Temperatura;
	string Tipo_De_Enfriamiento;
	float Volumen_Actual;

};