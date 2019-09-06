//
// Created by Maikol Guzman  on 2019-09-05.
//

#include "Pabellon.h"

Pabellon::Pabellon()
{

}

Pabellon::Pabellon(int _tamano)
{
	id, genero = 'X';
	tamano = _tamano;
	int cantidad = 0;
	cama = new Cama*[tamano];
}

Pabellon::Pabellon(char _id, char _genero, int _tamano)
{
	id = _id;
	genero = _genero;
	cantidad = 0;
	tamano = _tamano;
	cama = new Cama*[tamano];
}

Pabellon::~Pabellon()
{
	delete[] cama;
}

Cama * Pabellon::obtenerCama(int posicion) const
{
	return cama[posicion];
}

void Pabellon::agregarCama(Cama *_cama)
{
		for (cantidad; cantidad < tamano; cantidad++);
			cama[cantidad] = _cama;
}

void Pabellon::eliminarCama(Cama *_cama)
{
		delete _cama;
		cantidad--;
}

void Pabellon::eliminarTodasLasCamas()
{
	for (int i = tamano - 1; i > 0; i--)
		delete cama[i];
	cantidad = 0;
}

char Pabellon::getId() const
{
	return id;
}

void Pabellon::setId(char _id)
{
	id = _id;
}

char Pabellon::getGenero() const
{
	return genero;
}

void Pabellon::setGenero(char _genero)
{
}

int Pabellon::getTamano() const
{
	return tamano;
}

void Pabellon::setTamano(int _tamano)
{
	tamano = _tamano;
}

int Pabellon::getCantidad() const
{
	return cantidad;
}

void Pabellon::setCantidad(int _cantidad)
{
	cantidad = _cantidad;
}

std::string Pabellon::toString()
{
	std::string report;

	report = "Pabellon \n ID: " + std::string(1, id) + "\n" +
			"Genero: " + std::string(1, genero) + "\n" + "Tamano: " + std::to_string(tamano) +
			"Cantidad: " + std::to_string(cantidad) + " \n"
			"Cama: ";
	for (int i = 0; i < tamano; i++) {
		report = report + cama[i]->toString() + ", ";
	}
	report = report + "\n";
	return report;
}

