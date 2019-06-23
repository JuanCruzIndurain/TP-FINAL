#pragma once
#include "Enum.h"
#include "cOlla.h"

class cOllaMaceracion : public cOlla
{
private:
	string Filtro[3] = { "Bolsa de Filtrado","Falso Fondo","Chupapalmer" };
	string Remo = "Remo";
	float Cant_Agua, Cant_Malta;

public:
	cOllaMaceracion();
	~cOllaMaceracion();
	float Hacer_Algo(cProceso* Proceso, float);
	float Filtrar(float CantidadAguaLavado);
};