#include "Persona.h"

Persona::Persona()
{
    //Aqui va el constructor
}

Persona::~Persona()
{
    //constructor con parametros
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

