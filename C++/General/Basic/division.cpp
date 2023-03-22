#include<iostream>
using namespace std;

int main(){
	float a,b,c,d, resultado = 0;
	
	cout<<"Ingrese un valor para a: "; cin>>a;
	cout<<"Ingrese un valor para b: "; cin>>b;
	cout<<"Ingrese un valor para c: "; cin>>c;
	cout<<"Ingrese un valor para d: "; cin>>d;

	resultado = (a+b)/(c+d);

	cout.precision(3);
	cout<<"\nEl resultado es: "<<resultado<<endl;

	return 0;
}
