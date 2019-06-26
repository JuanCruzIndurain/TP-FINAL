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
		for (int j = 0; j < 19; j++)
		{
			Factores_Aprovechamiento[i][j] = FactorA[k];
			k++;
		}
	}

	Recetas = new cListaT<cReceta>(1);

	//PORTER
	cReceta* Porter = new cReceta(DANIELS, Factores_Aprovechamiento, 1.011, 1.054, "Porter");
	cExtras* Extra = new cExtras("Agua", (float)34.8, 2, 0, TA);
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
	Extra = new cExtras("Irish Moss", 5, (float)2.2,15);
	Porter->Insumos->AgregarItem(Extra);
	Extra = new cExtras("Levadura Fermentis", (float)11.5, (float)4.7);
	Porter->Insumos->AgregarItem(Extra);
	Extra = new cExtras("Botella", 22, 10);
	Porter->Insumos->AgregarItem(Extra);
	cProceso* Proceso = new cProceso(16.5, 67, 0, Calentar_Agua, Porter->Insumos->BuscarItem("Agua"));
	Porter->Procesos->AgregarItem(Proceso);
	Proceso = new cProceso(Porter->Insumos->BuscarItem("Malta Pale")->getCantidad(), 67, 0, Maceracion, Porter->Insumos->BuscarItem("Malta Pale"));
	Porter->Procesos->AgregarItem(Proceso);
	Proceso = new cProceso(Porter->Insumos->BuscarItem("Malta Cristal")->getCantidad(), 67, 0, Maceracion, Porter->Insumos->BuscarItem("Malta Cristal"));
	Porter->Procesos->AgregarItem(Proceso);
	Proceso = new cProceso(Porter->Insumos->BuscarItem("Malta Chocolate")->getCantidad(), 67, 0, Maceracion, Porter->Insumos->BuscarItem("Malta Chocolate"));
	Porter->Procesos->AgregarItem(Proceso);
	Proceso = new cProceso(Porter->Insumos->BuscarItem("Malta Negra")->getCantidad(), 67, 0, Maceracion, Porter->Insumos->BuscarItem("Malta Negra"));
	Porter->Procesos->AgregarItem(Proceso);
	Proceso = new cProceso(Porter->Insumos->BuscarItem("Malta de Trigo")->getCantidad(), 67, 90, Maceracion, Porter->Insumos->BuscarItem("Malta de Trigo"));
	Porter->Procesos->AgregarItem(Proceso);
	Proceso = new cProceso(15, 77, 15, Lavado, Porter->Insumos->BuscarItem("Agua"));
	Porter->Procesos->AgregarItem(Proceso);
	Proceso = new cProceso(Porter->Insumos->BuscarItem("Lupulo EK Goldings 60")->getCantidad(), 100, 30, Coccion, Porter->Insumos->BuscarItem("Lupulo EK Goldings 60"));
	Porter->Procesos->AgregarItem(Proceso);
	Proceso = new cProceso(Porter->Insumos->BuscarItem("Lupulo EK Goldings 30")->getCantidad(), 100, 15, Coccion, Porter->Insumos->BuscarItem("Lupulo EK Goldings 30"));
	Porter->Procesos->AgregarItem(Proceso);
	Proceso = new cProceso(Porter->Insumos->BuscarItem("Irish Moss")->getCantidad(), 100, 15, Coccion, Porter->Insumos->BuscarItem("Irish Moss"));
	Porter->Procesos->AgregarItem(Proceso);
	Proceso = new cProceso(Porter->Insumos->BuscarItem("Styrian Goldings")->getCantidad(), 100, 0, Coccion, Porter->Insumos->BuscarItem("Styrian Goldings"));
	Porter->Procesos->AgregarItem(Proceso);
	Proceso = new cProceso(Porter->Insumos->BuscarItem("Levadura Fermentis")->getCantidad(), 20, 15, Fermentacion, Porter->Insumos->BuscarItem("Levadura Fermentis"));
	Porter->Procesos->AgregarItem(Proceso);
	Proceso = new cProceso(0, TA, 0, Embotellado, Porter->Insumos->BuscarItem("Botella"));
	Porter->Procesos->AgregarItem(Proceso);
	Recetas->AgregarItem(Porter);
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
	Recetas->BuscarItem(Tipo)->simular();
}