#include<iostream>
using namespace std;

class Rectangulo{
	private:
		int ancho;  //atributos
		int largo;
	public:
		Rectangulo(int, int); //constructor
		void Perimetro(); //metodos	
		void Area();
};

Rectangulo::Rectangulo(int ancho, int largo){
	ancho = this ancho;
	largo = this largo;
};

void Rectangulo::Perimetro(){
	cout<<"El perímetro del rectangulo es: "<< (2*largo)+(2*ancho)   <<endl;
}

void Rectangulo::Area(){
	cout<<"El área del rectangulo es: "<< largo*ancho <<endl;
}

int main(){
	int a, b;

	cout<< "Ingrese el ancho de su rectangulo: "; cin>>a;
	cout<< "Ingrese el largo de su rectangulo: "; cin>>b;

	Rectangulo r1(a,b);

	r1.Perimetro();
	r1.Area();

	return 0;
};