#pragma once
#include <string>
#include <iostream>
using namespace std;

class ExcesoCapacidad : public exception 
{
public:
	ExcesoCapacidad() :exception("El contenido excede la capacidad de la olla") {}
	~ExcesoCapacidad() {}
};