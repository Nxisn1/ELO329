#include<iostream>
#include<cstring>

struct est{
	char nombre[20];
	int peso;

};


int main(){
	
	int i, M_peso = 0;
	char pesado[20];
	est curso[3];

	for(i=0;i<3;i++){
		std::cout << "ingrese un nombre "; std::cin >> curso[i].nombre;
		std::cout << "ingrese su peso "; std::cin >> curso[i].peso;
	
	
		if(curso[i].peso > M_peso){
			M_peso = curso[i].peso;

		}
	}

	for(i=0;i<3;i++){
		if (curso[i].peso == M_peso){
			strcpy(pesado,curso[i].nombre);
		}

	}

	std::cout << "El más pesado es "<< pesado << " y pesa " << M_peso << std::endl;	

	return 0;
}
