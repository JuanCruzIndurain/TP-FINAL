#include "cOllaAgua.h"

cOllaAgua::cOllaAgua() {

}

cOllaAgua::~cOllaAgua() {
}

void cOllaAgua::Hacer_Algo() {

}

void cOllaAgua::agregar(float agua)
{
	Cant_Actual = agua;
	Hacer_Algo();
}

void cOllaAgua::calentar(float temp)
{
	Tempertatura = temp;
	Hacer_Algo();
}
