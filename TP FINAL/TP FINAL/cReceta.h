#pragma once

#include "cLista.h"
#include "cFermentador.h"
#include "cOllaAgua.h"
#include "cOllaMaceracion.h"
#include "cOllaCoccion.h"
#include "cMalta.h"
#include "cExtras.h"
#include "cLupulos.h"
#include "Enum.h"
#include <iostream>

class cReceta
{
	cListaT<cInsumos> *Insumos;
	float tiempos[3];
	int cantidades[3];
	float Graduacion_Alcoholica;
	float IBU;
	string Nombre;
	friend class cSimulador;

public:
	cReceta();
	virtual ~cReceta();
	cFermentador *Fermentador;
	cOlla *Olla[3];
	string getNombre() const { return Nombre; }
	void Imprimir_Info() const;


};

//cListaT<cInsumos> *Insumos = new cListaT<cInsumos>(); //la lleno con la totalidad de los insumos