#pragma once
#include "cLista.h"
#include "cFermentador.h"
#include "cOllaAgua.h"
#include "cOllaMaceracion.h"
#include "cOllaCoccion.h"
#include "cInsumos.h"
#include <iostream>

class cReceta
{

public:
	cReceta();
	virtual ~cReceta();
	cFermentador *Fermentador;
	cOlla *Olla[3];

	void Imprimir_Info() const;

private:
	cListaT<cInsumos> *Insumos;
	float Graduacion_Alcoholica;
	float IBU;
	string Nombre;

};

cListaT<cInsumos> *Insumos = new cListaT<cInsumos>();
//la lleno con la totalidad de los insumos