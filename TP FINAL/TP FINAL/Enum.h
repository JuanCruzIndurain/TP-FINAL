#pragma once

#include <string>

enum Cervezas
{
	Rubia = 1, Porter, Honey, IPA, Irish_Red
};

enum ProcesosyOllas
{
	Agua = 0,
	Calentar_Agua = 0,
	Maceracion = 1,
	Coccion = 2,
	Lavado = 3,
	Fermentacion = 4,
	Embotellado = 5
};

enum Filtros
{
	Bolsa_Filtrado = 0, Falso_Fondo, Chupapalmer
};

enum Metodo_Calculo
{
	NOONAN = 0,RAGER, DANIELS, TINSETH, GARETZ, MOSHER
};

enum Tipo_Enfriamiento
{
	Green_Belly = 0, Serpentina_Liquido_Refrigerante, No_Frost
};