#pragma once
#include "cLista.h"
#include "cFermentador.h"
#include "cOllaAgua.h"
#include "cOllaMaceracion.h"
#include "cOllaCoccion.h"
#include "cInsumos.h"

class cReceta
{

public:
	cReceta();
	virtual ~cReceta();
	cFermentador *fermentador;
	cOlla *olla[3];
	cListaT<cInsumos> *insumos;
	const void Imprimir_Info();

private:
	float Graduacion_Alcoholica;
	float IBU;
	string Nombre;

};
