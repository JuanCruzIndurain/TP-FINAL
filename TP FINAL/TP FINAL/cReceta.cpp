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

cReceta::cReceta(int Metodo_Calculo, float** fa, float densidad_final, float original_gravity, string Nombre, cFermentador* Fermentador, cOllaAgua* Olla_Agua, cOllaMaceracion* Olla_Maceracion, cOllaCoccion* Olla_Coccion)
{
	this->Metodo_Calculo = Metodo_Calculo;
	this->Original_Gravity = original_gravity;
	this->Densidad_Final = densidad_final;
	this->Nombre = Nombre;
	this->Graduacion_Alcoholica = Graduacion_Alcoholica;
	this->IBU = IBU;
	this->Fermentador = Fermentador;
	this->Olla[0] = Olla_Agua;
	this->Olla[1] = Olla_Maceracion;
	this->Olla[2] = Olla_Coccion;
	this->FA = fa;
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
	for (unsigned int i = 0; i < Procesos->getCA(); i++) 
	{
		bool flag = false;
		switch (Procesos->getItem(i)->Tipo)
		{
		case Calentar_Agua:
		{
			Olla_Agua->Hacer_Algo(Procesos->getItem(i), 0);
			break;
		}
		case Maceracion:
		{
			Olla_Maceracion->Hacer_Algo(Procesos->getItem(i), Olla_Agua->getCantidad_Actual());
			Olla_Agua->setCantidad_Actual(0);
			break;
		}
		case Lavado:
		{
			Olla_Maceracion->Filtrar(Procesos->getItem(i)->Cant_Usada);
			break;
		}
		case Coccion:
		{
			if (Procesos->getItem(i)->Cant_Usada > 0)
			{
				cInsumo* Insumo = new cInsumo();
				cLupulos* Lupulo = new cLupulos();
				Insumo = Procesos->getItem(i)->Insumo;
				Lupulo = dynamic_cast<cLupulos*>(Insumo);

				if (Lupulo != NULL)
				{
					IBU += (Procesos->getItem(i)->Cant_Usada * FA[Metodo_Calculo][(int)(Lupulo->getTiempoHervor() / 5)] * Lupulo->getAlfaAcidos() * 1000) / Olla_Maceracion->getMosto();
				}
			}
			
			Olla_Coccion->Hacer_Algo(Procesos->getItem(i), Olla_Maceracion->getMosto());
			Olla_Maceracion->setCant_Agua(0);
			Olla_Maceracion->setCant_Malta(0);
			Olla_Maceracion->setMosto(0);
			break;
		}

		case Fermentacion:
		{
			if (flag == false)
			{
				Fermentador->Agregar(Olla_Coccion->getContenido());
				flag = true;
			}
			else 
			{
				if (Procesos->getItem(i)->Cant_Usada > 0) { Fermentador->Agregar(Procesos->getItem(i)->Cant_Usada); }
				else Fermentador->Fermentar(Procesos->getItem(i));
			}
			break;
		}

		default:
			break;
		}
	}
}
