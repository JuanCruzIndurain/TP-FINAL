#include "cSimulador.h"

cSimulador::cSimulador() {
	Recetas = new cListaT<cReceta>(6);
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
		olla_agua->agregar(150); //cargo agua a la olla, la cantidad podría variar tmb dependiendo de la cantidad de cerveza pedida, por ahora queda constante
		olla_agua->Hacer_Algo(); // cambio la temperatura del agua
		//aca hay que imprimir el estado del proceso y la temperatura del agua
	}
	else { throw new exception("Error al generar olla de agua"); }
	cOllaMaceracion *olla_maceracion = dynamic_cast<cOllaMaceracion*>(ollamaceracion);
	if (olla_maceracion != NULL) {
		for (int i = 0; Cerveza->getCantMaltas; i++)
		{
			olla_maceracion->agregar(100, 50); //los parametros son cantidad de malta y de agua respectivamente, en realidad va a variar en funcion de la receta y no va a ser un valor fijo
			olla_maceracion->Hacer_Algo();     //aca se simula los cambios de temperatura
		}
		//aca hay que imprimir el estado del proceso y la temperatura de la mezcla
	}
	else { throw new exception("Error al generar");  }
	//DESPUES SIGUE LA COCCION DE MODO SIMILAR A LA MACERACION, AGREGANDO EXTRAS EN VEZ DE LUPULOS
	//FINALMENTE SE SIMULA EL TIEMPO DE FERMENTACION Y SE IMPRIME EL ESTADO DEL PROCESO Y AL FINAL SE PRESENTAN TODOS LOS DATOS REQUERIDOS
}