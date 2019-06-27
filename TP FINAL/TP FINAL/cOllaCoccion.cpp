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
	cout << endl;
	for (int i = tiempo; i < tiempo + Proceso->Tiempo + 1; i++)
	{
		if (tiempo == i)
		{
			for (int j = 0; j < 5; j++) 
			{
				cout << "\rAgregando.   " << Proceso->Insumo->getNombre();
				Generador_Tiempo(1);
				cout << "\rAgregando..  " << Proceso->Insumo->getNombre();
				Generador_Tiempo(1);		 
				cout << "\rAgregando... " << Proceso->Insumo->getNombre();
				Generador_Tiempo(1);
			}
		}
		else { cout << "\rCocinando...                 " << i; }
	}
	for (int i = 0; i < 5; i++)
	{
		cout << "\rSacando espuma con la " << Espumadera << ".                                            ";
		Generador_Tiempo(1);
		cout << "\rSacando espuma con la " << Espumadera << "..                                           ";
		Generador_Tiempo(1);
		cout << "\rSacando espuma con la " << Espumadera << "...                                           ";
		Generador_Tiempo(1);
	}
	tiempo = Proceso->Tiempo;
}

void cOllaCoccion::HervirMosto(float temperatura)
{
	if (Temperatura < temperatura)
	{
		cout << endl;
		for (int i = Temperatura; i < temperatura; i++) 
		{
			Temperatura = i;
			cout << "\rCalentando mosto... " << i << " C                                           ";
			Generador_Tiempo(1);
		}
	}
}