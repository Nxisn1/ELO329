//length - find - erase

#include<iostream>
#include<string>

using namespace std;

int main(){
	
	string str = "hola como estas";
	string elBarto = "Bartholomew Jojo Simpson";

cout<< str.length()<<endl; //'15' es para cuantos caracteres tiene un string (se cuentan los espacios) 

cout<< str.find("como") <<endl; //'5' es para encontrar en que índice empieza lo que ponemos

cout<< str.erase(4) <<endl; // 'hola' cortar el string, con un argumento corta todo desde ese índice
cout<< elBarto.erase(4,12) <<endl; //con dos arg. corta desde el 4, empieza a contar desde 0 hasta el segundo arg

	return 0;
}