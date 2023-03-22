                                                                                      #include<iostream>

using namespace std;

int main(){
	int x,y, suma=0, resta=0, multiplicacion=0, division=0;  //las operaciones hay que definirlas para que no tengan otro valor
	
	cout<<"Ingrese el primer valor: "; //pidiendo el valor
	cin>>x; //asignando el valor a la variable

	cout<<"Ingrese un segundo valor: "; cin>>y; //lo mismo que arriba (tmb se puede escribir asi)

	suma = x+y;
       	resta = x-y;
       	multiplicacion = x*y;
       	division = x/y;

	cout<<"\nLa suma es: "<<suma<<endl; //el "endl" es para que de un salto de linea al final 
	cout<<"\nLa resta es: "<<resta<<endl;
	cout<<"\nLa multiplicacion es: "<<multiplicacion<<endl;
	cout<<"\nLa division es: "<<division<<endl;

 	return 0;
}

