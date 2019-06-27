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

	Recetas = new cListaT<cReceta>(2);

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
	Proceso = new cProceso(Porter->Insumos->BuscarItem("Malta de Trigo")->getCantidad(), 67, 91, Maceracion, Porter->Insumos->BuscarItem("Malta de Trigo"));
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

	//HONEY
	cReceta* Honey = new cReceta(NOONAN, Factores_Aprovechamiento, 1.014, 1.058, "Honey");
	Extra = new cExtras("Agua", (float)40.3, 3, 0, TA);
	Honey->Insumos->AgregarItem(Extra);
	Malta = new cMalta("Malta Pilsen", 4000, 170, 3);
	Honey->Insumos->AgregarItem(Malta);
	Malta = new cMalta("Malta Caramelo 30", 200, 70, 30);
	Honey->Insumos->AgregarItem(Malta);
	Malta = new cMalta("Malta Biscuit", 200, 80, 40);
	Honey->Insumos->AgregarItem(Malta);
	Extra = new cExtras("Miel Pura", 1000, 15, 0, TA);
	Honey->Insumos->AgregarItem(Extra);
	Lupulo = new cLupulos("Lupulo Amargor Cascade 60", 20, 60, 15, 60);
	Honey->Insumos->AgregarItem(Lupulo);
	Extra = new cExtras("Levadura Ale Seca", 11, 20, 0, TA);
	Honey->Insumos->AgregarItem(Extra);
	Extra = new cExtras("Clarificante de hervido", 4, 6, 0, TA);
	Honey->Insumos->AgregarItem(Extra);
	Extra = new cExtras("Clarificante de madurado", 2, 4, 0, TA);
	Honey->Insumos->AgregarItem(Extra);
	Extra = new cExtras("Botella", 20, 10);
	Honey->Insumos->AgregarItem(Extra);
	Proceso = new cProceso(25, 65, 0, Calentar_Agua, Honey->Insumos->BuscarItem("Agua"));
	Honey->Procesos->AgregarItem(Proceso);
	Proceso = new cProceso(Honey->Insumos->BuscarItem("Malta Pilsen")->getCantidad(), 65, 0, Maceracion, Honey->Insumos->BuscarItem("Malta Pilsen"));
	Honey->Procesos->AgregarItem(Proceso);
	Proceso = new cProceso(Honey->Insumos->BuscarItem("Malta Caramelo 30")->getCantidad(), 65, 0, Maceracion, Honey->Insumos->BuscarItem("Malta Caramelo 30"));
	Honey->Procesos->AgregarItem(Proceso);
	Proceso = new cProceso(Honey->Insumos->BuscarItem("Malta Biscuit")->getCantidad(), 65, 91, Maceracion, Honey->Insumos->BuscarItem("Malta Biscuit"));
	Honey->Procesos->AgregarItem(Proceso);
	Proceso = new cProceso(10, 75, 15, Lavado, Honey->Insumos->BuscarItem("Agua"));
	Honey->Procesos->AgregarItem(Proceso);
	Proceso = new cProceso(Honey->Insumos->BuscarItem("Miel Pura")->getCantidad(), 100, 60, Coccion, Honey->Insumos->BuscarItem("Miel Pura"));
	Honey->Procesos->AgregarItem(Proceso);
	Proceso = new cProceso(Honey->Insumos->BuscarItem("Lupulo Amargor Cascade 60")->getCantidad(), 100, 60, Coccion, Honey->Insumos->BuscarItem("Lupulo Amargor Cascade 60"));
	Honey->Procesos->AgregarItem(Proceso);
	Proceso = new cProceso(Honey->Insumos->BuscarItem("Clarificante de hervido")->getCantidad(), 100, 10, Coccion, Honey->Insumos->BuscarItem("Clarificante de hervido"));
	Honey->Procesos->AgregarItem(Proceso);
	Proceso = new cProceso(Honey->Insumos->BuscarItem("Levadura Ale Seca")->getCantidad(), 21, 12, Fermentacion, Honey->Insumos->BuscarItem("Levadura Ale Seca"));
	Honey->Procesos->AgregarItem(Proceso);
	Proceso = new cProceso(Honey->Insumos->BuscarItem("Clarificante de madurado")->getCantidad(), 21, 12, Fermentacion, Honey->Insumos->BuscarItem("Clarificante de madurado"));
	Honey->Procesos->AgregarItem(Proceso);
	Proceso = new cProceso(0, TA, 0, Embotellado, Honey->Insumos->BuscarItem("Botella"));
	Honey->Procesos->AgregarItem(Proceso);
	Recetas->AgregarItem(Honey);
	
	// IRISH RED
	cReceta* Irish_Red_Ale = new cReceta(GARETZ, Factores_Aprovechamiento, 1.016, 1.055, "Irish Red");
	Extra = new cExtras("Agua", (float)35, 5, 0, TA);
	Irish_Red_Ale->Insumos->AgregarItem(Extra);
	Malta = new cMalta("Malta Pale", 4.250, 80, 6);
	Irish_Red_Ale->Insumos->AgregarItem(Malta);
	Malta = new cMalta("Carared", 400, 150, 60);
	Irish_Red_Ale->Insumos->AgregarItem(Malta);
	Malta = new cMalta("Copos de cebada", 150, 60, 3);
	Irish_Red_Ale->Insumos->AgregarItem(Malta);
	Malta = new cMalta("Malta Ambar", 150, 75, 50);
	Irish_Red_Ale->Insumos->AgregarItem(Malta);
	Malta = new cMalta("Malta Black", 60, 150, 1400);
	Irish_Red_Ale->Insumos->AgregarItem(Malta);
	Lupulo = new cLupulos("Lupulo East Kent Goldings", 35, 15, 7, 60);
	Irish_Red_Ale->Insumos->AgregarItem(Lupulo);
	Extra = new cExtras("Levadura SafAle S-04", 11, (float)2.2, 0);
	Irish_Red_Ale->Insumos->AgregarItem(Extra);
	Proceso = new cProceso(15, 67, 0, Calentar_Agua, Irish_Red_Ale->Insumos->BuscarItem("Agua"));
	Irish_Red_Ale->Procesos->AgregarItem(Proceso);
	Proceso = new cProceso(Irish_Red_Ale->Insumos->BuscarItem("Malta Pale")->getCantidad(), 67, 0, Maceracion, Irish_Red_Ale->Insumos->BuscarItem("Malta Pale"));
	Irish_Red_Ale->Procesos->AgregarItem(Proceso);
	Proceso = new cProceso(Irish_Red_Ale->Insumos->BuscarItem("Carared")->getCantidad(), 67, 0, Maceracion, Irish_Red_Ale->Insumos->BuscarItem("Carared"));
	Irish_Red_Ale->Procesos->AgregarItem(Proceso);
	Proceso = new cProceso(Irish_Red_Ale->Insumos->BuscarItem("Copos de cebada")->getCantidad(), 67, 0, Maceracion, Irish_Red_Ale->Insumos->BuscarItem("Copos de cebada"));
	Irish_Red_Ale->Procesos->AgregarItem(Proceso);
	Proceso = new cProceso(Irish_Red_Ale->Insumos->BuscarItem("Malta Ambar")->getCantidad(), 67, 0, Maceracion, Irish_Red_Ale->Insumos->BuscarItem("Malta Ambar"));
	Irish_Red_Ale->Procesos->AgregarItem(Proceso);
	Proceso = new cProceso(Irish_Red_Ale->Insumos->BuscarItem("Malta Black")->getCantidad(), 67, 91, Maceracion, Irish_Red_Ale->Insumos->BuscarItem("Malta Black"));
	Irish_Red_Ale->Procesos->AgregarItem(Proceso);
	Proceso = new cProceso(15, 67, 15, Lavado, Irish_Red_Ale->Insumos->BuscarItem("Agua"));
	Irish_Red_Ale->Procesos->AgregarItem(Proceso);
	Proceso = new cProceso(Irish_Red_Ale->Insumos->BuscarItem("Lupulo East Kent Goldings")->getCantidad(), 100, 60, Coccion, Irish_Red_Ale->Insumos->BuscarItem("Lupulo East Kent Goldings"));
	Irish_Red_Ale->Procesos->AgregarItem(Proceso);
	Proceso = new cProceso(Irish_Red_Ale->Insumos->BuscarItem("Levadura SafAle S-04")->getCantidad(), 25, 15, Fermentacion, Irish_Red_Ale->Insumos->BuscarItem("Levadura SafAle S-04"));
	Irish_Red_Ale->Procesos->AgregarItem(Proceso);
	Extra = new cExtras("Botella", 20, 10);
	Irish_Red_Ale->Insumos->AgregarItem(Extra);
	Proceso = new cProceso(0, TA, 0, Embotellado, Irish_Red_Ale->Insumos->BuscarItem("Botella"));
	Irish_Red_Ale->Procesos->AgregarItem(Proceso);
	Recetas->AgregarItem(Irish_Red_Ale);
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