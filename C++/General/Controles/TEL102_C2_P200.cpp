#include <iostream>

const  int M=5;

struct  mesa{
	int  personas;
	int  used;
};

mesa * initMesas (){
	int i;
	mesa *local; //hace un puntero llamado "local" de tipo "mesa"
	local = new  mesa[M]; //le reserva espacio en el heap para guardar valores de "mesa"

	for(i=0;i<M;i++){
		local[i].personas = 0;
		local[i].used = 0;
	}
	return  local;
}

mesa *checkMesa(mesa *local){ //malo
	mesa *ptr;

	ptr = local; 

	std::cout<< ptr <<std::endl;

	return ptr;
}

int  main (){
	
	mesa *local1;
	local1 = initMesas (); // dibujar  este  estado.


	mesa l;
	l = checkMesa(local1); //weas mias
	std::cout<< local1 <<std::endl;

	
	delete []  local1; // liberar  memoria
	return  0;
}