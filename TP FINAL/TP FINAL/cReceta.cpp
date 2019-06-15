#include "cReceta.h"

cReceta::cReceta() {

	for (int i = 0; i < 4; i++)
	{
		//Agregar item
	}
}

cReceta::~cReceta() {

}

void cReceta::Imprimir_Info() const {

	cout << "Nombre Cerveza Elaborada: " << Nombre << endl << "IBU: " << IBU << endl << "Graduacion Alcoholica: " << Graduacion_Alcoholica << endl;
}