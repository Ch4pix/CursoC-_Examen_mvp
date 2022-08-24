#ifndef OPCION1_H
#define OPCION1_H
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <conio.h>
#include "Caracteristica.h"
#include "Prenda.h"
#include "CuelloMao.h"
#include "MangaCorta.h"
#include "Chupin.h"
#include "Camisa.h"
#include "Pantalon.h"
#include "Cotizacion.h"
#include "Vendedor.h"



#pragma once
class Opcion1
{
public:
	Prenda prenda;
	Cotizacion cotizacion;
public:
	Opcion1();
	void Elejir();
	void setCPrenda(Prenda prenda);
	Prenda getCPrenda();
	void setCCotizacion(Cotizacion cotizacion);
	Cotizacion getCCotizacion();

};
#endif 

