//Metodos Constructores y Modificadores (Getters y Setters)

#include<stdlib.h>
#include<iostream>
using namespace std;

class Punto{
	private: //atributos
		int x,y;
	public: //metodos
 		Punto();
 		void setPunto(int,int); //sirve para asigarle valores fuera del constructor
 		//Esto es útil cuando tenemos muchas varibales o cuando no queremos ponerle valor altok
 		
 		int getPuntoX(); //para mostrar las weaitas del privado fuera de las funciones de la clase
 		int getPuntoY();
}; //siempre el corchte final de la clase tiene que tener punto y coma. o si no tira error

Punto::Punto(){
}

//establecemos valores a los atributos
void Punto::setPunto(int _x, int _y){
	x = _x;
	y = _y; 
}

int Punto::getPuntoX(){
	return x;
}

int Punto::getPuntoY(){
	return y;
}

int main(){
	Punto punto1;

	punto1.setPunto(15,10);
	cout<< punto1.getPuntoX() <<endl;
	cout<< punto1.getPuntoY() <<endl;

	return 0;
}