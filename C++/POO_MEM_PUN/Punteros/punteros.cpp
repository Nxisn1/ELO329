#include<iostream>
using namespace std;

int  main (){

	int *a; //se crea el puntero (apunta a algún entero todavia no le decimos cual).
	int b = 8; 

	a=&b; //le decimos al puntero a que apunte a la dirección de memoria de b (para eso es el ampersand &).

	//int *pla = &a;
	
	cout<< *a <<endl; //el asterisco es para "muestrame lo que guarda esa direccion de memoria".
	cout<< a <<endl; //"muestrame a lo que apunta a" en este caso la dirección de memoria de b.
	cout<< &a <<endl; //muestra la dirección de memoria de a.

	//int *p2a = &a;
	//delete pla;

	return  0;
}