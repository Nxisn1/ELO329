#include<stdio.h> //este incluye el printf 
#include<iostream>
      

/* Definición de función "swap". Fíjate que las variables se reciben como puntero a esas variables. */
void swap (int *x, int *y){

  /*Declaramos una variable temporal*/
  int tmp;
  tmp = *x;
  *x = *y;
  *y = tmp;
}
      
int main(){
  int a, b;
  a = 1;
  b = 2;

  /*Llamamos a la función "swap" pasándole la dirección a las variables a y b.*/
  swap( &a, &b );
  /*Imprime los valores de a y b intercambiados*/
  printf(" a = %d b = %d\n", a, b ); //el %d es una wea de la biblio stadio. es pa que pongan los valores
  
  std::cout<<"a = "<< a << " "<<"b = "<< b <<std::endl;
  
  return 0;
}