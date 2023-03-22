#include<iostream>
using namespace std;

int main(){
	float Npr, Nt, Npa, Nota_final=0;
	
	cout<<"Nota de practicas del alumno: "; cin>>Npr;
	cout<<"Nota teórica del alumno: "; cin>>Nt;
	cout<<"Nota participación del alumno: "; cin>>Npa;

	Npr = Npr * 0.3; //tmb se puede escibir como en python con *=
	Nt *= 0.6;
	Npa *= 0.1;

	Nota_final = (Npr+Nt+Npa);
	
	cout.precision(3);
	cout<<"\nLa nota final del alumno es: "<<Nota_final<<endl;	

	return 0;
}
