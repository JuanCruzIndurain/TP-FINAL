///////////////////////////////////////////////////////////
//  cExtras.h
//  Implementation of the Class cExtras
//  Created on:      13-Jun-2019 12:02:45 AM
//  Original author: Roberto C Indurain
///////////////////////////////////////////////////////////

#if !defined(EA_4638C1FA_25A8_4389_8D69_BD40D62D93BE__INCLUDED_)
#define EA_4638C1FA_25A8_4389_8D69_BD40D62D93BE__INCLUDED_

#include "cInsumos.h"

class cExtras : public cInsumos
{

public:
	cExtras();
	cExtras(string nombre);
	virtual ~cExtras();

private:
	string Nombre;

};
#endif // !defined(EA_4638C1FA_25A8_4389_8D69_BD40D62D93BE__INCLUDED_)
