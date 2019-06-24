#include "cOllaCoccion.h"

cOllaCoccion::cOllaCoccion() : cOlla()
{
	Espumadera = "";
}

cOllaCoccion::cOllaCoccion(const float capacidad, const string material, float Temperatura) : cOlla(capacidad, material, Temperatura)
{
	this->Contenido_Actual = 0;
}

cOllaCoccion::~cOllaCoccion()
{

}

void cOllaCoccion::Hacer_Algo(cProceso* Proceso, float CantidadMosto)
{
	float IBU = 0;

	for (int i = tiempo; i < tiempo + Proceso->Tiempo + 1; i++)
	{
		cout << "\rCocinando... " << i;
		if (tiempo = i)
		{
			cout << "\n";
			for (int i = 0; i < 3; i++) 
			{
				cout << "\rAgregando. " << Proceso->getNombre() << endl;
				Generador_Tiempo(1);
				cout << "\rAgregando.." << Proceso->getNombre() << endl;
				Generador_Tiempo(1);
				cout << "\rAgregando.." << Proceso->getNombre() << endl;
				Generador_Tiempo(1);
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "\rSacando espuma con la " << Espumadera << ".";
		Generador_Tiempo(1);
		cout << "\rSacando espuma con la " << Espumadera << "..";
		Generador_Tiempo(1);
		cout << "\rSacando espuma con la " << Espumadera << "...";
		Generador_Tiempo(1);
	}
	cout << "\r";
	tiempo = Proceso->Tiempo;
}

void cOllaCoccion::HervirMosto(float temperatura)
{
	if (Temperatura < temperatura)
	{
		cout << endl;
		for (float i = Temperatura; i < temperatura; i = i + 1.0) 
		{
			Temperatura = i;
			cout << "\rCalentando mosto... " << i << " C";
			Generador_Tiempo(1);
		}
		cout << "\r";
	}
}
