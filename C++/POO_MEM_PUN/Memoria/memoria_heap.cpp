//puntero

#include <iostream>

int main(){

	int casa = 55; //compilador guarda automáticamente el valor 55 en stack (4 bytes)
	int *dir; //puntero, compilador guarda en stack la dirección de memoria del heap
	//asterisco aqui significa que es un puntero 

	dir = &casa; // & = dirección de memoria, o sea que el puntero "dir" estará "apuntando" a la memoria 
									                              //donde esta guardado la variable casa

	std::cout << "Dirección " << dir << " " << &casa <<std::endl; 

	std::cout << "Valor " << *dir <<std::endl;
	//este asterisco su función es distinta, este sirve para dinferenciación, o sea que no muestra la 
	//dirección, si no que muetsra loo que hay dentro de esa dirreción. 

	return 0;
}