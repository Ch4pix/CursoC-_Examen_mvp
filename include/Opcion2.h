#ifndef OPCION2_H
#define OPCION2_H
#include <vector>
#include "Prenda.h"
#include "Cotizacion.h"


#pragma once
class Opcion2
{

public:
	Opcion2();
	void Elejir(std::vector<Prenda>_prenda, std::vector<Cotizacion>_cotizacion);
};
#endif 

