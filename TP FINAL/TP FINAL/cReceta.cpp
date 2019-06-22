#include "cReceta.h"

cReceta::cReceta()
{
	Nombre = "";
	Graduacion_Alcoholica = 0;
	IBU = 0;

	Fermentador = new cFermentador();
	Olla[0] = NULL;
	Olla[1] = NULL;
	Olla[2] = NULL;

	for (int i = 0; i < 4; i++)
	{
		//Agregar item
	}
}

cReceta::cReceta(string Nombre, float Graduacion_Alcoholica, float IBU, cFermentador* Fermentador, cOllaAgua* Olla_Agua, cOllaMaceracion* Olla_Maceracion, cOllaCoccion* Olla_Coccion)
{
	this->Nombre = Nombre;
	this->Graduacion_Alcoholica = Graduacion_Alcoholica;
	this->IBU = IBU;
	this->Fermentador = Fermentador;
	this->Olla[0] = Olla_Agua;
	this->Olla[1] = Olla_Maceracion;
	this->Olla[2] = Olla_Coccion;
}

cReceta::~cReceta()
{

}

void cReceta::Imprimir_Info() const
{
	cout << "Nombre Cerveza Elaborada: " << Nombre << endl << "IBU: " << IBU << endl << "Graduacion Alcoholica: " << Graduacion_Alcoholica << endl;
}

void cReceta::simular()
{
	cOllaAgua *Olla_Agua = dynamic_cast<cOllaAgua*>(Olla[Agua]);
	cOllaMaceracion *Olla_Maceracion = dynamic_cast<cOllaMaceracion*>(Olla[Maceracion]);
	cOllaCoccion *Olla_Coccion = dynamic_cast<cOllaCoccion*>(Olla[Coccion]);
	for (int i = 0; i < Procesos->getCA(); i++) 
	{
		switch (Procesos->getItem(i)->Tipo)
		{
		case Calentar_Agua:
		{
			Olla_Agua->Agregar(Procesos->getItem(i)->Cant_Agua);
			break;
		}
		case Maceracion:
		{
			break;
		}
		case Lavado:
		{
			break;
		}
		case Coccion:
		{
			break;
		}
		case Fermentacion: 
		{
			break;
		}
		}
	}
}
