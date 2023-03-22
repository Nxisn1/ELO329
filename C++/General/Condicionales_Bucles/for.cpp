#include<iostream>

int main(){
	int a, i=0; //esto va a empezar desde el 0
	
	std::cout << "Ingrese un valor "; std::cin>>a;
	
	for(i; i<=a; i++){
		std::cout << i << std::endl;	
	}

	return 0;
}


/*
 
   En general:
	 for (sentencia_incial; expresión-booleana; sentencia_final) {

 		 }



	Uso corriente:
		for (i=0; i<N; i++) {
			}
	
	Equivale a:

		i=0
		while(i<N){
		i++
			}

*/

