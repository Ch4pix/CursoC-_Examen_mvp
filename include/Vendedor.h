#include <string>
#ifndef VENDEDOR_H
#define VENDEDOR_H


#pragma once
class Vendedor
{
public:
	std::string nombre_vendedor = "abc";
	std::string apellido_vendedor = "def";
	int id_vendedor = 321;
public:
	Vendedor();
	~Vendedor();
};

#endif



