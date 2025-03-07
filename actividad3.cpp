#include <iostream>
#include <cmath>
using namespace std;

int main(){

    float x1,y1;
    cin >> x1 >> y1; 
    cout <<"Ingresaste: "<< x1 << y1;
    float x2,y2;
    cin >> x2 >> y2;
    cout <<"Ingresaste: "<< x2 << y2;

    float distancia_co = pow(y2-y1,2);
    float distancia_ca = pow(x2-x1,2);
    float distancia = sqrt(distancia_co + distancia_ca);
    cout << "La distacia entre los puntos es:" << distancia << endl;
    

    return 0;
}
