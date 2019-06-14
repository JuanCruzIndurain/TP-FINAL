#include <iostream>
#include "cSimulador.h"

void main()
{
	cSimulador *simulador = new cSimulador();
	int tipo;
	cout << "---- Indique el tipo de cerveza pedido ---- " << endl;
	cout << "\n1. Rubia" << "\n2. Porter" << "\n3. Honey" << "\n4. IPA" << "Irish Red" << "\nSeleccion: ";
	cin >> tipo;
	simulador->Simular(tipo);
	delete simulador;
}