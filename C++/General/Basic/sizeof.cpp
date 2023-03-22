#include<iostream>
#include<string>
using namespace std;

int main(){
	string team[3] = {"Sasha", "Phillip", "Yogota"};

	int length = (sizeof(team) / sizeof(team[0])); //el sizeof te da el cuanto pesa el tipo de dato que es.
													//por ejemplo si fuera de tipo int entregaria 4
													//en este caso es de tipo string y cada uno pesa 32 bytes
													//primero vemos el total de bytes que tiene en este caso 96 
													// y le dividimos los bytes que tiene el primero 32, 
													//esto nos entrega la cantidad de datos que tiene el array
	int i = 0;
	while(i < length){ //en el for puedes inicializar variables en dentro del () pero aqui no es buena idea pq hace un bucle infinito

		cout<<team[i]<<endl;
		i++;
	}
	return 0; 
}