///////////////////////////////////////////////////////////
//  cReceta.cpp
//  Implementation of the Class cReceta
//  Created on:      13-Jun-2019 12:02:49 AM
//  Original author: Roberto C Indurain
///////////////////////////////////////////////////////////

#include "cReceta.h"


cReceta::cReceta()
{
	m_cFermentador = new cFermentador();
	m_cSimulador = new cSimulador();
	m_cOlla = new cOlla();
	m_cInsumos = new cInsumos();
}



cReceta::~cReceta(){

}





const void cReceta::Imprimir_Info()
{
	cout << "Nombre Cerveza Elebarada: " << Nombre << endl << "IBU: " << IBU << endl << "Graduacion Alcoholica: " << Graduacion_Alcoholica << endl;
}


void cReceta::Simular()
{
		
}