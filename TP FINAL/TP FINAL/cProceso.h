#pragma once


class cProceso 
{
	const int Tipo;
	const float Temperatura;
	const float Tiempo;
	const float Cant_Agua;
	friend class cReceta;
public:
	cProceso(float temp = 0, float tiempo = 0, float agua = 0, int tipo = 0) :Temperatura(temp), Tiempo(tiempo), Cant_Agua(agua), Tipo(tipo) {}
	~cProceso() {}
	static int getCont() { return Cont; }
};