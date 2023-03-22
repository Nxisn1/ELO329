#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona{ //clase "padre"
	private:
		string nombre;
		int edad;
	public:
		Persona(string,int);
		void mostrarPersona();
};

//asi definimos que alumno es clase hija de persona; tendrá acceso a lo que esta en public
class Alumno : public Persona{
	private: //atributos
		string rol;
		float Nota_final;
	public: //metodos
		Alumno(string,int,string,float); //se ponen todos los atributos primero los del padre (orden)
		void mostrarAlumno();
};


//(constructor de la clase persona)
Persona::Persona(string _nombre, int _edad){
	nombre = _nombre;
	edad = _edad;
};

//constructor alumno, al final le ponemos lo que ya pedimos con la clase anterior
Alumno::Alumno(string _nombre,int _edad,string _rol,float _Nota_final) : Persona(_nombre,_edad){
	rol = _rol;
	Nota_final = _Nota_final;
};

void Persona::mostrarPersona(){
	cout<<"Nombre: "<< nombre <<endl;
	cout<<"Edad: "<< edad <<endl;
};	

void Alumno::mostrarAlumno(){
	mostrarPersona();
	cout<<"Rol: " << rol <<endl;
	cout<<"Nota final: "<< Nota_final <<endl;
};

int main(){
	Alumno alumno1("pepe",20,"20202402",15);
	alumno1.mostrarAlumno();
};