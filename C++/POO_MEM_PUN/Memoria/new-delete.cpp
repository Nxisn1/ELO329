#include <iostream>

int main(){

	int casa = 55; 
	int *dir; 

	dir = new int; // reservo en el heap 4 bytes, para meter numeros.

	*dir = 99;


	std::cout << "Dirección " << dir <<std::endl; 
	std::cout << "Valor " << * dir << std::endl;
	std::cout << "Dirección del puntero en el stack: " << &dir << std::endl;
	
	return 0;
}


int main(){

	int *var = new int; //creamos el puntero y reservamos un espacio en memoria
	//...
	delete var; //aquí liberamos el espacio reservado

	return 0;
}