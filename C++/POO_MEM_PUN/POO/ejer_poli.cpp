#include<iostream>
#include<stdlib.h>
using namespace std;

class Animal{
	protected:
		string nombre;
	public:
		Animal(string);
		virtual void comer();
};

Animal::Animal(string _nombre){
	nombre = _nombre;
};

void Animal::comer(){
	cout<<nombre<<" come";
};

class Humano : public Animal{
	private:
		int edad;
	public:
		Humano(string,int);
		void comer();
};

Humano::Humano(string _nombre, int _edad) : Animal(_nombre){
	edad = _edad;
};

void Humano::comer(){
	Animal::comer();
	cout<<" en su mesa, sentado en una silla "<<endl;
};

class Perro : public Animal{
	private:
		string raza;
	public:
		Perro(string,string);
		void comer();
};

Perro::Perro(string _nombre, string _raza) : Animal(_nombre){
	raza = _raza;
};

void Perro::comer(){
	Animal::comer();
	cout<<" en el suelo en su plato"<<endl;
};

int main(){

	Animal *vector[3];

	vector[0] = new Animal("pepe");
	vector[1] = new Perro("fido","labrador");
	vector[2] = new Humano("pipe",23);

	vector[0]->comer();
	cout<<"\n";
	vector[1]->comer();
	cout<<endl;
	vector[2]->comer();

	delete vector[0];
	delete vector[1];
	delete vector[2];

	return 0;
}