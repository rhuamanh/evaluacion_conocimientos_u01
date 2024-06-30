//Ejercicio1, Cálculo del área de un círculo.
#include <iostream>
#include <cmath> 
using namespace std;
int main(){
    float radio, area;
    cout<<"Ingrese el radio del círculo: ";
    cin>>radio;
    area=M_PI*pow(radio, 2);
    cout<<"El área del círculo es:"<<area<<endl;
    return 0;
}