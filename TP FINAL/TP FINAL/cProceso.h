#pragma once
#include "cInsumo.h"

class cProceso 
{
	const int Tipo;
	const float Temperatura;
	const float Tiempo;
	const float Cant_Usada; //La cantidad de insumo utilizada en el proceso
	cInsumo* Insumo;
	friend class cReceta;
	friend class cOllaAgua;
	friend class cOllaMaceracion;
	friend class cOllaCoccion;

public:
	cProceso(float cant_usada = 0, float temp = 0, float tiempo = 0, float agua = 0, int tipo = 0, string nombre = "", float Cantidad = 0, float Costo = 0) :Temperatura(temp), Tiempo(tiempo), Tipo(tipo), Cant_Usada(cant_usada) { Insumo = new cInsumo(nombre, Cantidad, Costo); }
	~cProceso() { delete Insumo; }
	string getNombre() { return ""; }
};