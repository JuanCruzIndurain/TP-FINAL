#include "cSimulador.h"

cSimulador::cSimulador()
{
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
}

void cSimulador::Simular(string Tipo)
{
	/*	cReceta *Cerveza = Recetas->BuscarItem(Tipo);

	if (Cerveza == NULL)
	{
		throw new exception("No se encuentra la receta pedida");
	}



	if (Olla_Agua != NULL)
	{
		cInsumo *agua = Cerveza->Insumos->BuscarItem("Agua");
		cExtras *Agua = dynamic_cast<cExtras*>(agua);
		Olla_Agua->Agregar(Agua->getCantidad()); //cargo agua a la olla, la cantidad podría variar tmb dependiendo de la cantidad de cerveza pedida, por ahora queda constante
		Olla_Agua->Calentar(Agua->getTemperatura()); //caliento el agua a 70°C
		Olla_Agua->Hacer_Algo(); // cambio la temperatura del agua
		//aca hay que imprimir el estado del proceso y la temperatura del agua
	}
	else
	{
		throw new exception("Error al generar olla de agua");
	}

	cOllaMaceracion *Olla_Maceracion = dynamic_cast<cOllaMaceracion*>(OllaMaceracion);

	if (Olla_Maceracion != NULL)
	{
		cMalta *Aux;

		for (int i = 1; i < Cerveza->Cantidades[Maceracion] + 1; i++)
		{
			Aux = dynamic_cast<cMalta*>(Cerveza->Insumos->getItem(i));
			Olla_Maceracion->Agregar(Aux->getCantidad(), 50); //los parametros son cantidad de malta y de agua respectivamente, en realidad va a variar en funcion de la receta y no va a ser un valor fijo
			Olla_Maceracion->Hacer_Algo();     //aca se simula los cambios de temperatura
		}
		//aca hay que imprimir el estado del proceso y la temperatura de la mezcla
	}
	else
	{
		throw new exception("Error al generar olla de maceracion");
	}
	//DESPUES SIGUE LA COCCION DE MODO SIMILAR A LA MACERACION, AGREGANDO EXTRAS EN VEZ DE LUPULOS
	//FINALMENTE SE SIMULA EL TIEMPO DE FERMENTACION Y SE IMPRIME EL ESTADO DEL PROCESO Y AL FINAL SE PRESENTAN TODOS LOS DATOS REQUERIDOS
*/}