#include "Prenda.h"

#ifndef COTIZACION_H
#define COTIZACION_H

#pragma once
class Cotizacion
{
public:
	int cantidad_prenda;
	double resultado;
	Prenda prenda;
public:
	Cotizacion();
	double CotizarTotal(Prenda prend);
};

#endif

