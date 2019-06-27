#pragma once

#include "cInsumo.h"

class cExtras : public cInsumo
{
private:
	int Tiempo_Hervor;
	int Temperatura;

public:
	cExtras();
	cExtras(string nombre, float Cantidad, float Costo);
	cExtras(string nombre, float Cantidad, float Costo, int Tiempo_Hervor);
	cExtras(string nombre, float Cantidad, float Costo, int tiempo_Hervor, int temperatura);
	~cExtras();
	int getTiempo() const { return Tiempo_Hervor; }
	int getTemperatura() const { return Temperatura; }
	friend ostream& operator<<(ostream &o, const cExtras &E);
	void setTiempo_Hervor(int tiemp_Hervor) { Tiempo_Hervor = tiemp_Hervor; }
};

istream& operator>>(istream &i, cExtras &E);