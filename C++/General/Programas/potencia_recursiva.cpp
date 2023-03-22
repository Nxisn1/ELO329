#include<iostream>
using namespace std;

double potencia(double base, int exponente){
	double var=0;

	if(exponente==0){
		var = 1;
	}else{
		var = base*potencia(base,exponente-1);
	}
	return var;
}



int main(){
	double x; int y;

	cout<<"ingrese una base: "; cin>>x;
	cout<<"ingrese un exponente "; cin>>y;

	cout<< potencia(x,y)<<endl;

	return 0;
}