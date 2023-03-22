#include<iostream>
#include<string>
using namespace std;

static int z = 1; // significa que solo es visisble para este archivo 
// extern float pi = 3.14159; // con extern es para mostrarlo en otro archivo (comentada para que no se caiga) 

/*
toda memoria estática se mantiene, es constante, no se borra, durante toda la ejecución queda 
ese espacio de memoria ocupado 
*/

int fun(){

	int x = 0;
	static int y = 0; 
	x = y++;

	return y;
}


int main(){

	int x;
	x = fun();
	cout<< x <<endl;
	
	return 0;
}