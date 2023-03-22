#include<iostream>
#include<cmath>

using namespace std;

int main(){

	int i, valor=10;
	int *a;

	a = new int[10];

	for(i = 0; i<10; i++){	

		a[i] = valor;
		valor += 10;
	}

	cout<< "Quinta posción (elem. 4): " << a[4] <<endl;
	cout<< "Quinta posción (elem. 4), como puntero: " << *(a+4) <<endl;
	return 0;
}

int main(){
	int *p1; 
	int *p2; //creamos dos punteros.
	int array[2]; //creamos el arreglo.

	array[0]=1;  
	array[1]=2; //le ponemos valoremos a los índices del arreglo.

	p1= array;	
	p2 = p1+1;

	cout<< fabs(p1-p2) <<endl; //el fabs es de valor absoluto esta en la libreria cmatch.

	return 0;
}