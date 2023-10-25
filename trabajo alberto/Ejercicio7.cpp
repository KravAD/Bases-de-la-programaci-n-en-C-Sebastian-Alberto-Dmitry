#include <iostream>

int main() {
    int numero = 30;

    int &referencia = numero;

    std::cout << "Valor de numero: " << numero << std::endl;
    std::cout << "Valor de referencia: " << referencia << std::endl;

    referencia = 200;

    std::cout << "Nuevo valor de numero: " << numero << std::endl;
    std::cout << "Nuevo valor de referencia: " << referencia << std::endl;

    return 0;
}