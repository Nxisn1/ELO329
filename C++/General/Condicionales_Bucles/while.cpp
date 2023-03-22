#include<iostream>

int main(){
	
	int a, i=1;

	std::cout << "Ingrese un número "; std::cin >> a;
	
	while(i<=a){
		std::cout << i << std::endl;
		i++;
	}

	return 0;
}
