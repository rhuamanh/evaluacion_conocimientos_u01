#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int cn, vm, na;
    srand(time(nullptr));
    cout<<"Ingrese la cantidad de números aleatorios que desea generar:";
    cin>>cn;
    cout<<"Ingrese el valor máximo permitido para los números aleatorios:";
    cin >> vm;
    cout<<"Los números aleatorios generados son:"<<endl;
    for (int i = 0; i < cn; ++i) {
        na=rand()%(vm+1);
        cout<<na<<" ";
    }
    cout<<endl;
    return 0;
}