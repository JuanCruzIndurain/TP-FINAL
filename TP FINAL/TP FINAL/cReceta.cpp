#include "cReceta.h"

cReceta::cReceta()
{
	Nombre = "";
	Tiempos[Maceracion] = 0;
	Tiempos[Coccion] = 1;
	Tiempos[Fermentacion] = 2;
	Cantidades[0] = 0;
	Cantidades[1] = 1;
	Cantidades[2] = 2;
	Graduacion_Alcoholica = 0;
	IBU = 0;

	Fermentador = new cFermentador();
	Olla[0] = new cOlla();
	Olla[1] = new cOlla();
	Olla[2] = new cOlla();

	for (int i = 0; i < 4; i++)
	{
		//Agregar item
	}
}

cReceta::cReceta(string Nombre, float TiempoMaceracion, float TiempoCoccion, float TiempoFermentacion, int Cantidad0, int Cantidad1, int Cantidad2, float Graduacion_Alcoholica, float IBU, cFermentador* Fermentador, cOlla* Olla_Agua, cOlla* Olla_Maceracion, cOlla* Olla_Coccion)
{
	this->Nombre = Nombre;
	Tiempos[Maceracion] = TiempoMaceracion;
	Tiempos[Coccion] = TiempoCoccion;
	Tiempos[Fermentacion] = TiempoFermentacion;
	Cantidades[0] = Cantidad0;
	Cantidades[1] = Cantidad1;
	Cantidades[2] = Cantidad2;
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