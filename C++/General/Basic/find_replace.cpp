#include<iostream>
#include<string>
using namespace std;

//función para calcular potencias y raíces 
float pot(float base, float exp){ 
	double res=0; 

	if (exp == 0){
		res =  1;
	}else{
		res = base*pot(base,exp-1);
	} 
	return res;
}

void lim(string ecu, char var, float tnd){
	float res = 0;
	cout<<"Ingrese ecuación: "; cin>>ecu;
	cout<<var<<" "<<"a cuanto tiende: "; cin>>tnd;

}


int main(){
	
	string x; int tnd=0, resultado=0; int f;
	//cout<<"ingrese función: "; cin>>x;
	x = "hola";

	//x.replace(0,1,"qa");
	f = x.find("o");
	cout<<f<<endl;

	return 0;
};