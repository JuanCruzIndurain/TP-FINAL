#include <iostream>
#include "cSimulador.h"

int main(void)
{
	srand((unsigned int)time(0));

	cSimulador *Simulador = new cSimulador();
	int Tipo = 0;
	string Aux = "";

	while (Tipo != 9)
	{
		system("cls");

		cout << "----- Indique el tipo de cerveza pedido ----- " << endl;
		cout << "\n1 - Rubia" << "\n2 - Porter" << "\n3 - Honey" << "\n4 - IPA" << "\n5 - Irish Red" << "\n9 - Salir" << endl;
		cout << "\nSeleccion: ";
		cin >> Aux;

		try
		{
			Tipo = stoi(Aux);

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
		}
		catch (...)
		{
			cout << "ERROR" << endl;

			system("pause");
		}
	}

	delete Simulador;
	
	
	return 0;
}