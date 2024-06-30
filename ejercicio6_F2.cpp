#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
string obtenerJugadaUsuario(){
    string opcion;
    while (true) {
        cout<<"Elige piedra, papel o tijeras:";
        cin>>opcion;
        if (opcion=="piedra" || opcion=="papel" || opcion=="tijeras"){
            return opcion;
        }else {
            cout<<"Opcion invalida."<<endl;
        }
    }
}
string obtenerJugadaComputadora(){
    string opcion[3]={"piedra", "papel", "tijeras"};
    int indice=rand()%3;
    return opcion[indice];
}
string determinarGanador(string opcion1, string opcion2){
    if (opcion1==opcion2){
        return "Empate";
    } else if ((opcion1=="piedra" && opcion2=="tijeras") ||
               (opcion1=="papel" && opcion2=="piedra") ||
               (opcion1=="tijeras" && opcion2=="papel")){
        return "Usuario";
    } else {
        return "Computadora";
    }
}
void PiedraPapelTijeras(){
    int puntaje1=0;
    int puntaje2=0;
    while (puntaje1<3 && puntaje2<3){
        cout<<"\n- Nueva ronda -"<<endl;
        string jugadaUsuario=obtenerJugadaUsuario();
        string jugadaComputadora=obtenerJugadaComputadora();
        cout<<"La computadora eligió:"<<jugadaComputadora<<endl;
        string ganador=determinarGanador(jugadaUsuario, jugadaComputadora);
        if (ganador=="Usuario"){
            cout<<"ganaste esta ronda"<<endl;
            puntaje1++;
        } else if (ganador=="Computadora"){
            cout<<"la computadora gano esta ronda"<<endl;
            puntaje2++;
        } else {
            cout<<"Esta ronda es un empate"<<endl;
        }
        cout<<"Puntaje actual - Usuario:"<<puntaje1<<", Computadora:"<<puntaje2<<endl;
    }
    if (puntaje1>puntaje2){
        cout<<"\n--ganaste el juego--"<<endl;
    } else {
        cout<<"\n--ganó la computadora--"<<endl;
    }
}
int main(){
    srand(static_cast<unsigned int>(time(0)));
    PiedraPapelTijeras();
    return 0;
}