#include<iostream>
#include<math.h> //esta librería incluye "pow" que es para elevar, pow(x,y) = x**y.

using namespace std;

int main(){
	float a,b, hipotenusa = 0;

	cout<<"Ingrese el valor del primer cateto: "; cin>>a;
	cout<<"Ingrese el valor del segundo cateto: "; cin>>b;

	a = pow(a,2);
	b = pow(b,2);
	hipotenusa = pow(a+b,0.5);
	
	cout<<"\nla hipotenusa vale: "<<hipotenusa<<endl;
	
	return 0;
}
