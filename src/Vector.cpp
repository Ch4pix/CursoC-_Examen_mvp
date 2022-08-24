#include "Vector.h"
#include <vector>
#include "Prenda.h"
#include "Cotizacion.h"


Vector::Vector()
{
}
void Vector::setPrendaV(Prenda  _prenda)
{
	prendas.push_back(_prenda);
}
void Vector::setCotizacionV(Cotizacion  _cotizacion)
{
	cotizaciones.push_back(_cotizacion);
}


