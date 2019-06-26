#include "cFermentador.h"

cFermentador::cFermentador() : Capacidad(25)
{
	Temperatura = 23;
	Volumen_Actual = 20;
	Tipo_De_Enfriamiento = "";
}

cFermentador::cFermentador(float cap, float temp, float vol, string tipo) :Capacidad(cap) 
{
	Temperatura = temp;
	Volumen_Actual = vol;
	Tipo_De_Enfriamiento = tipo;
}

cFermentador::~cFermentador()
{

}

void cFermentador::Agregar(float vol)
{
	cout << endl;
	if ((Volumen_Actual + vol) > Capacidad) { Volumen_Actual = Capacidad; }
	else { Volumen_Actual += vol; }
	for (int i = 0; i < 3; i++)
	{
		cout << "\rCargando. ";
		Generador_Tiempo(1);
		cout << "\rCargando..";
		Generador_Tiempo(1);
		cout << "\rCargando...";
		Generador_Tiempo(1);
	}
}

void cFermentador::Fermentar(cProceso* Proceso)
{
	for (int i = 0; i < Proceso->Tiempo; i++)
	{
		cout << "\rFermentando.   " + to_string(i) + " dias";
		Generador_Tiempo(1);
		cout << "\rFermentando..  " + to_string(i) + " dias";
		Generador_Tiempo(1);
		cout << "\rFermentando... " + to_string(i) + " dias";
		Generador_Tiempo(1);
	}
}

void cFermentador::Generador_Tiempo(int Cantidad)
{
	double Duracion;
	clock_t comienzo = clock();
	Duracion = ((double)clock() - comienzo) / (double)CLOCKS_PER_SEC;

	while (Cantidad > Duracion)
	{
		Duracion = ((double)clock() - comienzo) / (double)CLOCKS_PER_SEC;
	}
}