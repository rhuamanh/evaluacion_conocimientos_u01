#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int cn, vm, na;
    srand(time(nullptr));
    cout<<"Ingrese la cantidad de n�meros aleatorios que desea generar:";
    cin>>cn;
    cout<<"Ingrese el valor m�ximo permitido para los n�meros aleatorios:";
    cin >> vm;
    cout<<"Los n�meros aleatorios generados son:"<<endl;
    for (int i = 0; i < cn; ++i) {
        na=rand()%(vm+1);
        cout<<na<<" ";
    }
    cout<<endl;
    return 0;
}