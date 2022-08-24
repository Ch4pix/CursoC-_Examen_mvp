#ifndef CARACTERISTICA_H
#define CARACTERISTICA_H

#include <string>


#pragma once
class Caracteristica
{
protected:
	std::string NombreCaracteristica;
	float porcentaje;
	int stockv2;
public:
	Caracteristica();
	void setCaracteristica(std::string carac);
	std::string getCaracteristica();
	void setPorcentaje(float _porcentaje);
	float getPorcentaje();
	int getStockv2();
	void setStockv2(int _stock);
};
#endif

