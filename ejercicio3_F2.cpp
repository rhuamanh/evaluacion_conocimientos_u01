#include <iostream>
#include <cmath>
using namespace std;
float calcularHipotenusa(float c1, float c2){
    float sumaCuadrados=pow(c1, 2)+pow(c2, 2);
    float h=sqrt(sumaCuadrados);
    return h;
}
int main() {
    float c1, c2, h;
    cout << "Ingrese la longitud del primer cateto: ";
    cin >> c1;
    cout << "Ingrese la longitud del segundo cateto: ";
    cin >> c2;
    h= calcularHipotenusa(c1, c2);
    cout << "La hipotenusa del triángulo rectángulo es:"<<h<<endl;
    return 0;
}