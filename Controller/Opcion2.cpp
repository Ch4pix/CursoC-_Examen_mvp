#include "Opcion2.h"
#include "Opcion1.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <conio.h>
#include "Caracteristica.h"
#include "Prenda.h"
#include "CuelloMao.h"
#include "MangaCorta.h"
#include "Chupin.h"
#include "Camisa.h"
#include "Pantalon.h"
#include "Cotizacion.h"
#include "Vendedor.h"

Opcion2::Opcion2()
{

}
void Opcion2::Elejir(std::vector<Prenda>_prenda, std::vector<Cotizacion>_cotizacion)
{
	system("cls");
	for (int i = 0; i < _prenda.size(); i++)
	{
		std::cout << "-----------------" << std::endl;
		/*std::cout << vendedor.nombre_vendedor << std::endl;
		std::cout << vendedor.apellido_vendedor << std::endl;
		std::cout << vendedor.id_vendedor << std::endl;*/
		_prenda[i].getPrenda();
		double pu = _prenda[i].getPrecioUnitario();
		std::cout << "Precio unitario: " << pu << "\n";
		std::cout << "Cantidad de prendas : " << _cotizacion[i].cantidad_prenda;
		double total = _cotizacion[i].CotizarTotal(_prenda[i]);
		std::cout << "El total es : " << total << "\n";
		std::cout << "\n";
	}
}
