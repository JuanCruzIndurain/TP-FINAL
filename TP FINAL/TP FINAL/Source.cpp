#include <iostream>
#include "cSimulador.h"

int main(void)
{
	srand(time(0));

	cSimulador *Simulador = new cSimulador();
	int Tipo;

	cout << "----- Indique el numero del tipo de cerveza pedido ----- " << endl;
	cout << "\n1 - Rubia" << "\n2 - Porter" << "\n3 - Honey" << "\n4 - IPA" << "\n5 - Irish Red" << "\nSeleccion: ";
	cin >> Tipo;

	switch (Tipo)
	{
		case Rubia:
			Simulador->Simular("Rubia");
			break;

		case Porter:
			Simulador->Simular("Porter");
			break;

		case Honey:
			Simulador->Simular("Honey");
			break;

		case IPA:
			Simulador->Simular("IPA");
			break;

		case Irish_Red:
			Simulador->Simular("Irish Red");
			break;

		default:
			break;
	}

	delete Simulador;
	return 0;
	

	system("pause");
}