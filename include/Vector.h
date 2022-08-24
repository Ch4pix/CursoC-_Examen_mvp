#ifndef VECTOR_H
#define VECTOR_H
#include <vector>
#include "Prenda.h"
#include "Cotizacion.h"

#pragma once
class Vector
{
public:
	std::vector<Prenda> prendas;
	std::vector<Cotizacion> cotizaciones;
public:
	Vector();
	void setPrendaV(Prenda _prenda);
	void setCotizacionV(Cotizacion _cotizacion);

};
#endif

