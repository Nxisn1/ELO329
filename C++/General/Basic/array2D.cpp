//también llamados matrices 

#include<iostream>	

int main(){

	int keypad[3][3] = { //creamos una matriz de 3x3, el primer valor son las filas que son horizontales
 		{1,2,3},         // y el segundo son para las columnas que son verticales. para localizar sería
		{4,5,6},		 // con la coordenada (y,x). como todo también parte de 0.
		{7,8,9}
	};

	std::cout << keypad[2][1] << std::endl;  //accederiamos al 8.

	return 0;
}