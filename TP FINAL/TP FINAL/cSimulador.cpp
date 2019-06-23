#include "cSimulador.h"

cSimulador::cSimulador()
{

	Factores_Aprovechamiento = new float* [6];
	for (int i = 0; i < 6; i++)
	{
		Factores_Aprovechamiento[i] = new float[19];
	}

	int k = 0;

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 19; i++)
		{
			Factores_Aprovechamiento[i][j] = FactorA[k];
			k++;
		}
	}

	Recetas = new cListaT<cReceta>();
	cReceta* Porter = new cReceta();
	cExtras* Extra = new cExtras("Agua", (float)34.8, 2, 0, 60);
	Porter->Insumos->AgregarItem(Extra);
	cMalta *Malta = new cMalta("Malta Pale", 5000, 160, 7);
	Porter->Insumos->AgregarItem(Malta);
	Malta = new cMalta("Malta Cristal", 700, 50, 120);
	Porter->Insumos->AgregarItem(Malta);
	Malta = new cMalta("Malta Chocolate", 150, 30, 900);
	Porter->Insumos->AgregarItem(Malta);
	Malta = new cMalta("Malta Negra", 150, 35, 1400);
	Porter->Insumos->AgregarItem(Malta);
	Malta = new cMalta("Malta de Trigo", 300, 40, 5);
	Porter->Insumos->AgregarItem(Malta);
	cLupulos *Lupulo = new cLupulos("Lupulo EK Goldings 60", 36, 15, 5, 60);
	Porter->Insumos->AgregarItem(Lupulo);
	Lupulo = new cLupulos("Lupulo EK Goldings 30", 10, 8, 5, 30);
	Porter->Insumos->AgregarItem(Lupulo);
	Lupulo = new cLupulos("Styrian Goldings", 20, 4, 6, 0);
	Porter->Insumos->AgregarItem(Lupulo);
	Extra = new cExtras("Irish Moss", 5, (float)2.2);
	Porter->Insumos->AgregarItem(Extra);
	Extra = new cExtras("Levadura Fermentis", (float)11.5, (float)4.7);
	cProceso *Proceso = new cProceso(67, 0, 16.5, Calentar_Agua);
	Porter->Procesos->AgregarItem(Proceso);
	Proceso = new cProceso(67, 60, (float)16.5, Maceracion);
	Porter->Procesos->AgregarItem(Proceso);
	Proceso = new cProceso(72, 30, (float)19.8, Maceracion);
	Porter->Procesos->AgregarItem(Proceso);
}

cSimulador::~cSimulador()
{
	if (Recetas != NULL)
	{
		delete Recetas;
	}

	if (Factores_Aprovechamiento != NULL)
	{
		for (int i = 0; i < 6; i++)
		{
			if (Factores_Aprovechamiento[i] != NULL)
			{
				delete Factores_Aprovechamiento[i];
			}
		}

		delete[] Factores_Aprovechamiento;
	}
}

void cSimulador::Simular(string Tipo)
{

}