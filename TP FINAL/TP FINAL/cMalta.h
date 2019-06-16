#pragma once

#include "cInsumos.h"

class cMalta : public cInsumos
{

public:
	cMalta();
	cMalta(string nom, float cant, float cost, const int ebc);
	virtual ~cMalta();

private:
	const int EBC;

};