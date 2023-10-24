#include <iostream>
int main() {
    int edad;
    std::cout << "Ingresa tu edad: ";
    std::cin >> edad;
    if (edad >= 18) {
   std::cout << "Eres mayor de edad.\n";
    }else {
        std::cout << "Eres menor de edad.\n";
    }
    int num1, num2;
    //Operadores aritméticos
    std::cout << "Ingresa dos números enteros: ";
    std::cin >> num1 >> num2;
    int suma = num1 + num2;
    int resta = num1 - num2;
    int multiplicacion = num1 * num2;
    int division = num1 / num2;
    int modulo = num1 % num2;
    std::cout << "Suma: " << suma << std::endl;
    std::cout << "Resta: " << resta << std::endl;
    std::cout << "Multiplicación: " << multiplicacion << std::endl;
    std::cout << "División: " << division << std::endl;
    std::cout << "Módulo: " << modulo << std::endl;
    //Operadores comparativos
    if (num1 == num2) {
        std::cout << "Los números son iguales." << std::endl;
    }else{
        std::cout << "Los números son diferentes." << std::endl;
    }
    if (num1 < num2) {
        std::cout << "El primer número es menor que el segundo" << std::endl;
    }else{
        std::cout << "El primer número es mayor que el segundo" << std::endl;
    }
    //Operadores lógicos
    bool esVerdadero = true;
    bool esFalso = false;
    if (esVerdadero & esFalso) {
        std::cout << "Esto no se imprimirá, ya que la condición es falso & verdadero." << std::endl;
    }
    if (esVerdadero | esFalso) {
        std::cout << "Esto no se imprimirá, ya que la condición es falso | verdadero." << std::endl;
    }
    if (!esFalso) {
        std::cout << "Esto no se imprimirá, ya que la condición es !falso." << std::endl;
    }
    return 0;
}