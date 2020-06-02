#include <iostream>

using namespace std;
#pragma once

class Persona {
private:
	string nombre;
	int edad;
public:
	Persona();
	~Persona();


public:
    string getNombre() const;
    void setNombre(string nombre);

    int getEdad() const;
    void setEdad(int edad);

};