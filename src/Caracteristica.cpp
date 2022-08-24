#include "Caracteristica.h"
#include <string>


Caracteristica::Caracteristica()
{
}
void Caracteristica::setCaracteristica(std::string carac)
{
	this->NombreCaracteristica = carac;
}
std::string Caracteristica::getCaracteristica()
{
	return NombreCaracteristica;
}
void Caracteristica::setPorcentaje(float _porcentaje)
{
	this->porcentaje = _porcentaje;
}
float Caracteristica::getPorcentaje()
{
	return porcentaje;
}
int Caracteristica::getStockv2()
{
	return stockv2;
}
void Caracteristica::setStockv2(int _stock)
{
	this->stockv2 = _stock;
}

