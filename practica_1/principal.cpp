#include<iostream>
#include "perro.h"
#include "mamifero.h"
#include "animal.h"
using namespace std;

void imprimirSonido(const animal& animal) {
    cout << "Este " << animal.getCategoria() << " hace: ";
    animal.hacerSonido();
}
int main() {
    // Crear instancias de las clases derivadas
    perro miPerro("Canino");

    // Llamar a imprimirSonido con diferentes tipos de animales
    imprimirSonido(miPerro);

	return 0;
}