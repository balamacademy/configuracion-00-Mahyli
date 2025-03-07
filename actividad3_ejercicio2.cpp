#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int minutos_entrada;
    int horas= minutos_entrada/60;
    int minutos= minutos_entrada%60;
    
    cout << "Ingrese los minutos: ";
    cin >> minutos_entrada;
    cout << "Horas: " <<horas << "Minutos: " << minutos << endl;
    return 0;
}
