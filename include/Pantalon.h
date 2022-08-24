#ifndef PANTALON_H
#define PANTALON_H

#pragma once


#include <iostream>
#include <string>
#include "Caracteristica.h"
#include "Prenda.h"


class Pantalon : public Prenda
{
public:
	std::string tipopantalon;
public:
	Pantalon();
	void setPantalon(Caracteristica c);
	void getPantalon();
	//void Cotizar();
	void getPantalonPor();
};
#endif

