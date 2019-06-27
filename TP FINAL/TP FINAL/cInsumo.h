#pragma once

#include <string>
#include <iostream>

using namespace std;

class cInsumo
{
protected:
	float Cantidad;
	float Costo;
	string Nombre;

public:
	cInsumo();
	cInsumo(string nombre, float Cantidad, float Costo);
	~cInsumo();
	float getCantidad() const { return Cantidad; }
	float getCosto() const { return Costo; }
	string getNombre() const { return Nombre; }
	virtual int getTiempoHervor()const { return 0; }
	friend ostream& operator<<(ostream &o, const cInsumo &i);
	void setNombre(string nombre) { Nombre = nombre; }
	void setCosto(float costo) { Costo = costo; }
	void setCantidad(float cantidad) {Cantidad = cantidad; }
	cInsumo* operator=(cInsumo &p);
	bool operator==(cInsumo &p);
	bool operator !=(cInsumo &p);

	
};
istream& operator>>(istream &i, cInsumo &P)
{
	string aux;
	float aux1;
	cout << "Ingrese nombre insumo: " << endl;
	i >> aux;
	P.setNombre(aux);
	cout << "Ingrese costo insumo: " << endl;
	i >> aux1;
	P.setCosto(aux1);
	cout << "Ingrese cantidad insumo: " << endl;
	i >> aux1;
	P.setCantidad(aux1);
	return i;
}