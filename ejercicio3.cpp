//ejercicio3_sumatoriaConFactorial
#include <iostream>
using namespace std;

int suma(int a);
int factorial(int b);

int main (){
	int sum, n;
	cout<<"ingrese un numero:";
	cin>>n;
	sum=suma(n);
	cout<<sum<<endl;
	return 0;
}

int suma(int a){
	int s, i;
	s=0;
	for (i=1; i<=a; i++){
		s=s+factorial(i)/2i;
	}
	return s;
}

int factorial(int b){
	int f, i;
	f=1;
	for (i=2; i<=b; i++){
		f=f*i;
	}
	return f;
}