#include<iostream>

int main(){
	
	int a, i=1;

	std::cout << "Ingrese un número "; std::cin >> a;
	
	do{
		std::cout << i << std::endl;
		i++;

	}while(i<=a);


	return 0;
}



/*
 
   el  do while su gracia es que primero hace lo que esta en do y luego ve la condición, 
se mantendrá así hasta que se rompa la condición.

 */
