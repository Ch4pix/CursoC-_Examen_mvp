#include "CuelloMao.h"
#include <string>

CuelloMao::CuelloMao()
{
	this->stockv2 = 500;
	this->porcentaje = 1.03;
	this->NombreCaracteristica = "Camisa cuello Mao";
}
void CuelloMao::CuelloNormal()
{
	this->stockv2 = 500;
	this->porcentaje = 1;
	this->NombreCaracteristica = "Camisa cuello Normal";
}
