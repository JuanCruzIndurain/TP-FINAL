#pragma once
#include "cInsumo.h"

class cProceso 
{
	const int Tipo;
	const float Temperatura;
	const float Tiempo;
	const float Cant_Usada; //La cantidad de insumo utilizada en el proceso
	static int ID;
	const int IDotro;
	cInsumo* Insumo;
	friend class cReceta;
	friend class cOllaAgua;
	friend class cOllaMaceracion;
	friend class cOllaCoccion;
	friend class cFermentador;

public:
	cProceso(float cant_usada = 0, float temp = 0, float tiempo = 0, int tipo = 0, cInsumo * insumo = NULL) :Temperatura(temp), Tiempo(tiempo), Tipo(tipo), Cant_Usada(cant_usada), IDotro(ID)
	{
		Insumo = insumo;
		ID++;
	}
	~cProceso() {}
	string getNombre()const { return to_string(IDotro); }
};

int cProceso::ID = 0;