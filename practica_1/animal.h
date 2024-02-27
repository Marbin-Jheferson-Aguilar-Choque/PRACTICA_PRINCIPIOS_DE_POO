#pragma once
#include<iostream>
using namespace std;

class animal
{
public:
    // M�todo virtual puro para hacer un sonido
    virtual void hacerSonido() const = 0;

    // M�todo para obtener la categor�a del animal
    virtual string getCategoria() const = 0;

    // Destructor virtual
    virtual ~animal() {}
};

