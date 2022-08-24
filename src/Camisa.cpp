#include "Camisa.h"
#include <iostream>
#include "Caracteristica.h"

Camisa::Camisa()
{
}
void Camisa::setCamisa(Caracteristica c) {

	vectorcar.push_back(c);
}
void Camisa::getCamisa() {
	std::cout << vectorcar[0].getCaracteristica() << "\n";
	std::cout << vectorcar[1].getCaracteristica() << "\n";
	vectorcar[0].getCaracteristica();
	vectorcar[1].getCaracteristica();
}
//void Camisa::Cotizar()
//{
//	if (vectorcar[0].getCaracteristica() == "Camisa cuello Mao")
//	{
//		precio_unitario = precio_unitario * 0.03 + precio_unitario;
//
//	}
//	if (vectorcar[1].getCaracteristica() == "Manga Corta")
//	{
//		precio_unitario = precio_unitario - precio_unitario * 0.1;
//	}
//}
//void Camisa::getCamisaPor()
//{
//	precio_unitario = precio_unitario * ((vectorcar[0].getPorcentaje() + vectorcar[1].getPorcentaje()) - 1);
//}


