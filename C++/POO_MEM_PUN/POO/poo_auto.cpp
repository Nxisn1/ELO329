#include<iostream>

class Auto{
	private:
		int kilometraje;
	public: //cualquier funcion (o main) del .cpp o .h puede acceder a los atributos publicos
		Auto(); //es el constructor por defecto
		~Auto(); //es el destructor (el fideo es el que lo hace. virgulilla "~")
		void printKilometraje();
		Auto(int km);
};

Auto::Auto(int km){
	kilometraje = km;
};


void Auto::printKilometraje(){
	std::cout<<kilometraje<<std::endl;
	return;
};


int main(){
	Auto mcqueen=Auto(238784);
	mcqueen.printKilometraje();
	return 0;
};