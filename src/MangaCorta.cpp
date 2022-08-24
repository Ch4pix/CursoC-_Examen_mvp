#include "MangaCorta.h"
#include <string>
#include <vector>
#include "Caracteristica.h"

MangaCorta::MangaCorta()
{
	this->NombreCaracteristica = "Manga Corta";
	this->porcentaje = 0.9;
	this->stockv2 = 250;
}
void MangaCorta::MangaLarga()
{

	NombreCaracteristica = "Manga Larga";
	this->porcentaje = 1;
	this->stockv2 = 250;
}

