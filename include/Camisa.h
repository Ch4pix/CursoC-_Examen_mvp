#ifndef CAMISA_H
#define CAMISA_H


#include <iostream>
#include "Caracteristica.h"
#include "Prenda.h"

#pragma once



class Camisa : public Prenda
{
public:


public:
	Camisa();
	void setCamisa(Caracteristica c);
	void getCamisa();
	//void Cotizar();
	//void getCamisaPor();

};

#endif

