
#pragma once
#include <iostream>
#include <random>
#include <ctime>
#include<cstdlib>

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
	int h();

	float random_float(float min, float max);
	float aleatorioFloat();
	float random();
};