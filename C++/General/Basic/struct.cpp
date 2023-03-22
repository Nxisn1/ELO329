#include<iostream>


struct empleado{
       	char nom[40];
      	char ap[40];
       	int sueldo;
};


int main(){
	
	empleado ep1;

	std::cout<< "Ingrese nombre del empleado "; std::cin>>ep1.nom;
	std::cout<< "Ingrese apellido del empleado  "; std::cin>>ep1.ap;
        std::cout<< "Ingrese sueldo del empleado "; std::cin>>ep1.sueldo;


	std::cout << "El empleado " << ep1.nom << " " << ep1.ap << " gana " << ep1.sueldo << std::endl;

	return 0;
}
