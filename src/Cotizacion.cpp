#include "Cotizacion.h"
#include "Prenda.h"

Cotizacion::Cotizacion()
{
}
double Cotizacion::CotizarTotal(Prenda prend)
{
	resultado = cantidad_prenda * prend.getPrecioUnitario();
	if (prend.getCalidad() == "Premium")
	{
		resultado = resultado + resultado * 0.3;
	}
	return resultado;
}

