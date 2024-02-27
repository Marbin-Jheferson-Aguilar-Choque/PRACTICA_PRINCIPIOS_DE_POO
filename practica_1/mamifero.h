#pragma once
#include "animal.h"
#include <iostream>
using namespace std;
class mamifero :
    public animal
{
private:
    string tipo;

public:
    mamifero(string _tipo) : tipo(_tipo) {}

    void hacerSonido() const override {
        cout << "Hace un sonido de mamífero." << endl;
    }

    string getCategoria() const override {
        return "Mamifero";
    }
};

