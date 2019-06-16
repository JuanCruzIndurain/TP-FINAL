#include "cSimulador.h"

cSimulador::cSimulador() {
	Recetas = new cListaT<cReceta>(5);
	cReceta *porter = new cReceta();
	cExtras *extra = new cExtras("Agua", 34.8, 2, 0, 60);
	porter->Insumos->AgregarItem(extra);
	cMalta *malta = new cMalta("Malta Pale", 5000, 160, 7);
	porter->Insumos->AgregarItem(malta);
	malta = new cMalta("Malta Cristal", 700, 50, 120);
	porter->Insumos->AgregarItem(malta);
	malta = new cMalta("Malta Chocolate", 150, 30, 900);
	porter->Insumos->AgregarItem(malta);
	malta = new cMalta("Malta Negra", 150, 35, 1400);
	porter->Insumos->AgregarItem(malta);
	malta = new cMalta("Malta de Trigo", 300, 40, 5);
	porter->Insumos->AgregarItem(malta);
	cLupulos *lupulo = new cLupulos("Lupulo EK Goldings 60", 36, 15, 5, 60);
	porter->Insumos->AgregarItem(lupulo);
	lupulo = new cLupulos("Lupulo EK Goldings 30", 10, 8, 5, 30);
	porter->Insumos->AgregarItem(lupulo);
	lupulo = new cLupulos("Styrian Goldings", 20, 4, 6, 0);
	porter->Insumos->AgregarItem(lupulo);
	extra = new cExtras("Irish Moss", 5, 2.2);
	porter->Insumos->AgregarItem(extra);
	extra = new cExtras("Levadura Fermentis", 11.5, 4.7);
}

cSimulador::~cSimulador() {

}

void cSimulador::Generador_Tiempo(int Cantidad)//simula el tiempo en segundos
{
	double duracion;
	clock_t comienzo = clock();
	duracion = ((double)clock() - comienzo) / (double)CLOCKS_PER_SEC;

	while (Cantidad > duracion) {
		duracion = ((double)clock() - comienzo) / (double)CLOCKS_PER_SEC;
	}
}

void cSimulador::Simular(string Tipo) {
	cReceta *Cerveza = Recetas->BuscarItem(Tipo);
	if (Cerveza == NULL)throw new exception("No se encuentra la receta pedida");
	cOlla *ollaagua = new cOlla();	//en la olla de agua se agrega una cierta cantidad de agua y se calienta hasta 70°C
	cOlla *ollamaceracion = new cOlla(); //en la olla de maceracion pongo malta y agrego el agua calentada previamente (se deja macerar 1.5hr)
	cOlla *ollalupulos = new cOlla();
	cOllaAgua *olla_agua = dynamic_cast<cOllaAgua*>(ollaagua);
	if (olla_agua != NULL) {
		cInsumos *agua = Cerveza->Insumos->BuscarItem("Agua");
		cExtras *agua0 = dynamic_cast<cExtras*>(agua);
		olla_agua->agregar(agua0->getCant()); //cargo agua a la olla, la cantidad podría variar tmb dependiendo de la cantidad de cerveza pedida, por ahora queda constante
		olla_agua->calentar(agua0->getTemp()); //caliento el agua a 70°C
		olla_agua->Hacer_Algo(); // cambio la temperatura del agua
		//aca hay que imprimir el estado del proceso y la temperatura del agua
	}
	else { throw new exception("Error al generar olla de agua"); }
	cOllaMaceracion *olla_maceracion = dynamic_cast<cOllaMaceracion*>(ollamaceracion);
	if (olla_maceracion != NULL) {
		cMalta *aux;
		for (int i = 1; Cerveza->cantidades[Maceracion] + 1; i++)
		{
			aux = dynamic_cast<cMalta*>(Cerveza->Insumos->getItem(i));
			olla_maceracion->agregar(aux->getCant(), 50); //los parametros son cantidad de malta y de agua respectivamente, en realidad va a variar en funcion de la receta y no va a ser un valor fijo
			olla_maceracion->Hacer_Algo();     //aca se simula los cambios de temperatura
		}
		//aca hay que imprimir el estado del proceso y la temperatura de la mezcla
	}
	else { throw new exception("Error al generar olla de maceracion");  }
	//DESPUES SIGUE LA COCCION DE MODO SIMILAR A LA MACERACION, AGREGANDO EXTRAS EN VEZ DE LUPULOS
	//FINALMENTE SE SIMULA EL TIEMPO DE FERMENTACION Y SE IMPRIME EL ESTADO DEL PROCESO Y AL FINAL SE PRESENTAN TODOS LOS DATOS REQUERIDOS
}