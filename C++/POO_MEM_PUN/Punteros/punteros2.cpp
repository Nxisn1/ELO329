#include<iostream>
#include<string>
using namespace std;

struct alumno{

	string nombre;
	int edad; 
};


int main(){
	alumno *pointer;
	alumno *pointer2;
	alumno a;

	

	int ed=10; 
	
	pointer=&a;
	
	pointer->edad = ed;
	 

	cout<< pointer <<endl;
	cout<< pointer->edad <<endl;
	cout<< pointer->nombre <<endl;

	return 0;
}                 	