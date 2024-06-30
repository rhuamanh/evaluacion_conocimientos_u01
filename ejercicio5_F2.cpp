#include <iostream>
#include <cmath>
using namespace std;
void calcularRaices(double a, double b, double c, double& rzr1, double& rzr2, bool& r){
    double d=b*b-4*a*c;
    if (d>=0){
        r=true;
        rzr1=(-b+sqrt(d))/(2*a);
        rzr2=(-b-sqrt(d))/(2*a);
    }else{
        r=false;
        rzr1=-b/(2*a);
        rzr2=-b/(2*a);
        double ri=sqrt(abs(d))/(2*a);
    }
}
int main(){
    double a, b, c;
    double raiz1, raiz2;
    bool r;
    cout<<"Ingrese los coeficientes a, b, y c:";
    cin>>a>>b>>c;
    calcularRaices(a, b, c, raiz1, raiz2, r);
    if (r){
        cout<<"Las ra�ces son reales." << endl;
        cout<<"Ra�z 1:"<<raiz1<<endl;
        cout<<"Ra�z 2:"<<raiz2<<endl;
    } else {
        cout<<"Las ra�ces son complejas."<< endl;
        cout<<"Ra�z 1:"<< raiz1<<" + "<<raiz2<<"i"<<endl;
        cout<<"Ra�z 2:"<< raiz1<<" - "<<raiz2<<"i"<<endl;
    }
    return 0;
}