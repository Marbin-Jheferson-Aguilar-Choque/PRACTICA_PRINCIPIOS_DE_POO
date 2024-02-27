#pragma once
#include<iostream>
using namespace std;

class animal
{
public:
    // Método virtual puro para hacer un sonido
    virtual void hacerSonido() const = 0;

    // Método para obtener la categoría del animal
    virtual string getCategoria() const = 0;

    // Destructor virtual
    virtual ~animal() {}
};

