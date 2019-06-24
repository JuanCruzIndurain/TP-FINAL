#pragma once
#include "Enum.h"
#include "cOlla.h"

class cOllaMaceracion : public cOlla
{
private:
	string Filtro[3] = { "Bolsa de Filtrado","Falso Fondo","Chupapalmer" };
	string Remo = "Remo";
	float Cant_Agua, Cant_Malta, Mosto;
	int cont; //cuenta la cantidad de veces que se llama a Hacer_Algo

public:
	cOllaMaceracion();
	cOllaMaceracion(const float capacidad, const string material, float Temperatura);
	~cOllaMaceracion();
	void Hacer_Algo(cProceso* Proceso, float CantidadAgua);
	float getMosto() { return Mosto; }
	void setCant_Agua(float ca) { Cant_Agua = ca; }
	void setCant_Malta(float cm) { Cant_Malta = cm; }
	void setMosto(float mosto) { Mosto = mosto; }
	void Filtrar(float CantidadAguaLavado);
};