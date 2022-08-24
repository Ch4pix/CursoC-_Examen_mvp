#include "Chupin.h"
#include <string>
#include <vector>
#include "Caracteristica.h"

Chupin::Chupin()
{
	this->NombreCaracteristica = "Pantalon Chupin";
	this->porcentaje = 0.88;
	this->stockv2 = 750;
}
void Chupin::NoChupin()
{
	this->NombreCaracteristica = "Pantalon Normal";
	this->porcentaje = 1;
	this->stockv2 = 750;
}


