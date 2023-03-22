#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona{
	private:
		string nombre;
		int edad;
	public:
		Persona(string,int);
		void mostrarPersona();
};

//constructor persona
Persona::Persona(string _nombre, int _edad){
	nombre = _nombre;
	edad = _edad;
};

void Persona::mostrarPersona(){
	cout<< "Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<" años"<<endl;
}; 

class Empleado : public Persona{
	private:
		string trabajo;
	public:	
		Empleado(string,int,string);
		void mostrarEmpleado();
};

//constructor empleado
Empleado::Empleado(string _nombre, int _edad, string _trabajo) : Persona(_nombre,_edad){
	trabajo = _trabajo;
};

void Empleado::mostrarEmpleado(){
	mostrarPersona();
	cout<<"Trabajo: "<<trabajo<<endl;
};

class Estudiante : public Persona{
	private:
		float notaFinal;
	public:
		Estudiante(string,int,float);
		void mostrarEstudiante();
};

//constructor estudiante
Estudiante::Estudiante(string _nombre,int _edad,float _notaFinal) : Persona(_nombre, _edad){
	notaFinal = _notaFinal;
};

void Estudiante::mostrarEstudiante(){
	mostrarPersona();
	cout<<"Nota final: "<<notaFinal<<endl;
};

class Universitario : public Estudiante{
	private:
		string carrera;
	public:
		Universitario(string,int,float,string);
		void mostrarUniversitario();
}; //acuerdate del puto punto y coma al final de las clase pq es un error de mierda 

Universitario::Universitario(string _nombre, int _edad, float _notaFinal, string _carrera) : Estudiante(_nombre, _edad, _notaFinal){
	carrera = _carrera;
};

void Universitario::mostrarUniversitario(){
	mostrarEstudiante();
	if (carrera=="Ingeniería") {cout<<"k grande, lo mas grande dps de maradona: "<<carrera<<endl;}
	else {cout<<"Ah, Carrera: "<<carrera<<endl;}
};

int main(){

	Universitario p1("sape",24,55,"Ingeniería");
	p1.mostrarUniversitario();

	Universitario p2("pepe",12,1,"Filosofía}");
	p2.mostrarUniversitario();

	return 0;
};