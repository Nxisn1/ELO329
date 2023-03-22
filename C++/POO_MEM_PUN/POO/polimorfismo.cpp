#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona{
	private:
		string nombre;
		int edad;
	public:
		Persona(string,int);
		virtual void mostrar(); //virtual es pa decir que tiene polimorfismo, y solo va en la clase padre
};

Persona::Persona(string _nombre, int _edad){
	 nombre = _nombre;
	 edad = _edad;
};

void Persona::mostrar(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
};

class Alumno : public Persona{
	private:
		float notaFinal;
	public:
		Alumno(string,int,float);
		void mostrar();
};

Alumno::Alumno(string _nombre,int _edad,float _notaFinal) : Persona(_nombre,_edad){
	notaFinal = _notaFinal;
};

void Alumno::mostrar(){
	Persona::mostrar();
	cout<<"Nota final: "<<notaFinal<<endl;
};

class Profesor : public Persona{
 	private:
 		string materia;
 	public:
 		Profesor(string,int,string);
 		void mostrar();
};

Profesor::Profesor(string _nombre,int _edad,string _materia) : Persona(_nombre, _edad){
	materia = _materia;
}

void Profesor::mostrar(){
	Persona::mostrar();
	cout<<"Materia: "<<materia<<endl;
}

int  main(){
	Persona *vector[3];

	vector[0] = new Alumno("jose",19,55);
	vector[1] = new Alumno("pepe",23,12);
	vector[2] = new Profesor("fido",34,"mate");
 
	vector[0]->mostrar();
	cout<<"\n";
	vector[1]->mostrar();
	cout<<endl; //cumple la misma función que el \n de arriba, son distintas maneras de hacerlo
	vector[2]->mostrar();
	//ocupamos la función función (mostrar) pero dependiendo de la clase actua de diferente forma
	delete vector[0]; //necesario pq ocupamos new
	delete vector[1];
	delete vector[2];
};