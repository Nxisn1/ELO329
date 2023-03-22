#include<iostream>

const int M=5;

struct server{
	int personas;
	int disp;
};


server * initServers(){
	int i;
	server *servidores;

	servidores = new server[M];

	for(i=0;i<M;i++){
		servidores[i].personas=0;
		servidores[i].disp=1;
	}
	return servidores;
}

server *checkServers(server *servidores){
	server *ptr;
	for(int i=0;i<5;i++){
		if(servidores[i].disp==1){
			ptr = &servidores[i];
			break;
		}else{ptr=NULL;}
	}
	return ptr;
}

void assignServer(server *servidor){
	int p;
	std::cout<< "Ingrese cantidad de personas: "; std::cin>>p;
	servidor->personas=p;	
} 


int main(){

	server *serv1;
	serv1 = initServers(); //aqui se hace el dibujo


	std::cout<< serv1[0].disp <<std::endl;
	server *l; 
	l = checkServers(serv1);
	std::cout<< l <<std::endl;

	delete[] serv1;

	return 0;
}