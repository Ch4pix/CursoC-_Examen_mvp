#include <string>
#include <vector>
#include <iostream>
#include "Caracteristica.h"
#include "Prenda.h"


Prenda::Prenda()
{
}
double Prenda::getPrecioUnitario()
{
	for (int i = 0; i < vectorcar.size(); i++)
	{
		precio_unitario = precio_unitario * vectorcar[i].getPorcentaje();
	}
	return precio_unitario;
}
void Prenda::setPrecioUnitario(double prec)
{
	this->precio_unitario = prec;
}
void Prenda::getPrenda()
{
	for (int i = 0; i < vectorcar.size(); i++)
	{
		std::cout << vectorcar[i].getCaracteristica() << "\n";
	}
}
void Prenda::setCalidad(std::string cal)
{
	this->calidad = cal;
}
std::string Prenda::getCalidad()
{
	std::cout << "\n" << calidad << "\n";
	return calidad;
}
void Prenda::setStock(int stk)
{
	this->stock = stk;
}
int Prenda::getStock()
{

	return stock;


}
//void Prenda::getPrendaPor()
//{
//	for (int i = 0; i < vectorcar.size(); i++)
//	{
//
//		precio_unitario = precio_unitario * vectorcar[i].getPorcentaje();
//
//	}
//}

