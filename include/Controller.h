#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "Opcion1.h"
#include "Opcion2.h"




#pragma once
class Controller
{
public:
	Opcion1 opcion1;
	Opcion2 opcion2;
	int opc;
public:
	Controller();
	void Opc1();
	void Opc2();
	void printDefault();
	int retOpc();
};

#endif

