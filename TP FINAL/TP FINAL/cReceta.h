#pragma once

#include "cLista.h"
#include "cFermentador.h"
#include "cOllaAgua.h"
#include "cOllaMaceracion.h"
#include "cOllaCoccion.h"
#include "cInsumos.h"
#include "Enum.h"
#include <iostream>

class cReceta
{

public:
	cReceta();
	virtual ~cReceta();
	cFermentador *Fermentador;
	cOlla *Olla[3];
	string getNombre() const { return Nombre; }
	int getCantMaltas() { return cant_maltas; }
	int getCantLupulos() { return cant_lupulos; }
	int getCantExtras() { return cant_extras; }
	void Imprimir_Info() const;

private:
	cListaT<cInsumos> *Insumos;
	int cant_maltas, cant_lupulos, cant_extras;
	float Graduacion_Alcoholica;
	float IBU;
	string Nombre;

};

//cListaT<cInsumos> *Insumos = new cListaT<cInsumos>(); //la lleno con la totalidad de los insumos