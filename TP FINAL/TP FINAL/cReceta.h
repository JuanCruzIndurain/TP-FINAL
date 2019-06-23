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
#include "cProceso.h"
#include <string>
#include <iostream>

class cReceta
{
private:
	string Nombre;
	cListaT<cInsumo> *Insumos;
	cListaT<cProceso> *Procesos;
	float Graduacion_Alcoholica;
	float IBU;
	friend class cSimulador;

public:
	cReceta();
	cReceta(string Nombre, float Graduacion_Alcoholica, float IBU, cFermentador* Fermentador, cOllaAgua* Olla_Agua, cOllaMaceracion* Olla_Maceracion, cOllaCoccion* Olla_Coccion);
	virtual ~cReceta();
	cFermentador *Fermentador;
	cOlla *Olla[3];
	string getNombre() const { return Nombre; }
	void Imprimir_Info() const;
	void simular();
};