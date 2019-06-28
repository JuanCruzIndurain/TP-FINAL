#pragma once

#include "cReceta.h"
#include <iostream>

using namespace std;

class cSimulador
{
private:
	cListaT<cReceta> *Recetas;
	//Esta es la tabla de factores de aprovechamiento segun el tiempo de agregado de lupulo
	float FactorA[114] = { (float)5.0,(float)5.0,(float)6.5,(float)8.0,(float)10.3,(float)12.7,(float)15.0,(float)17.2,(float)19.3,(float)21.5,(float)23.7,(float)25.3,(float)28.0,(float)28.5,(float)29.0,(float)29.5,(float)30.0,(float)30.5,(float)31.0,(float)5.0,(float)5.0,(float)6.0,(float)8.0,(float)10.1,(float)12.1,(float)15.3,(float)18.8,(float)22.8,(float)26.9,(float)28.1,(float)30.0,(float)30.0,(float)30.0,(float)30.0,(float)30.0,(float)30.0,(float)30.0,(float)30.0,(float)5.0,(float)5.0,(float)12.0,(float)12.0,(float)15.0,(float)15.0,(float)19.0,(float)19.0,(float)19.0,(float)22.0,(float)22.0,(float)22.0,(float)24.0,(float)24.0,(float)24.0,(float)27.0,(float)27.0,(float)27.0,(float)27.0,(float)0.0,(float)4.6,(float)8.4,(float)11.4,(float)14.0,(float)16.0,(float)17.7,(float)19.1,(float)20.2,(float)21.2,(float)21.9,(float)22.6,(float)23.1,(float)23.5,(float)23.8,(float)24.1,(float)24.3,(float)24.5,(float)24.7,(float)0.0,(float)0.0,(float)0.0,(float)2.0,(float)5.0,(float)8.0,(float)11.0,(float)14.0,(float)16.0,(float)18.0,(float)19.0,(float)20.0,(float)20.0,(float)21.0,(float)21.0,(float)22.0, (float)22.0, (float)23.0,(float)23.0,(float)0.0,(float)3.5,(float)6.1,(float)8.7,(float)9.9,(float)11.2,(float)12.4,(float)13.4,(float)14.3,(float)15.3,(float)15.9,(float)16.6,(float)17.2,(float)17.8,(float)18.4,(float)19.0,(float)19.6,(float)20.2,(float)20.8 };
	float** Factores_Aprovechamiento;

public:
	cSimulador();
	virtual ~cSimulador();
	void Simular(string Tipo);
};