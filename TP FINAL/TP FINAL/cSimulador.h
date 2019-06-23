#pragma once

#include "cReceta.h"
#include <iostream>

using namespace std;

class cSimulador
{
private:
	cListaT<cReceta> *Recetas;
	string Nombres[29] = { "Malta Pale", "Malta Vienna", "Malta Biscuit", "Malta Munich", "Malta Trigo", "Malta Centeno", "Malta Cristal", "Malta Chocolate", "Malta Ambar", "Malta Negra", "Malta Melanoidin", "Malta Pilsen", "Copos de Cebada", "Copos de Avena", "Malta Caramel", "Miel", "Sulfato de Calcio", "Cloruro de Calcio", "Irish Moss", "Lupulo Cascade" , "Lupulo EK Goldings", "Lupulo Styrian Goldings", "Lupulo Target", "Lupulo Warrior", "Lupulo Simcoe", "Lupulo Saaz", "Levadura Safale", "Levadura Fermentis", "Levadura Ale" };


public:
	cSimulador();
	virtual ~cSimulador();
	void Simular(string Tipo);
};