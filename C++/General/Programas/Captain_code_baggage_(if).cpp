#include<iostream>

int main(){
	int limit = 45;
	int baggage;
	char name[20]; 

	std::cout<<"¿Cuánto equipaje llevará? en kilogramos. "; std::cin>>baggage;
	std::cout<<"¿Cómo te llamai ?"; std::cin>>name;

	if (baggage>limit)
		std::cout<<"papi te vai a tener q devolver"<<std::endl;

	else if (baggage == limit)
		std::cout<<"pasai raspando"<<std::endl;

	else
		std::cout<<"0 atao niun color"<<std::endl;

	std::cout<<"asi nomas po "<<name<<std::endl;

	return 0;
}