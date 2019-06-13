///////////////////////////////////////////////////////////
//  cOllaMaceracion.h
//  Implementation of the Class cOllaMaceracion
//  Created on:      13-Jun-2019 12:02:48 AM
//  Original author: Roberto C Indurain
///////////////////////////////////////////////////////////

#if !defined(EA_8A803724_9261_4640_B8DF_7A717373632B__INCLUDED_)
#define EA_8A803724_9261_4640_B8DF_7A717373632B__INCLUDED_

#include "cOlla.h"

class cOllaMaceracion : public cOlla
{

public:
	cOllaMaceracion();
	virtual ~cOllaMaceracion();

	virtual void Hacer_Algo();

private:
	string Filtro;
	string Remo;

};
#endif // !defined(EA_8A803724_9261_4640_B8DF_7A717373632B__INCLUDED_)
