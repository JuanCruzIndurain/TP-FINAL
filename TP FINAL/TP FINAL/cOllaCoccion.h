///////////////////////////////////////////////////////////
//  cOllaCoccion.h
//  Implementation of the Class cOllaCoccion
//  Created on:      13-Jun-2019 12:02:48 AM
//  Original author: Roberto C Indurain
///////////////////////////////////////////////////////////

#if !defined(EA_631A9CC3_D7F3_4454_B3AA_574F4AE433FF__INCLUDED_)
#define EA_631A9CC3_D7F3_4454_B3AA_574F4AE433FF__INCLUDED_

#include "cOlla.h"

class cOllaCoccion : public cOlla
{

public:
	cOllaCoccion();
	virtual ~cOllaCoccion();

	virtual void Hacer_Algo();

private:
	string Espumadera;

};
#endif // !defined(EA_631A9CC3_D7F3_4454_B3AA_574F4AE433FF__INCLUDED_)
