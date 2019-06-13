///////////////////////////////////////////////////////////
//  cReceta.h
//  Implementation of the Class cReceta
//  Created on:      13-Jun-2019 12:02:49 AM
//  Original author: Roberto C Indurain
///////////////////////////////////////////////////////////

#if !defined(EA_C4042FB5_7D4D_427c_ABA3_706C3DDFE719__INCLUDED_)
#define EA_C4042FB5_7D4D_427c_ABA3_706C3DDFE719__INCLUDED_

#include "cFermentador.h"
#include "cSimulador.h"
#include "cOlla.h"
#include "cInsumos.h"

class cReceta
{

public:
	cReceta();
	virtual ~cReceta();
	cFermentador *m_cFermentador;
	cSimulador *m_cSimulador;
	cOlla *m_cOlla;
	cInsumos *m_cInsumos;

	const void Imprimir_Info();
	void Simular();

private:
	float Graduacion_Alcoholica;
	float IBU;
	string Nombre;

};
#endif // !defined(EA_C4042FB5_7D4D_427c_ABA3_706C3DDFE719__INCLUDED_)
