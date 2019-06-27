#include "cFermentador.h"

cFermentador::cFermentador() : Capacidad(25)
{
	Temperatura = 23;
	Volumen_Actual = 20;
	Tipo_De_Enfriamiento = "Green Belly";
}

cFermentador::cFermentador(float cap, float temp, float vol_actual, string tipo_enfriamiento) :Capacidad(cap)
{
	Temperatura = temp;
	Volumen_Actual = vol_actual;
	Tipo_De_Enfriamiento = tipo_enfriamiento;
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
		cout << "\rCargando fermentador.                                                    ";
		Generador_Tiempo(1);
		cout << "\rCargando fermentador..                                                   ";
		Generador_Tiempo(1);
		cout << "\rCargando fermentador...                                                  ";
		Generador_Tiempo(1);
	}
}

void cFermentador::Fermentar(cProceso* Proceso)
{
	for (int i = 0; i < Proceso->Tiempo; i++)
	{
		cout << "\rFermentando.   " << i << " dias                                        ";
		Generador_Tiempo(1);
		cout << "\rFermentando..  " << i << " dias                                        ";
		Generador_Tiempo(1);
		cout << "\rFermentando... " << i << " dias                                        ";
		Generador_Tiempo(1);
	}
}

void cFermentador::Generador_Tiempo(int Cantidad)
{
	double Duracion;
	clock_t comienzo = clock();
	Duracion = 10 * ((double)clock() - comienzo) / (double)CLOCKS_PER_SEC;

	while (Cantidad > Duracion)
	{
		Duracion = 10 * ((double)clock() - comienzo) / (double)CLOCKS_PER_SEC;
	}
}