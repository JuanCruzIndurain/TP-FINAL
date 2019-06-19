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
private:
	string Nombre;
	cListaT<cInsumos> *Insumos;
	float Tiempos[3];
	int Cantidades[3];
	float Graduacion_Alcoholica;
	float IBU;
	friend class cSimulador;

public:
	cReceta();
	cReceta(string Nombre, float Tiempo0, float Tiempo1, float Tiempo2, int Cantidad0, int Cantidad1, int Cantidad2, float Graduacion_Alcoholica, float IBU, cFermentador* Fermentador, cOlla* Olla_Agua, cOlla* Olla_Maceracion, cOlla* Olla_Coccion);
	virtual ~cReceta();
	cFermentador *Fermentador;
	cOlla *Olla[3];
	string getNombre() const { return Nombre; }
	void Imprimir_Info() const;
};

//cListaT<cInsumos> *Insumos = new cListaT<cInsumos>(); //la lleno con la totalidad de los insumos