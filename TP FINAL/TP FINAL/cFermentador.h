///////////////////////////////////////////////////////////
//  cFermentador.h
//  Implementation of the Class cFermentador
//  Created on:      13-Jun-2019 12:02:46 AM
//  Original author: Roberto C Indurain
///////////////////////////////////////////////////////////

#if !defined(EA_716C8BE9_7B78_4a51_913B_D3063546D21B__INCLUDED_)
#define EA_716C8BE9_7B78_4a51_913B_D3063546D21B__INCLUDED_

class cFermentador
{

public:
	cFermentador();
	virtual ~cFermentador();

private:
	const float Capacidad;
	float Temperatura;
	string Tipo_De_Enfriamiento;
	float Volumen_Actual;

};
#endif // !defined(EA_716C8BE9_7B78_4a51_913B_D3063546D21B__INCLUDED_)
