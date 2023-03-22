#include<iostream>
#include<cstring>

class Animal{
public:
	Animal(){
		nom=NULL;
		patas=-1;
	}
	Animal(char *nom, int patas){
		this->nom=new char[20];
		strcpy(this->nom, nom);
		this->patas=patas;
	}
	~Animal(){
		delete[] nom;
		nom = NULL;
		patas =-1;
	}

	void setNom(char *nombre){
		if(nom==NULL){
			nom=new char[20];
		}
		strcpy(nom,nombre);
	}

	void setLegs(int legs){
		patas=legs;
	}

	void sound(){
		std::cout<<"no se como hace el animal"<<std::endl;
	}

	void printDatos(){
		if(nom==NULL){
			std::cout<<"no hay datos"<<std::endl;
		}else{
			std::cout<<"nombre "<<nom<<". cant. patas : "<<patas<<std::endl;
		}
	}
	int checklegs(){
		return patas;
	}

protected:
	char *nom;
	int patas;
};



class Perro: public Animal{
	public:
		Perro(){
			Animal();
			patas=4;
		}
		Perro(char *nom): Animal(nom,4){};

		void sound(){
			if(nom==NULL){
			std::cout<<"el perro hace guau"<<std::endl;
			}else{
				std::cout<<nom<<" hace goof goof"<<std::endl;
			} 
		}
};



int main(){

	Animal a;
	Perro b;

	char dato[20] = "juan";
	char dato1[20] = "spike";

	a.printDatos();
	b.printDatos();

	a.setNom(dato);
	b.setNom(dato1);

	a.setLegs(2);


	a.sound();
	b.sound();

	a.printDatos();
	b.printDatos();

	a.~Animal();
	b.~Animal();

	std::cout<<"el perro b tiene "<< b.checklegs()<<" patas "<<std::endl;

	return 0;
}