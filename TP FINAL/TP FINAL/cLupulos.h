#pragma once

#include "cInsumo.h"

class cLupulos : public cInsumo
{
private:
	const float Alfa_Acidos;
	int Tiempo_Hervor;

public:
	cLupulos();
	cLupulos(string nombre, float Cantidad, float Costo, const float AlfaAcidos, int TiempoHervor);
	~cLupulos();
	void setTiempo_Hervor(int tiemp_Hervor) { Tiempo_Hervor = tiemp_Hervor; }

	int getTiempoHervor()const { return Tiempo_Hervor; }
	float getAlfaAcidos()const { return Alfa_Acidos; }
	friend ostream& operator<<(ostream &o, const cLupulos &E);
};
istream& operator>>(istream &i, cLupulos &E);