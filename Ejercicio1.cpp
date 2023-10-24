#include <iostream>
using namespace std;
#include <string>
int variableGlobal = 10;

void funcionLocal() {

    int variableLocal = 5;


    std::cout << "Dentro de la funcion local: " << std::endl;
    std::cout << "Variable local: " << variableLocal << std::endl;
    std::cout << "Variable global: " << variableGlobal << std::endl;

}

int main(){

    //1.1
    std::string nombre;
    int edad;

    std::cout << "Por favor, ingrese su nombre: ";
    std::cin >> nombre;

    std::cout << "Por favor, ingrese su edad: ";
    std::cin >> edad;

    std::cout << "Hola, " << nombre << ". Tu edad es " << edad << " años." << std::endl;

    //1.2
    std::cout << "En la funcion main: "<< std::endl;
    std::cout << "Variable global: " << variableGlobal << std::endl;

    funcionLocal();

    //1.4

    int Entero = 60;
    std::cout << "Entero: " << Entero << std::endl;

    double Decimal = 1.01;
    std::cout << "Decimal: " << Decimal << std::endl;

    char Caracter = 'D';
    std:: cout << "Caracter: " << Caracter << std::endl;

    bool buleano = false;
    std::cout << "Buleano: " << buleano << std::endl;

    return 0;

}