#include "cSimulador.h"

cSimulador::cSimulador()
{
	Recetas = new cListaT<cReceta>(5);
	cReceta *Porter = new cReceta();
	cExtras* Extra = new cExtras("Agua", 34.8, 2, 0, 60);
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
	Extra = new cExtras("Irish Moss", 5, 2.2);
	Porter->Insumos->AgregarItem(Extra);
	Extra = new cExtras("Levadura Fermentis", 11.5, 4.7);
}

cSimulador::~cSimulador()
{
	if (Recetas != NULL)
	{
		delete Recetas;
	}
}

void cSimulador::Generador_Tiempo(int Cantidad)//simula el tiempo en segundos
{
	double Duracion;
	clock_t comienzo = clock();
	Duracion = ((double)clock() - comienzo) / (double)CLOCKS_PER_SEC;

	while (Cantidad > Duracion)
	{
		Duracion = ((double)clock() - comienzo) / (double)CLOCKS_PER_SEC;
	}
}

void cSimulador::Simular(string Tipo)
{
	cReceta *Cerveza = Recetas->BuscarItem(Tipo);

	if (Cerveza == NULL)
	{
		throw new exception("No se encuentra la receta pedida");
	}

	cOlla *OllaAgua = new cOlla();	//en la olla de agua se agrega una cierta cantidad de agua y se calienta hasta 70°C
	cOlla *OllaMaceracion = new cOlla(); //en la olla de maceracion pongo malta y agrego el agua calentada previamente (se deja macerar 1.5hr)
	cOlla *Olla_Lupulos = new cOlla();

	cOllaAgua *Olla_Agua = dynamic_cast<cOllaAgua*>(OllaAgua);

	if (Olla_Agua != NULL)
	{
		cInsumos *agua = Cerveza->Insumos->BuscarItem("Agua");
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
}