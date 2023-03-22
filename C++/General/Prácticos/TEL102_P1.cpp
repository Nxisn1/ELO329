//Maestro Poke++

#include<iostream>
#include<cstring>


// Estructura  Poke

struct poke{
	char  nombre [40];
	float  peso;
};



// Acá se crean  las  funciones
//Easy mode
poke fillPoke(){
	char a[10];float b;
	std::cout << "Ingrese el nombre del poke ";      std::cin >> a;
	std::cout << "Ingrese el peso de " << a << " ";  std::cin >> b;	
};

//Medium mode
poke heavierPoke(poke team[6]){
	int i, M_peso = 0;
	char pesado[20];

	for(i=0;i<6;i++){ //para buscar el más pesado
		if(team[i].peso > M_peso){
                        M_peso = team[i].peso;
                }
        }
        for(i=0;i<6;i++){  //para buscar quien es el más pesado
                if (team[i].peso == M_peso){
                        strcpy(pesado,team[i].nombre);
                }
        }

        std::cout << "El poke  más pesado es "<< pesado << " con " << M_peso << " [kg]" << std::endl;
};

// Segmento  principal Hard mode
int  main (){
	int i, M_peso = 0;
	char pesado[20];
	poke team[6];

	for(i=0;i<6;i++){
		std::cout << "ingrese el nombre de un poke "; std::cin >> team[i].nombre;
                std::cout << "ingrese el peso del poke "; std::cin >> team[i].peso;
		
	}

        for(i=0;i<6;i++){
                if(team[i].peso > M_peso){
                        M_peso = team[i].peso;
                }
        }
        for(i=0;i<6;i++){ 
                if (team[i].peso == M_peso){
                        strcpy(pesado,team[i].nombre);
                }
        }

        std::cout << "El poke  más pesado es "<< pesado << " con " << M_peso << " [kg] (por favor pongalo a dieta)."<<std::endl;

	return  0;
} 

