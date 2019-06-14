#include "cSimulador.h"
using namespace std;

cSimulador::cSimulador() {
	Receta_sim = new cReceta();
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



void cSimulador::Simular(int tipo) {
	cOlla *ollaagua = new cOlla();	//en la olla de agua se agrega una cierta cantidad de agua y se calienta hasta 70°C
	cOlla *ollamaceracion = new cOlla(); //en la olla de maceracion pongo malta y agrego el agua calentada previamente (se deja macerar 1.5hr)
	cOlla *ollalupulos = new cOlla();
	cOllaAgua olla_agua = dynamic_cast<cOllaAgua*>(ollaagua);
	if (olla_agua != NULL) {
		olla_agua.agregar(); //cargo agua a la olla
		olla_agua.HacerAlgo(); // cambio la temperatura del agua
	}
	else { throw new exception("Error al generar olla de agua"); }
	cOllaMaceracion olla_maceracion = dynamic_cast<cOllaMaceracion*>(ollamaceracion);
	if (olla_maceracion != NULL) {
	}


}