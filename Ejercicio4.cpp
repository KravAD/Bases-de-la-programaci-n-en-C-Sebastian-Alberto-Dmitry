#include <iostream>
using namespace std;

int main() {

    int Enteros[10];

    for (int i = 0; i < 10; i++) {
        Enteros[i] = i + 1;
    }
for (int i = 0; i < 10; i++){
    cout <<" Los numeros enteros son["<<i<<"] = "<<Enteros[i]<< endl;
}
return 0;
}