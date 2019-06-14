#include "cReceta.h"


cReceta::cReceta() {


	for (int i = 0; i < 4; i++)
	{
		insumos->AgregarItemOrdenado();
	}
}



cReceta::~cReceta() {

}





const void cReceta::Imprimir_Info() {
	cout << "Nombre Cerveza Elaborada: " << Nombre << endl << "IBU: " << IBU << endl << "Graduacion Alcoholica: " << Graduacion_Alcoholica << endl;
}

