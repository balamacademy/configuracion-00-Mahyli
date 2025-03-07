#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int numeros;
    cout << "Ingrese un numeros de dos digitos:";
    cin >> numeros;

    int decenas= numeros/10;
    int  unidades= numeros%10;
    int invertido= (unidades*10)+decenas;
    cout << unidades << decenas;
    cout << invertido;

    cout << "Unidades: " << unidades << "Decenas;" << decenas;
    cout << "Numeros invertido: " << invertido << endl;
    return 0;

}
