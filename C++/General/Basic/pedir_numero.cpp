#include <iostream> //librería principal in-out (entrada y salida de datos)

using namespace std; 

int main (){  //defininedo la función principal

	int numero; //definiendo que "número" será tipo int (se puede poner float u otro)  

	cout<<"Ingrese un número: "; //se le muestra al usuario para que de un número
	cin>>numero; //se le asigna a la variable lo que el user puso

	cout<<"\nEl número que ingresaste es: "<<numero<<"\n";	
		
	return 0; //retorno de la función principal
}
