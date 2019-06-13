///////////////////////////////////////////////////////////
//  cSimulador.h
//  Implementation of the Class cSimulador
//  Created on:      13-Jun-2019 12:02:49 AM
//  Original author: Roberto C Indurain
///////////////////////////////////////////////////////////
#include <ctime>
#include <cstdlib>
#if !defined(EA_065D4011_AD1F_4e09_8136_1ABCCB4F8B93__INCLUDED_)
#define EA_065D4011_AD1F_4e09_8136_1ABCCB4F8B93__INCLUDED_

class cSimulador
{

public:
	cSimulador();
	virtual ~cSimulador();

	void Generador_Tiempo(int Cantidad);
	void Simular();

};
#endif // !defined(EA_065D4011_AD1F_4e09_8136_1ABCCB4F8B93__INCLUDED_)
