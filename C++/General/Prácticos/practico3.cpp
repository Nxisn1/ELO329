#include "practico3.h"

// Implementaciones
// Class Voto
Voto::Voto(){
	codigo=-1;
	opcion=-1;
}

void Voto::setCodigo(int cod){
	codigo=cod;
}

void Voto::setOpcion(int cod, int opt){
	if(cod!=codigo)
		std::cout << "Código erróneo, voto no marcado" << std::endl;
	else
		opcion = (opt > 2 || opt < 1 ) ? 0 : opt;	
}

int Voto::leer(int cod){
	if(cod!=codigo){
//		std::cout << "Código erróneo, voto no leído" << std::endl;
		return -1;
	}else{
		return opcion;
	}
}

// Class Registro

Padron::Padron(){
	firma = new bool;
	*firma = false;
}

Padron::~Padron(){
	delete firma;
	firma = NULL;
}

void Padron::sign(){
	if(checkFirma()){
		std::cout << "Padron ya fue firmado." << std::endl;
	}else{
		std::cout << "Firmando padron... Ok" << std::endl;
		*firma=true;
	}
}

bool Padron::checkFirma(){
	return *firma;
}	


// Class Urna
Urna::Urna (int cod_mesa, int votantes){
	sellada = true;
	codigo = cod_mesa;
	libro_firmas = new Padron[votantes];
	votos = new Voto[votantes];
	sufragios = 0;
}

Urna::~Urna(){
	delete[] libro_firmas;
	delete[] votos;
	codigo = -1;
	sellada = true;
	sufragios = 0;
	libro_firmas = NULL;
	votos = NULL;
}

bool Urna::votar(int cod_voto, int opcion){
	if (votos[cod_voto].leer(cod_voto)==-1){
		votos[cod_voto].setCodigo(cod_voto);
		votos[cod_voto].setOpcion(cod_voto, opcion);
		libro_firmas[cod_voto].sign();
		sufragios++;
		return true;
	}else{
		return false;
	}

}

void Urna::escrutar(int cod_mesa){

	int i, suma=0;
	if(cod_mesa != codigo){
		std::cout << "Codigo incorrecto" << std::endl;
	} else if (sellada == false){
		std::cout << "Mesa ya escrutada" << std::endl;
	}else{
		int pizarra[3]={0,0,0};
		sellada = false;
		for(i=0; suma<sufragios; i++){
			if(libro_firmas[i].checkFirma() && votos[i].leer(i)!=-1){
				pizarra[votos[i].leer(i)]++;
				suma++;
			}
			
			libro_firmas[i].~Padron();
		}

		std::cout << "Recuento de Votos: " << std::endl;
		std::cout << "1. Apruebo: " << pizarra[1] << std::endl;
		std::cout << "2. Rechazo: " << pizarra[2] << std::endl;
		std::cout << "Nulo/Blanco: " << pizarra[0] << std::endl;


	}

}

// main 

int main(){

	Urna mesa(1,10);
	int i, opcion;

	for(i=0;i<10;i++){

		std::cout << "Su preferencia es \n1. Apruebo\n2. Rechazo\nVoto: ";
		std::cin >> opcion;
		mesa.votar(i, opcion);
	}

//	std::cout << mesa.sufragios << std::endl;
	mesa.escrutar(1);
	mesa.~Urna();

	return 0;
}
x