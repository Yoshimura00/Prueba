#include "Persona.h"

Persona::Persona()
{   
    this->edad = 0;
    this->nombre = "SN";
    //se modifico el constructor
}

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

