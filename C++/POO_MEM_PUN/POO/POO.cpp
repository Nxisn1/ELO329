/*
Objeto: unidad que engloba en sí mismo variables y funciones necesarios para el tratamiento de esos datos 

Metodo: (acciones que hace el objeto) Función perteneciente a un determinado objeto
estan directamente conectadas a las instancias ya que ocupan sus atributos

Atributo: (caracteristicas del objeto) Variable perteneciente a un determinado objeto  

Objeto: entidad autónoma con una funcionalidad concreta y bien definida.
Clase: Especificación de las caract. de un conjunto de objetos. (patrón para construir objetos)
al definir la clase es la abstraccion del objeto

		UN OBJETO ES UNA INSTANCIA DE UNA CLASE 

Interfaz: parte visible de un objeto; conjunto de metodos y atributos que dispone un objeto para comunicarse con el
(básicamente esta es la parte pública del objeto) 

Herencia: Capacidad de crear nuevas clases basándose en clases base previamente definidas
sirve para reutilizar metodos de la clase madre (reutilizar código)	

Polimorfismo: propiedad según la cual un mismo objeto puede considerarse como perteneciente a 
				distintas clases

ACCESOS 

private:
	-solo son accesibles por los propios miembros de la clase, pero no desde funciones externas o desde
	funciones de clase derivadas 
	-acceso por defecto

public:
	-cualquier miembro público de una clase es accesible desde cualquier parte donde sea accesible el propio objeto

protected:
	- con las funciones externas ---> equivale a acceso privado
	- con las funciones derivadas --> equivale a acceso público 

Constructor: -inicializan un objeto de una determinada clase al mismo tiempo que se declara 
			 -mismo nombre que la clase que pertenecen
			 -no tienen retorno
			 -no pueden ser heredados
			 -siempre públicos (pq siempre se usan fuera de la función)
			 -si no creamos ninguno el ocompilador crea uno por defecto, sin parámetros y no hará nada
			 -será llamado siempre que se declare un objeto de esa clase  

Destructor: -metodo especial para eliminar un objeto de una determinada clase
			-liberan la memoria dinámica utilizada por dicho objeto. tmb recursos utilizados (ficheros, dispositivos)
			-parten con la virgulilla ~
			-no tienen retorno, parámetros, ni pueden ser heredados 
			-deben ser públicos 

Friend: es  para que una función pueda tener acceso a los privados de una clase sin que cambie de ser privado
		-no es tranferible 
		-no puede heredarse 
		-no es viceversa
*/


#include <iostream>
#include<stdlib.h>
using namespace std;

class Persona{ 
	
	private:   //Atributos (al estar en private es un encapsulamiento)
		int edad; 
		string nombre; 
	
	public:		//Metodos
		Persona(int,string); //Constructor (inicializa nuestros atributos) 
		void Leer();
		void Correr();
};

//Constructor
Persona::Persona(int _edad, string _nombre){
	edad = _edad;
	nombre = _nombre;	
};

void Persona::Leer(){ //el metodo leer pertenece a la clase persona
	cout<< "Soy "<< nombre <<" y estoy leyendo" <<endl;
}

void Persona::Correr(){
	cout<< "Soy "<< nombre <<" y estoy corriendo y tengo "<< edad <<endl;
}

int main(){
	Persona p1 = Persona(19, "Jose"); //forma larga 
	Persona p2(113,"María"); 				//forma corta


	p1.Leer();
	p2.Correr();

	return 0;
};
