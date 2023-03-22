//ARRAY, ARREGLO, VECTOR. SON LA MISMAS WEAS, O SEA LISTAS.

#include<iostream>

struct estudiante{
	char name[20];
	int edad;
};

int main(){
	estudiante curso[3]; //AQUI SE CREA EL ARRAY

	for(int i=0;i<3;i++){
		std::cout << "ingrese un nombre "; std::cin >> curso[i].name;
		std::cout << "ingrese su edad "; std::cin >> curso[i].edad; 
	}

	std::cout<< curso[0].name <<std::endl;

	return 0;
}