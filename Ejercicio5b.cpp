#include <iostream>
#include <cstdarg>
#include "Funciones.h"
using namespace std;
//Declaración de una función
int suma(int num1, int num2) {
    return num1 + num2;
}
//Llamada de las funciones
int multiplicacion(int num1, int num2) {
    return num1 * num2;
}
int resta(int num1, int num2) {
    return num1 - num2;
}
//Funciones y procedimientos
void mensaje() {
    cout << "Hola, este es un procedimiento que no devuelve un valor.\n";
}
//Gestión de las variables locales
void funcionLocal() {
    int variableLocal = 5;
    cout << "Dentro de la funcionLocal, variableLocal = " << variableLocal << endl;
}
//Definición de funciones homónimas (polimorfismo)
float suma(float a, float b) {
    return a + b;
}
float suma(float a, float b, float c) {
    return a + b + c;
}
//Funciones con número variable de argumentos
int suma2(int n, ...) {
    va_list args;
    va_start(args, n);

    int total = 0;
    for (int i = 0; i < n; i++) {
        int valor = va_arg(args, int);
        total += valor;
    }

    va_end(args);

    return total;
}
//Asignación de valores por defecto a los argumentos
void printlog(char*mensaje,FILE* f=NULL)
{
    if(f==NULL)
        printf(mensaje);
    else
        fprintf(f,mensaje);
}
//Funciones en línea
inline int sumainline (int a, int b){
    return a + b;
}

//Funciones recursivas
long factorial_r(long n) {
    if (n == 1) {
        return 1;
    } else {
        return n * factorial_r(n - 1);
    }
}
int main(){
    printlog("Inicio de la aplicación. \n");
    int num1,num2;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;

    int resultado = suma(num1,num2);
    cout << "La suma es " << resultado << endl;

    int resultado_multiplicacion = multiplicacion(num1,num2);
    int resultado_resta = resta(num1,num2);
    cout << "La multiplicacion es " << resultado_multiplicacion << endl;
    cout << "La resta es " << resultado_resta << endl;

    int otraVariable = 5;
    cout << "Dentro de main, otraVariable = " << otraVariable << endl;

    float numero1 = 5.5, numero2 = 1.3, numero3 = 7.2;
    float resultado1 = suma(numero1, numero2);
    float resultado2 = suma(numero1, numero2, numero3);
    cout << "Resultado de la función homónima 1: " << resultado1 << std::endl;
    cout << "Resultado de la función homónima 2: " << resultado2 << std::endl;

    int resultado3= suma2(2, 5, 3);
    int resultado4 = suma2(4, 10, 20, 30, 40);
    std::cout << "Suma 1 en la asignación de valores por defecto al argumento : " << resultado3 << std::endl;
    std::cout << "Suma 2 en la asignación de valores por defecto al argumento : " << resultado4 << std::endl;

    long numero = num1;
    long resultadoFactorial = factorial_r(numero);
    cout << "El factorial del primer número " << numero << " es " << resultadoFactorial << endl;

    int resultadoinline = sumainline(num1,num2);
    cout << "El resultado de la función en línea suma es " << resultadoinline << endl;

    mensaje();
    funcionLocal();
    saludar(); //Función externa de C.
    return 0;
}

