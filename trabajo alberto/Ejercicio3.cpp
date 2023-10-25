#include <iostream>

int main(){
    //bucle  for

    for (int i = 1; i <= 10; i++) {
        std::cout << i << "\n";
    }

    // bucle while

    int numero;

    std::cout << "Por favor, ingresa un número: ";
    std::cin >> numero;

    int contador = 1;

    while (contador <= 10) {
        std::cout << numero << " x " << contador << " = " << numero * contador << std::endl;
        contador++;
    }

    // bucle do

    int num;

    std::cout << "Ingresa un número para generar su tabla de multiplicar: ";
    std::cin >> numero;

    std::cout << "Tabla de multiplicar de " << num << ":\n";

    int i = 1;

    do {
        int resultado = num * i;
        std::cout << num << " x " << i << " = " << resultado << std::endl;
        i++;
    } while (i <= 10);

    // instrucciones de salto

    int digito;

    while (true) {
        std::cout << "Ingresa un número (o 0 para salir): ";
        std::cin >> digito;

        if (digito == 0) {
            std::cout << "Saliendo del bucle. Has ingresado 0." << std::endl;
            break;
        }

        std::cout << "Número ingresado: " << digito << std::endl;
    }

    std::cout << "Programa finalizado." << std::endl;

    return 0;
}