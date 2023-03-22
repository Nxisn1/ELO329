#include<iostream>

using namespace std;

int main(){
	float a,b, resultado = 0;

	cout<<"Ingrese un valor: "; cin>>a;
	cout<<"Ingresa otro valor: "; cin>>b;	

	resultado = (a/b) + 1;
	
	cout.precision(2);  //para redondear el resultado a 2 dígitos
	cout<<"\nEl resultado es: "<<resultado<<endl;

	return 0; 
}
