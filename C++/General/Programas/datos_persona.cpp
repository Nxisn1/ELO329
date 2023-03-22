#include<iostream>

using namespace std;


int main(){
	int edad;
	char sexo[10]; //eso es para darle que lea 10 caracteres (recordar que solo se ocupan 9 por la weaita al final que explicaron en clase)
	float altura;

	cout<<"Ingrese su edad: ";   cin>>edad;
	cout<<"Indique su sexo: ";   cin>>sexo;
	cout<<"Ingrese su altura en metros: "; cin>>altura;

	cout<<"\nSu edad es: "<<edad<<endl;
	cout<<"\nSu sexo es: "<<sexo<<endl;
        cout<<"\nSu altura es: "<<altura<<endl;	
 
		return 0;
}
