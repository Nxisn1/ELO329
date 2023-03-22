#include <iostream>
	

class numeroComplejo{

	private:
		double parteReal;
		double parteImaginaria;

	public:
		numeroComplejo(double R, double I);
		//metodos
		double getR();
		double getI();
		void printComplex();
		void printNorm();
		void printInverse();
};	

numeroComplejo::numeroComplejo(double R,double I){  //aqui definimos el constructor
	parteReal= R;
	parteImaginaria= I;

}



int main(){



	return 0;
}