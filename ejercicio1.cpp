//Ejercicio1_Calculadora
#include <iostream>
using namespace std;
int main (){
	char op;
	float op1, op2, r;
	cout<<"ingrese el primer operando:"<<endl;
	cin>>op1;
	cout<<"ingrese el segundo operando:"<<endl;
	cin>>op2;
	cout<<"ingrese el operador:"<<endl;
	cin>>op;
	switch(op){
		case '+':
			r=op1+op2;
			cout<<r<<endl;
			break;
		case '-':
			r=op1-op2;
			cout<<r<<endl;
			break;
		case '*':
			r=op1*op2;
			cout<<r<<endl;
			break;
		case '/':
			r=op1/op2;
			cout<<r<<endl;
			break;
	}
	return 0;
}  