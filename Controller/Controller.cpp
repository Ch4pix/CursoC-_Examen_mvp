#include "Controller.h"


Controller::Controller()
{
}
void Controller::Opc1()
{
	opcion1.Elejir();
}
//void Controller::Opc2()
//{
//	opcion2.Elejir();
//}
void Controller::printDefault()
{
	std::cout << "Cotizador Express   /   Menu principal" << std::endl;
	std::cout << "Elija una opcion : " << std::endl;
	std::cout << "1: Cotizar." << std::endl;
	std::cout << "2: Historial de cotizaciones." << std::endl;
	std::cout << "3: Salir. " << std::endl;
	std::cin >> opc;
}
int Controller::retOpc()
{
	return opc;
}