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

Opcion1::Opcion1()
{
}
void Opcion1::Elejir()
{

	int opc = 0;
	system("cls");
	std::cout << "Elija el tipo de prenda" << std::endl;
	std::cout << "1: Camisa" << std::endl;
	std::cout << "2: Pantalon" << std::endl;
	std::cin >> opc;
	if (opc == 1)
	{
		system("cls");
		Camisa cam = Camisa();
		std::cout << "Elija el tipo de cuello" << std::endl;
		std::cout << "1: Mao" << std::endl;
		std::cout << "2: Std (standard)" << std::endl;
		std::cin >> opc;
		if (opc == 1)
		{
			CuelloMao cuello = CuelloMao();
			cam.setCamisa(cuello);
			/*cam.setStock(500);*/


		}
		if (opc == 2)
		{
			CuelloMao cuello = CuelloMao();
			cuello.CuelloNormal();
			cam.setCamisa(cuello);
			/*	cam.setStock(500);*/
		}
		system("cls");
		std::cout << "Elija el tipo de manga" << std::endl;
		std::cout << "1: Larga" << std::endl;
		std::cout << "2: Corta" << std::endl;
		std::cin >> opc;
		if (opc == 1)
		{
			MangaCorta manga = MangaCorta();
			manga.MangaLarga();
			cam.setCamisa(manga);
			/*cam.setStock(250);*/


		}
		if (opc == 2)
		{
			MangaCorta manga = MangaCorta();
			cam.setCamisa(manga);
			//cam.setStock(250);


		}
		system("cls");
		std::cout << "Elija la calidad de la prenda" << std::endl;
		std::cout << "1: Premium" << std::endl;
		std::cout << "2: Standard" << std::endl;
		std::cin >> opc;
		if (opc == 1)
		{
			cam.setCalidad("Premium");
			cam.setStock(100);


		}
		if (opc == 2)
		{
			cam.setCalidad("Standard");
			cam.setStock(150);
		}
		int precio;
		std::cout << "Ingrese el precio\n";
		std::cin >> precio;
		cam.setPrecioUnitario(precio);
		Cotizacion cotizacion = Cotizacion();
		std::cout << "Ingrese la cantidad de prendas\n";
		std::cin >> cotizacion.cantidad_prenda;

		int stok = cam.getStock();
		std::cout << "stock " << stok << std::endl;
		while (cotizacion.cantidad_prenda > stok)
		{
			std::cout << "------------------------" << std::endl;
			std::cout << "No hay suficiente stock!\n";
			std::cout << "Ingrese otra cantidad\n";
			std::cout << "------------------------" << std::endl;
			std::cin >> cotizacion.cantidad_prenda;
		}

		double res = cotizacion.CotizarTotal(cam);
		system("cls");
		cam.getCamisa();
		cam.getPrecioUnitario();
		cam.getCalidad();
		std::cout << "El total es : " << res << "\n";
		std::cout << cotizacion.cantidad_prenda << " Cantidad de prenda/s\n";
		std::cout << "-----------------" << std::endl;
		this->prenda = cam;
		this->cotizacion = cotizacion;




		opc = 0;
	}
	if (opc == 2)
	{
		Pantalon pant = Pantalon();
		system("cls");
		std::cout << "Elija el tipo de pantalon" << std::endl;
		std::cout << "1: Chupin" << std::endl;
		std::cout << "2: Normal" << std::endl;
		std::cin >> opc;
		if (opc == 1)
		{
			Chupin chupin = Chupin();
			pant.setPantalon(chupin);
			//pant.setStock(750);

		}
		if (opc == 2)
		{
			Chupin chupin = Chupin();
			chupin.NoChupin();
			pant.setPantalon(chupin);
			/*pant.setStock(750);*/


		}
		system("cls");
		std::cout << "Elija la calidad de la prenda" << std::endl;
		std::cout << "1: Premium" << std::endl;
		std::cout << "2: Standard" << std::endl;
		std::cin >> opc;
		if (opc == 1)
		{
			pant.setCalidad("Premium");
			pant.setStock(250);
		}
		if (opc == 2)
		{
			pant.setCalidad("Standard");
			pant.setStock(500);
		}
		int precio;
		std::cout << "Ingrese el precio\n";
		std::cin >> precio;
		pant.setPrecioUnitario(precio);
		Cotizacion cotizacion = Cotizacion();
		std::cout << "Ingrese la cantidad de prendas\n";
		std::cin >> cotizacion.cantidad_prenda;

		int stok = pant.getStock();
		while (cotizacion.cantidad_prenda > stok)
		{
			std::cout << "------------------------" << std::endl;
			std::cout << "No hay suficiente stock!\n";
			std::cout << "Ingrese otra cantidad\n";
			std::cout << "------------------------" << std::endl;
			std::cin >> cotizacion.cantidad_prenda;
		}

		double res = cotizacion.CotizarTotal(pant);
		system("cls");
		pant.getPantalon();
		pant.getPrecioUnitario();
		pant.getCalidad();
		std::cout << "El total es : " << res << "\n";
		std::cout << cotizacion.cantidad_prenda << " Cantidad de prenda/s\n";
		std::cout << "-----------------" << std::endl;
		this->prenda = pant;
		this->cotizacion = cotizacion;

	}
}
void Opcion1::setCPrenda(Prenda _prenda)
{
	this->prenda = _prenda;
}
Prenda Opcion1::getCPrenda()
{
	return prenda;
}
void Opcion1::setCCotizacion(Cotizacion _cotizacion)
{
	this->cotizacion = _cotizacion;
}
Cotizacion Opcion1::getCCotizacion()
{
	return cotizacion;
}


