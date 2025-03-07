#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float sueldo_base= 0.0; 
    float venta1= 0.0;
    float venta2= 0.0;
    float venta3= 0.0;
    float extra= 0.1;
    float total_Ventas= venta1+venta2+venta3;
    float comision= total_Ventas*extra;
    float total= total_Ventas+sueldo_base+comision;
    cout << "Ingrese el sueldo base: ";
    cin >> sueldo_base;
    cout << "Ingrese el valor de la venta 1: ";
    cin >> venta1;
    cout << "Ingrese el valor de la venta 2: ";
    cin >> venta2;
    cout << "Ingrese el valor de la venta 3: ";
    cin >> venta3;
    cout << "Total de ventas: " << total_Ventas << endl;
    cout << "Comision: " << comision << endl;
    cout << "Total a pagar: " << total << endl;
    return 0;
}