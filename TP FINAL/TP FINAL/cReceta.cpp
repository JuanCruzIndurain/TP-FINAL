#include "cReceta.h"

cReceta::cReceta()
{
	Nombre = "";
	Graduacion_Alcoholica = 0;
	IBU = 0;
	Tipos_Enfriamiento[0] = "";
	Tipos_Enfriamiento[1] = "";
	Tipos_Enfriamiento[2] = "";
	Fermentador = NULL;
	Olla[0] = NULL;
	Olla[1] = NULL;
	Olla[2] = NULL;
	Insumos = NULL;
	Procesos = NULL;
	FA = NULL;
	a = 0;
	b = 0;
	c = 0;
	d = 0;
}

cReceta::cReceta(int metodo_Calculo, float** fa, float densidad_final, float original_gravity, string Nombre)
{
	Tipos_Enfriamiento[Green_Belly] = "Green Belly";
	Tipos_Enfriamiento[Serpentina_Liquido_Refrigerante] = "Serpentina liquido refrigerante";
	Tipos_Enfriamiento[No_Frost] = "No Frost";
	Insumos = new cListaT<cInsumo>(50);
	Procesos = new cListaT<cProceso>(50);
	Metodo_Calculo = metodo_Calculo;
	Original_Gravity = original_gravity;
	Densidad_Final = densidad_final;
	this->Nombre = Nombre;
	Graduacion_Alcoholica = 0;
	IBU = 0;
	Fermentador = new cFermentador(50000, TA, 0, Tipos_Enfriamiento[rand() % 3]);
	Olla[Agua] = new cOllaAgua(50000, "Acero Inoxidable", TA); //La olla tiene 50 litros (50000 cm3) de capacidad
	Olla[Maceracion] = new cOllaMaceracion(50000, "Aluminio", TA);
	Olla[Coccion] = new cOllaCoccion(50000, "Aluminio", TA);
	FA = fa;
}

cReceta::~cReceta()
{
 	if (Procesos != NULL)
	{
		delete Procesos;
	}

	if (Insumos != NULL)
	{
		delete Insumos;
	}

	if (Fermentador != NULL)
	{
		delete Fermentador;
	}

	if (Olla != NULL)
	{
		for (int i = 0; i < 3; i++)
		{
			if (Olla[i] != NULL)
			{
				delete Olla[i];
				Olla[i] = NULL;
			}
		}
	}

	if (FA != NULL) FA = NULL;
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
	bool flagCoccion = false, flagFermentacion = false;

	for (unsigned int i = 0; i < Procesos->getCA(); i++) 
	{
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
			if (flagCoccion == false)
			{
				Olla_Coccion->HervirMosto(101);
				flagCoccion = true;
			}
			if (Procesos->getItem(i)->Cant_Usada > 0)
			{
				cLupulos* Lupulo = new cLupulos();
				Lupulo = dynamic_cast<cLupulos*>(Procesos->getItem(i)->Insumo);

				if (Lupulo != NULL)
				{
					if (Olla_Maceracion->getMosto() == 0)
					{
						cout << "Division por cero" << endl;
					}
					else
					{
						b = FA[Metodo_Calculo][(int)Procesos->getItem(i)->Tiempo/5];
						c = (int)Procesos->getItem(i)->Tiempo;
						a = Procesos->getItem(i)->Cant_Usada * Lupulo->getAlfaAcidos() * b;
						
						IBU = IBU + ( a / (3*Olla_Maceracion->getMosto()));
					}
				}
			}
			
			Olla_Coccion->Hacer_Algo(Procesos->getItem(i), Olla_Maceracion->getMosto());

			break;
		}

		case Fermentacion:
		{
			if (flagFermentacion == false)
			{
				Fermentador->Agregar(Olla_Coccion->getContenido());

				for (int j = 0; j < Procesos->getItem(i)->Tiempo + 1; j++)
				{
					cout << "\rFermentando.   " << j << " dias                            ";
					Generador_Tiempo(1);
					cout << "\rFermentando..  " << j << " dias                            ";
					Generador_Tiempo(1);
					cout << "\rFermentando... " << j << " dias                            ";
					Generador_Tiempo(1);
				}

				Olla_Coccion->setContenido(0);
				flagFermentacion = true;
			}
			else 
			{
				if (Procesos->getItem(i)->Cant_Usada > 0) { Fermentador->Agregar(Procesos->getItem(i)->Cant_Usada); }
				else Fermentador->Fermentar(Procesos->getItem(i));
			}
			break;
		}

		case Embotellado:
		{
			for (int i = 0; i < 5; i++)
			{
				cout << "\rEmbotellando.                                            ";
				Generador_Tiempo(1);	   
				cout << "\rEmbotellando..                                             ";
				Generador_Tiempo(1);	   
				cout << "\rEmbotellando...                                           ";
				Generador_Tiempo(1);
			}

			Graduacion_Alcoholica = (Original_Gravity - Densidad_Final)*0.13125;

			cout << "\nCerveza: " << Nombre << " finalizada" << endl;
			cout << "IBU: " << fixed << setprecision(2) << IBU << endl;
			cout << "Graduacion alcoholica: " << fixed << setprecision(2) << Graduacion_Alcoholica << endl;

			Olla_Maceracion->setCant_Agua(0);
			Olla_Maceracion->setCant_Malta(0);

			system("pause");
		}
		
			break;
		}
	}
}
