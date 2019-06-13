///////////////////////////////////////////////////////////
//  cOllaAgua.h
//  Implementation of the Class cOllaAgua
//  Created on:      13-Jun-2019 12:02:47 AM
//  Original author: Roberto C Indurain
///////////////////////////////////////////////////////////

#if !defined(EA_0375BD13_56CD_4518_A241_DF8808422F52__INCLUDED_)
#define EA_0375BD13_56CD_4518_A241_DF8808422F52__INCLUDED_

#include "cOlla.h"

class cOllaAgua : public cOlla
{

public:
	cOllaAgua();
	virtual ~cOllaAgua();

	virtual void Hacer_Algo();

};

class cOllaAgua : public cOlla
{

public:
	cOllaAgua();
	virtual ~cOllaAgua();

};

class cOllaAgua : public cOlla
{

public:
	cOllaAgua();
	virtual ~cOllaAgua();

	const float getCapacidad();
	const string getMaterial();
	float getTemperatura();
	virtual void HacerAlgo();

};
#endif // !defined(EA_0375BD13_56CD_4518_A241_DF8808422F52__INCLUDED_)
