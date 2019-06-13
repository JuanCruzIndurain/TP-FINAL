///////////////////////////////////////////////////////////
//  cInsumos.h
//  Implementation of the Class cInsumos
//  Created on:      13-Jun-2019 12:02:46 AM
//  Original author: Roberto C Indurain
///////////////////////////////////////////////////////////

#if !defined(EA_DC13A1C7_BA2A_489b_A8CA_C46C76C881D9__INCLUDED_)
#define EA_DC13A1C7_BA2A_489b_A8CA_C46C76C881D9__INCLUDED_

class cInsumos
{

public:
	cInsumos();
	virtual ~cInsumos();

protected:
	int Cantidad;
	float Costo;
	const string Nombre;

};
#endif // !defined(EA_DC13A1C7_BA2A_489b_A8CA_C46C76C881D9__INCLUDED_)
