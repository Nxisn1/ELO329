#include<iostream>
using namespace std;

class Fecha{
	private: //atributos 
		int dia,mes,ano;
	public: //metodos
		Fecha(int,int,int); //constructor1
		Fecha(long); //constructor2 pa los wnes que escriben la fecha como 20201122 (todo pegao y la escriben al revez)
		void mostrarfecha();
};

//constructor1
Fecha::Fecha(int _dia, int _mes, int _ano){
	dia = _dia;
	mes = _mes;
	ano = _ano;
};

//constructor2
Fecha::Fecha(long fecha){
	 ano = int(fecha/10000); //extraer el año
	 mes = int((fecha-ano*10000)/100); //extraer el mes
	 dia = int((fecha-ano*10000)-mes*100); //extraer el dia
}


void Fecha::mostrarfecha(){
	cout<< "La fecha es: "<<dia<<"/"<<mes<<"/"<<ano<<endl;
}



int main(){
	Fecha hoy(22,10,2020);
	Fecha ayer(20201021);

	hoy.mostrarfecha();
	ayer.mostrarfecha();
	
	return 0;
}