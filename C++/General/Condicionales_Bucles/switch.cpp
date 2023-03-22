#include<iostream>

int main(){
	
	int a;
	std::cout << "Ingrese un número "; std::cin >> a;

	switch (a){
		case 1:
			std::cout << "El número es 1" << std::endl;
			break;
	       	case 5:
                        std::cout << "El número es 5" << std::endl;
                        break;
 		case 10:
                        std::cout << "El número es 10" << std::endl;
                        break;
 		default:
                        std::cout << "El número no es 1,5 ni 10" << std::endl;
	}

	return 0;
}
