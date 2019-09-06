//
// Created by Maikol Guzman  on 2019-09-05.
//

#include "Cama.h"

Cama::Cama()
{
	std::string codigo = "AAAA";
	bool estado = false;
}

Cama::Cama(const std::string & codigo, bool estado)
{
	std::string codigo = codigo;
	bool estado = estado;
}

Cama::~Cama()
{
}

const std::string & Cama::getCodigo() const
{
	return codigo;
}

void Cama::setCodigo(const std::string & codigo)
{
	std::string codigo = codigo;
}

bool Cama::isEstado() const
{
	return estado;
}

void Cama::setEstado(bool _estado)
{
	estado = estado;
}

std::string Cama::toString()
{
	std::string reporte;
	
	reporte = "Codigo: " + getCodigo() + " ";
	if (isEstado == false)
	{
		reporte = reporte + "Estado: False";
	}
	else
		reporte = reporte + "Estado: True";

	return reporte
}





