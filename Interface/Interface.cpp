#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <conio.h>
#include "Interface.h"
#include "Vector.h"
#include "Opcion1.h"
#include "Opcion2.h"
#include "Controller.h"

using namespace std;

Interface::Interface()
{
}
Interface::~Interface()
{
}
void Interface::Ejecutar()
{

	int a = 1;
	int opc;
	std::vector<Prenda> prendas;
	std::vector<Cotizacion> cotizaciones;
	Prenda prenda;
	Cotizacion cotizacion;
	Controller controller = Controller();
	while (a != 0)
	{
		controller.printDefault();
		opc = controller.retOpc();

		if (opc == 1)
		{
			Opcion1 opcion1 = Opcion1();
			opcion1.Elejir();
			prenda = opcion1.getCPrenda();
			prendas.push_back(prenda);
			cotizacion = opcion1.getCCotizacion();
			cotizaciones.push_back(cotizacion);
		}
		if (opc == 2)
		{
			Opcion2 opcion2 = Opcion2();
			opcion2.Elejir(prendas, cotizaciones);
		}
		if (opc == 3)
		{
			a = 0;
		}

	}

}
