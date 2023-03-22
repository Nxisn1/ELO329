#include<iostream>
#include<cmath> //para utilizar raíz cuadrada.
using namespace std;


//función que encuentra el vértice de la función cuadrática. recibe 3 parámetros de tipo float.
void vertice(float a,float b,float c){
	float vert_x, vert_y;
	vert_x = -b / (2*a);
	vert_y = (a*vert_x*vert_x)+(b*vert_x)+c;
	cout<<"El vértice de la parábola, como eje de simetria de esta, en coordenadas cartesianas es ---> "<<"("<<vert_x<<" , "<<vert_y<<")."<<endl;
};

//función que verifica la concavidad de la ec. cuadrática, recibiendo un único parámetro de tipo float. retorna un string diciendo si es cóncava o convexa.
void con(float a){
	if(a>0){
		cout<<"'convexa', en términos gráficos, la cuerda que une dos puntos cualesquiera en el \ngráfico queda por encima de la función. \n";
	}
	else{
		cout<<"'cóncava', en términos gráficos, la cuerda que une dos puntos cualesquiera en el \ngráfico queda por debajo de la función. \n";
	}
};

//función para encontrar las raíces de la ec. cuadrática, recibe los coeficientes de la ec. y calcula su discriminante. entrega que tipo de raíces tiene, de ser reales las entrega.
void raices(float a, float b, float c){ 
	float discriminante;
	float formula_1, formula_2, formula_3, formula_4, formula_5, formula_6, formula_7;
	discriminante = (b*b)-4*a*c;
	cout<<"Su discriminante es igual a: "<<discriminante<<endl;
	if(discriminante == 0){
		formula_5 = -b/(2*a);
		cout<<"Tiene una raíz, real. A efectos gráficos, corta una vez al eje x."<<endl;
		cout<<"Su única raíz es: "<<formula_5<<endl;
	}
	else if (discriminante > 0){ 
		formula_1 = -b + sqrt(discriminante);
		formula_2 = formula_1/ (2*a);
		formula_3 = -b - sqrt(discriminante);
		formula_4 = formula_3/ (2*a);
		cout<<"Tiene dos raíces, que son reales y distintas entre sí."<<endl;
		cout<<"Sus raíces X1 y X2, respectivamente son: "<<formula_2<<" y "<<formula_4<<endl;
	}else{
		formula_5 = -b / (2*a);
		formula_6 = sqrt(-discriminante)/(2*a);
		cout<<"Las soluciones complejas son:\n"<<formula_5<<"+"<<formula_6<<"i"<<endl;
		cout<<"Dos raíces imaginarias, a efectos gráficos, no corta al eje x."<<endl;
	}
};c

int main(){
	float formula_1, formula_2, formula_3, formula_4, formula_5, formula_6, formula_7;
	double a = 0, b, c, discriminante, x1, x2;
	cout<<"Análisis de una Ecuación Cuadrática."<<endl;
	cout<<"Proceda a introducir los coeficientes de la ecuación cuadrática."<<endl;  //Presentación del programa 
	cout<<"De la forma --> ax^2+bx+c."<<endl;
	while(a==0){
		cout<<"ADVERTENCIA: SI a = 0, DEJA DE SER UNA FUNCIÓN CUADRÁTICA."<<endl;
		cout<<"a = "; cin>>a;  
		cout<<"b = "; cin>>b;  //Se pide ingreso de coeficientes de la ecuación cuadratica pertinente
		cout<<"c = "; cin>>c;	
	}
	cout<<"El corte con el eje y, en coordenadas cartesianas es --> "<<"(0,y) = "<<"(0,"<<c<<")."<<endl;   
	cout<<"La parábola es "; con(a);
	raices(a,b,c);		//se llama a la función "raices" para calcular las soluciones de la ec. ingresada.
	vertice(a,b,c);		//se llama a la función "vertice" para encontrar el vértice de la ec. ingresada.
	return 0;
}