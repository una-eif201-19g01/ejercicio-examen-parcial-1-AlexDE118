//
// Created by Maikol Guzman  on 2019-09-05.
//

#ifndef EJERCICIOSPUNTEROSVECTORES_PABELLON_H
#define EJERCICIOSPUNTEROSVECTORES_PABELLON_H


#include <ostream>
#include "Cama.h"

class Pabellon {
    char id;
    char genero;
    int tamano;
    int cantidad;
    Cama** cama;

public:
    Pabellon();

    Pabellon(int _tamano);

    Pabellon(char _id, char _genero, int _tamano);

    virtual ~Pabellon();

    Cama* obtenerCama(int) const;

    void agregarCama(Cama*);

    void eliminarCama(Cama*);

    void eliminarTodasLasCamas();

    char getId() const;

    void setId(char _id);

    char getGenero() const;

    void setGenero(char _genero);

    int getTamano() const;

    void setTamano(int _tamano);

    int getCantidad() const;

    void setCantidad(int _cantidad);

    std::string toString();

};


#endif //EJERCICIOSPUNTEROSVECTORES_PABELLON_H
