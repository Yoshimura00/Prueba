#include "Persona.h"

Persona::Persona()
{   
    this->edad = 0;
    this->nombre = "SN";
    //se modifico el constructor
}

Persona::~Persona()
{
    //constructor con parametros
}

string Persona::getNombre() const
{
    return nombre;
    cout << getEdad() << endl;
}

void Persona::setNombre(string nombre)
{
    this->nombre = nombre;
}

int Persona::getEdad() const
{
    cout << getNombre() << endl;
    return edad;
}

void Persona::setEdad(int edad)
{
    this->edad = edad;
}

int Persona::h()
{
    cout << "ytryytryutrtyyuur" << endl;
        return 3;
}

float Persona::random_float(float min, float max)
{
    return ((float)rand() / RAND_MAX) * (max - min) + min;
}

float Persona::aleatorioFloat()
{
    srand(time(NULL));
    float aleatorio = 0.f;
    aleatorio = random_float(0.85f, 1.00f);
    return aleatorio;

}

float Persona::random()
{
    float random;
    srand(time(0));
    random = 85 + (rand() % (100 + 1 - 85));
    return random / 100;
}
