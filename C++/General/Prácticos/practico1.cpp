#include <iostream>
#include <cstring>
using namespace std;

//  Estructura Poke
struct  poke{
	char  nombre [40];
	float  peso;
};

// Ac ́a se crean  las  funciones 
// easy mode
poke fillPoke(){
	poke p;
	cout<<"Ingrese le nombre del poke: "; cin>>p.nombre;
	cout<<"ingrese el peso de "<<p.nombre<<" : "; cin>>p.peso;
	return p;
};

//normal mode
poke heavierPoke(poke team[6]){
	poke p;
	p.peso=0.0;
	for(int i =0; i<6; i++){
		if(team[i].peso > p.peso){
			p.peso = team[i].peso;  //ojo con el orden de esto pq no me sirvió al revéz
			strcpy(p.nombre,team[i].nombre);
		}
	}
	return p;	
};

//  Segmento  principal
int  main (){
	poke heavier;
	poke team[6];
	for(int i=0; i<6; i++ ){
		team [i]=fillPoke();
		cout<<"\n";
	};
	cout<<"El poke más pesado es "<< heavierPoke(team).nombre;
	cout<<" con "<<heavierPoke(team).peso<<" [kg]."<<endl;
	return  0;
};
