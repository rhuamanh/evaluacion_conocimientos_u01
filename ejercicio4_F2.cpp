#include <iostream>
#include <cmath>
using namespace std;
void calcularRaices(float a, float b, float c) {
    float d=b * b - 4 * a * c;
    float rd;
    if (d>=0){
        rd=sqrt(d);
        float x1=(-b+rd)/(2*a);
        float x2=(-b-rd)/(2*a);
        cout<<"Las raíces de la ecuación cuadrática son:"<<endl;
        cout<<"x1 = "<<x1<<endl;
        cout<<"x2 = "<<x2<<endl;
    }else {
        rd=sqrt(-d);
        float pr=-b/(2*a);
        float pi=rd/(2*a);
        cout<<"Las raíces de la ecuación cuadrática son complejas:"<<endl;
        cout<<"x1 = "<<pr<<" + "<<pi<<"i"<<endl;
        cout<<"x2 = "<<pr<<" - "<<pi<<"i"<<endl;
    }
}
int main(){
    float a, b, c;
    cout<<"Ingrese el coeficiente a:";
    cin>>a;
    cout<<"Ingrese el coeficiente b:";
    cin>>b;
    cout<<"Ingrese el coeficiente c:";
    cin>>c;
    calcularRaices(a, b, c);
    return 0;
}