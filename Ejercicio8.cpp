#include <iostream>
using namespace std;
#define PI 3.14
double x=PI;
#include <vector>
const float e = 2.71;


typedef int Entero;
typedef vector<double> VectorDeDobles;

void funcionA(){
    cout << "Funcion A." << endl;
}

void funcionB(){
    cout << "Funcion b." << endl;
}

enum DiasSemana{Lunes, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo};

int main() {
    //constantes simbólicas
    cout << "El griego Pitagoras descubrio PI = " << x <<  " sin calculadora " << endl;

// El tipo Void
void (*punteroFuncion)();
punteroFuncion = funcionA;
punteroFuncion();
punteroFuncion = funcionB;
punteroFuncion();

//Alias tipo typedef
Entero num = 23;
VectorDeDobles valores = {1.0, 2.0, 3.0};
cout << "numero: " << num << endl;
cout << "Valores del vector: ";
for (const double& valor: valores){
    cout << valor << " ";
}
std::cout << std::endl;

//constantes y enumeraciones
DiasSemana Hoy = Martes;
cout << "Hoy es: ";
switch (Hoy) {
    case Lunes:
        cout << "Lunes";
        break;
    case Martes:
        cout << "Martes";
        break;
    case Miercoles:
        cout << "Miercoles";
        break;
    case Jueves:
        cout << "Jueves";
        break;
    case Viernes:
        cout << "Viernes";
        break;
    case Sabado:
        cout << "Sabado";
        break;
    case Domingo:
        cout << "Domingo";
        break;

}
    return 0;

}
