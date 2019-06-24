#include "cOllaMaceracion.h"

cOllaMaceracion::cOllaMaceracion() : cOlla()
{
	Cant_Agua = 0;
	Cant_Malta = 0;
	cont = 0;
	Mosto = 0;
}

cOllaMaceracion::cOllaMaceracion(const float capacidad, const string material, float Temperatura) : cOlla(capacidad, material, Temperatura)
{
	cont = 0;
	Cant_Agua = 0;
	Cant_Malta = 0;
	Mosto = 0;
}

cOllaMaceracion::~cOllaMaceracion()
{

}

void cOllaMaceracion::Hacer_Algo(cProceso* Proceso, float CantidadAgua)
{
	if (CantidadAgua == 0)
	{
		if (CantidadAgua > Capacidad)Cant_Agua = Capacidad;
		else Cant_Agua = CantidadAgua;
		cout << endl;
		for (int i = 0; i < 3; i++)
		{
			cout << "\rPasando el agua a la olla de maceracion. ";
			Generador_Tiempo(1);
			cout << "\rPasando el agua a la olla de maceracion..";
			Generador_Tiempo(1);
			cout << "\rPasando el agua a la olla de maceracion...";
			Generador_Tiempo(1);
		}
	}
	try {
		if (Cant_Agua + Proceso->Cant_Usada > Capacidad)throw new ExcesoCapacidad();
	}
	catch (ExcesoCapacidad* ERROR) //Se quita el exceso de contenido de la olla
	{
		cout << ERROR->what();
		Cant_Agua = CantidadAgua - ((CantidadAgua + Proceso->Cant_Usada) - Capacidad) / 2;
		Cant_Malta = Proceso->Cant_Usada - ((CantidadAgua + Proceso->Cant_Usada) - Capacidad) / 2;
	}
	Temperatura = Proceso->Temperatura;
	for (int i = 0; i < (int)Proceso->Cant_Usada/1000;)
	{
		cout << "\rAgregando " + Proceso->Insumo->getNombre() + "... " + to_string(i) + "Kg";
		Cant_Malta += i;
		Generador_Tiempo(1);
		i += 1;
	}
	for (int i = 0; i < Proceso->Tiempo + 1; i++)
	{
		cout << "\rMacerando... " + to_string(i) + "min";
		Generador_Tiempo(1);
	}
	cout << "\r";
}

void cOllaMaceracion::Filtrar(float CantidadAguaLavado)
{
	cout << endl;

	for (int i = 0; i < CantidadAguaLavado + 1; i++)
	{
		cout << "\rColocando " + Filtro[rand() % 3] + ".";
		Generador_Tiempo(1);
		cout << "\rColocando " + Filtro[rand() % 3] + "..";
		Generador_Tiempo(1);
		cout << "\rColocando " + Filtro[rand() % 3] + "...";
		Generador_Tiempo(1);
	}
	for (int i = 0; i < CantidadAguaLavado + 1; i++)
	{
		cout << "\rFiltrando con " + Remo + "... " + to_string(i) + "min";
		Generador_Tiempo(1);
	}

	Mosto = (float)(Cant_Agua*0.9) + CantidadAguaLavado; //Multiplicamos por 0,9 porque al filtrar la malta aprovechamos un 90% del agua
}
