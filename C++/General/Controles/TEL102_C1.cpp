#include<iostream>
#include<cmath>

#define N 100

struct  valores{
	double  aprox[N];
	double  diff[N];
	int n;
};


double po(double x, int y){
	int resul=1;
	while(int i=1 != y){
		resul = x*x;
		i++;
		return resul;
	}
}

double lnAprox(double x, int n){
	float resultado=0;

	for(int i=1;n;i++){
		po(-1,i+1)*(po(x,i)/i);
	return resultado;
	}	
}


double precision(double x, int n,int p){
	double r=0,lo=0;
	lo=log(x);  
	r = lnAprox(x,n)-lo;
	if(r<0){r*=-1;}
	
	if(lo<=p){" ";}

	else{};
}



//  Segmento  principal
int  main (){
	
	double x; int n; double p;
	std::cout<< "Ingrese un valor para x: "; std::cin>>x;
	std::cout<< "Ingrese un valor para n: "; std::cin>>n;
	std::cout<< "Ingrese presición: "; std::cin>>p;
	//std::cout<< " "<< lnAprox(x,n)<< std::endl;

	return  0;
}