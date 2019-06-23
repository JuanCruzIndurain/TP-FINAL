#include "cLupulos.h"

cLupulos::cLupulos(): cInsumo(), Alfa_Acidos(0), Tiempo_Hervor(0)
{

}

cLupulos::cLupulos(string nombre, float Cantidad, float Costo, const float AlfaAcidos, int TiempoHervor) : cInsumo(nombre, Cantidad, Costo), Alfa_Acidos(AlfaAcidos), Tiempo_Hervor(TiempoHervor)
{

}

cLupulos::~cLupulos()
{

}