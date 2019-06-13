///////////////////////////////////////////////////////////
//  cSimulador.cpp
//  Implementation of the Class cSimulador
//  Created on:      13-Jun-2019 12:02:49 AM
//  Original author: Roberto C Indurain
///////////////////////////////////////////////////////////

#include "cSimulador.h"


cSimulador::cSimulador(){

}



cSimulador::~cSimulador(){

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


void cSimulador::Simular(){

}