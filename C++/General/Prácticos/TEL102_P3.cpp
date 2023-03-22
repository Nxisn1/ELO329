#include "practico3.h"
#include<string>

void Voto::setCodigo(int cod){
	int cod_voto;
	if(cod_voto==cod){
		cod=cod_voto;
	}else{
		std::cout<<"Voto ya asignado.";}
}

Urna::Urna(int cod_mesa, int votantes){
	votos = new Voto[votantes];
	libro_firmas = new Padron[votantes];
	int vot,apr=0,rec=0,nul;
	for(int i=0;i<votantes;i++){
		std::cout<<"1. Apruebo\n2. Rechazo\nIngrese su voto: "; std::cin>>vot;
		if(vot==1){
			apr+=1;
		}else if(vot==2){
			rec+=1;
		}else{
			nul+=1;
		}
	}
	std::cout<<"Apruebo: "<<apr<<"\nRechazo: "<<rec<<"\n blanco/nulo: "<<nul;
}

Urna::~Urna(){
	delete votos;
	delete libro_firmas;
}

bool Urna::votar(int cod_voto,int opcion){
	bool ft;
	for (int i = 0; i < sizeof(libro_firmas)/sizeof(libro_firmas[0]); i++){
  		int cod; 
  		if (cod == cod_voto)
 	 		ft=false;
 	 	else
			ft=true;
	}
	return ft;
}

//bool Urna::votar(int cod_voto,int opcion){}
Voto::Voto(){};
Padron::Padron(){};
Padron::~Padron(){};



int main(){
	int cod_mesa, can_vot;
	
	std::cout<<"Ingrese el código de la mesa: "; std::cin>>cod_mesa;
	std::cout<<"Ingrese la cantidad de votantes: "; std::cin>>can_vot;

	Urna(cod_mesa,can_vot);

	return 0;
}