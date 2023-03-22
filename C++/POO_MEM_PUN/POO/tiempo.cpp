#include<iostream>

class Tiempo{
	private:
		int seg,min,horas;
	public:
		Tiempo(int, int, int);
		Tiempo(long);
		void mostrarhora();
};

//constructor 1
Tiempo::Tiempo(int _horas, int _min, int _seg){
	seg = _seg;
	min = _min;
	horas = _horas;
}

//constructor 2
Tiempo::Tiempo(long tiempo){
	seg = int(tiempo%60);
	min = int((tiempo%3600)/60);
	horas = int(tiempo/3600);
}

void Tiempo::mostrarhora(){
	std::cout<< "la hora es: "<<horas<<"h:"<<min<<"m:"<<seg<<"s"<<std::endl;
}

int main(){

	Tiempo t2(7400);

	t2.mostrarhora();
	return 0;
}