#include<iostream>


int main(){

	int a;
	std::cout << "Ingrese un numero "; std::cin>>a;
 
	if(a<10){
		std::cout<<"El numero es de un dígito"<<std::endl;
	}else{
		std::cout<<"El número tiene más de un dígito"<<std::endl;
	}

	return 0;
}	
