#include <iostream>
#include "cSimulador.h"

int main(void)
{
	cSimulador *Simulador = new cSimulador();
	int Tipo;
	cout << "---- Indique el numero del tipo de cerveza pedido ---- " << endl;
	cout << "\n1 - Rubia" << "\n2 - Porter" << "\n3 - Honey" << "\n4 - IPA" << "\n5 - Irish Red" << "\nSeleccion: ";
	cin >> Tipo;
	Simulador->Simular(Tipo);
	
	delete Simulador;

	return 0;
}