#include<iostream>
using namespace std;

int main(int argc, char const *argv[]){

	cout<< argv[2] <<endl; //eso significa que es el argumento numero 2 de todos los argumentos que le pase 
	return 0;
}
	
	
/*

le entregamos cosas por la consola
al ejecutar el ejecutable podemos poner variables y asi no hacer un cin  
argc =  es la cantidad de cosas que le damos cuando lo ejecutamos
*argv = puntero que tiene todos los string que le pasamos al ejecutable

ejemplo

./argc_argv a b c d //al ejecutar el ejecutable le damos parametros
'b' //nos da esto porque es el 2  


*/