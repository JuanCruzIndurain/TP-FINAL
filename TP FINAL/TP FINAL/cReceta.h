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
	float Densidad_Final, Original_Gravity, Graduacion_Alcoholica, IBU;
	cFermentador* Fermentador;
	cOlla* Olla[3];
	float** FA;
	friend class cSimulador;
	int Metodo_Calculo;
	string Tipos_Enfriamiento[3];

public:
	cReceta();
	cReceta(int Metodo_Calculo, float **fa, float densidad_final, float original_gravity, string Nombre);
	virtual ~cReceta();
	string getNombre() const { return Nombre; }
	void Imprimir_Info() const;
	void simular();
};