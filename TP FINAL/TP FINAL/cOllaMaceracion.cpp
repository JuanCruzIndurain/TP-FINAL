#include "cOllaMaceracion.h"

cOllaMaceracion::cOllaMaceracion() : cOlla()
{
	Cant_Agua = 0;
	Cant_Malta = 0;
}

cOllaMaceracion::~cOllaMaceracion()
{

}

float cOllaMaceracion::Hacer_Algo(cProceso* Proceso, float CantidadAgua)
{
	float agua = CantidadAgua, cant_malta = Proceso->Cant_Usada;
	try {
		if (agua + cant_malta > Capacidad)throw new ExcesoCapacidad();
	}
	catch (ExcesoCapacidad* ERROR) //Se quita el exceso de contenido de la olla
	{
		cout << ERROR->what();
		agua = CantidadAgua - ((CantidadAgua + Proceso->Cant_Usada) - Capacidad) / 2;
		cant_malta = Proceso->Cant_Usada - ((CantidadAgua + Proceso->Cant_Usada) - Capacidad) / 2;
	}
	Cant_Agua = agua;
	Temperatura = Proceso->Temperatura;
	cout << "\n";
	for (float i = 0; i < cant_malta + 0.1; i++)
	{
		cout << "\rAgregando " + Proceso->Insumo->getNombre() + "... " + to_string(i) + "Kg";
		Cant_Malta += i;
		Generador_Tiempo(1);
		i = (float)0.1;
	}
	cout << "\n";
	for (int i = 0; i < Proceso->Tiempo + 1; i++)
	{
		cout << "\rMacerando... " + to_string(i) + "min";
		Generador_Tiempo(1);
	}
	return CantidadAgua;
}

float cOllaMaceracion::Filtrar(float CantidadAguaLavado)
{
	cout << "Colocando " + Filtro[rand() % 3] << endl;

	for (int i = 0; i < CantidadAguaLavado + 1; i++)
	{
		cout << "\rFiltrando con " + Remo + "... " + to_string(i) + "min";
		Generador_Tiempo(1);
	}

	return (float)(Cant_Agua*0.9) + CantidadAguaLavado; //Multiplicamos por 0,9 porque al filtrar la malta aprovechamos un 90%
}
