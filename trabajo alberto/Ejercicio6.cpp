#include <iostream>

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int main(){

    // punteros de variables

    int numero = 42;
    float decimal = 3.14;
    char caracter = 'A';

    int* punteroEntero;
    float* punteroDecimal;
    char* punteroCaracter;

    punteroEntero = &numero;
    punteroDecimal = &decimal;
    punteroCaracter = &caracter;

    std::cout << "Valor de numero a través del puntero: " << *punteroEntero << std::endl;
    std::cout << "Valor de decimal a través del puntero: " << *punteroDecimal << std::endl;
    std::cout << "Valor de caracter a través del puntero: " << *punteroCaracter << std::endl;

    *punteroEntero = 100;
    *punteroDecimal = 2.718;
    *punteroCaracter = 'B';

    std::cout << "Nuevo valor de numero: " << numero << std::endl;
    std::cout << "Nuevo valor de decimal: " << decimal << std::endl;
    std::cout << "Nuevo valor de caracter: " << caracter << std::endl;

// punteros y arrays

        const int tamaño = 5;
        int arreglo[tamaño] = {1, 2, 3, 4, 5};

        int* puntero = arreglo;

        std::cout << "Elementos del array original: ";
        for (int i = 0; i < tamaño; i++) {
            std::cout << *puntero << " ";
            puntero++;
        }
        std::cout << std::endl;

        puntero = arreglo;

        for (int i = 0; i < tamaño; i++) {
            *puntero *= 2;
            puntero++;
        }

        std::cout << "Elementos del array modificado: ";
        puntero = arreglo;
        for (int i = 0; i < tamaño; i++) {
            std::cout << *puntero << " ";
            puntero++;
        }
        std::cout << std::endl;

        int tamano;
        std::cout << "Ingrese el tamaño del arreglo: ";
        std::cin >> tamano;

        int* arregloDinamico = new int[tamano]; // Cambiamos el nombre de la variable.

        std::cout << "Ingrese " << tamano << " números:" << std::endl;
        for (int i = 0; i < tamano; i++) {
            std::cin >> arregloDinamico[i]; // Usamos la variable arregloDinamico.
        }

        std::cout << "Valores del arreglo dinámico: ";
        for (int i = 0; i < tamano; i++) {
            std::cout << arregloDinamico[i] << " "; // Usamos la variable arregloDinamico.
        }
        std::cout << std::endl;

        delete[] arregloDinamico; // Eliminamos el arreglo dinámico.



    // aritmética de punteros

    int arreglos[5] = {1, 2, 3, 4, 5};
    int *puntero1 = arreglo;

    std::cout << "Elementos del arreglo: ";
    for (int i = 0; i < 5; i++) {
        std::cout << *puntero << " ";
        puntero++;
    }
    std::cout << std::endl;

    puntero1 = arreglo;

    puntero1 += 2;
    std::cout << "Después de avanzar dos elementos: " << *puntero1 << std::endl;

    puntero1 -= 1;
    std::cout << "Después de retroceder un elemento: " << *puntero1 << std::endl;

    // punteros de punteros

    int filas, columnas;
    std::cout << "Ingrese el número de filas: ";
    std::cin >> filas;
    std::cout << "Ingrese el número de columnas: ";
    std::cin >> columnas;

    int** matriz = new int*[filas];
    for (int i = 0; i < filas; i++) {
        matriz[i] = new int[columnas];
    }

    int valor = 1;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = valor;
            valor++;
        }
    }

    std::cout << "Matriz:" << std::endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < filas; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;

    // punteros de funciones

    int (*func_ptr)(int, int);

    func_ptr = suma;

    int resultado = func_ptr(20, 80);
    std::cout << "Resultado de la suma: " << resultado << std::endl;

    func_ptr = resta;

    resultado = func_ptr(100, 30);
    std::cout << "Resultado de la resta: " << resultado << std::endl;



}