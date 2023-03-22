#include<iostream>

float pot(int base, int exp) //creando la función (el float del principio es que lo que retornará será un float)	
{
	int i, suma = 1;
	for (i=1; i<=exp; i++){
		suma *= base;
	}
	return suma;
}



int main()
{

	int a, b;

	std::cout << "Ingrese base: "; std::cin>>a;
	std::cout << "Ingrese exponente: "; std::cin>>b;

	std::cout << "a**b es = "  << pot(a,b) << std::endl; 

	return 0;
}
