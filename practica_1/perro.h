#pragma once
#include "mamifero.h"
class perro :
    public mamifero
{
public:
    perro(string _tipo) : mamifero(_tipo) {}

    void hacerSonido() const override {
        cout << "Guau!" << endl;
    }

    string getCategoria() const override {
        return "Perro " + mamifero::getCategoria();
    }
};

