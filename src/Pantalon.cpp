#include <iostream>
#include "Caracteristica.h"
#include "Pantalon.h"




Pantalon::Pantalon()
{
}
void Pantalon::setPantalon(Caracteristica c)
{
	vectorcar.push_back(c);
}
void Pantalon::getPantalon()
{
	std::cout << vectorcar[0].getCaracteristica() << "\n";
	vectorcar[0].getCaracteristica();
}
//void Pantalon::Cotizar()
//{
//	if (vectorcar[0].getCaracteristica() == "Pantalon Chupin")
//	{
//		precio_unitario = precio_unitario - precio_unitario * 0.12;
//	}
//}
void Pantalon::getPantalonPor()
{
	precio_unitario = precio_unitario * (vectorcar[0].getPorcentaje());
}
