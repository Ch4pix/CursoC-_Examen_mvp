#ifndef PRENDA_H
#define PRENDA_H

#include <string>
#include <vector>
#include "Caracteristica.h"
#pragma once
class Prenda
{
protected:
	std::string calidad = "";
	std::vector<Caracteristica> vectorcar;
	double precio_unitario = 1;
	int stock;

public:
	Prenda();
	double getPrecioUnitario();
	void setPrecioUnitario(double prec);
	void getPrenda();
	void setCalidad(std::string cal);
	std::string getCalidad();
	void setStock(int stk);
	int getStock();
	//void getPrendaPor();
};
#endif

