///////////////////////////////////////////////////////////
//  cOlla.h
//  Implementation of the Class cOlla
//  Created on:      13-Jun-2019 12:02:47 AM
//  Original author: Roberto C Indurain
///////////////////////////////////////////////////////////

#if !defined(EA_02F8D4EA_ED09_4e9b_AB2D_93521B4D18A3__INCLUDED_)
#define EA_02F8D4EA_ED09_4e9b_AB2D_93521B4D18A3__INCLUDED_
#include "cReceta.h"//para tener el string
class cOlla
{

public:
	cOlla();
	virtual ~cOlla();

	virtual void Hacer_Algo();

protected:
	const float Capacidad;
	const string Material;
	float Tempertatura;

};
#endif // !defined(EA_02F8D4EA_ED09_4e9b_AB2D_93521B4D18A3__INCLUDED_)
