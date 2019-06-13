///////////////////////////////////////////////////////////
//  cMalta.h
//  Implementation of the Class cMalta
//  Created on:      13-Jun-2019 12:02:47 AM
//  Original author: Roberto C Indurain
///////////////////////////////////////////////////////////

#if !defined(EA_5A5376E7_1FDD_46e8_B93B_A26BAB366714__INCLUDED_)
#define EA_5A5376E7_1FDD_46e8_B93B_A26BAB366714__INCLUDED_

#include "cInsumos.h"

class cMalta : public cInsumos
{

public:
	cMalta();
	virtual ~cMalta();

private:
	string Tipo;

};
#endif // !defined(EA_5A5376E7_1FDD_46e8_B93B_A26BAB366714__INCLUDED_)
