#include<iostream>
#include<stdlib.h> //pa los string
using namespace std;

class Perro{
	private:
		string nombre, raza;
	public:
		Perro(string,string);
		~Perro(); //destructor
		void mostrardatos();
		void jugar();
};

Perro::Perro(string _nombre, string _raza){
	nombre= _nombre;
	raza = _raza;
}

//destructor 
Perro::~Perro(){
}

void Perro::mostrardatos(){
	cout<<"se llama "<<nombre<<" y su raza es "<<raza<<endl;
}

void Perro::jugar(){
	cout<<nombre<<" esta jugando"<<endl;
}

int main(){
	Perro perro1("fido", "doberman");

	perro1.mostrardatos();
	perro1.jugar();

	perro1.~Perro(); //destruimos el objeto

	return 0;
}