#include "Persona.h"

string Persona::getNombre() const
{
    return nombre;
}

void Persona::setNombre(string nombre)
{
    this->nombre = nombre;
}

int Persona::getEdad() const
{
    return edad;
}

void Persona::setEdad(int edad)
{
    this->edad = edad;
}

