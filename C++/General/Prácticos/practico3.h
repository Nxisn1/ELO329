#include <iostream>

class Voto{
	public:
		int codigo;
		int opcion;

		Voto();
		void setCodigo(int cod);
		void setOpcion(int cod, int opt);
		int leer(int cod);
};

class Padron{
	public:
		bool *firma;

		Padron(); //los constructores tienen new
		~Padron(); //los destructores tienen delete
		void sign();
		bool checkFirma();
};

class Urna{
	public:
	 	bool sellada;
		int codigo;
		Padron *libro_firmas; //liberar y en el destructor de padron hay que eliminar de todos
		Voto *votos; 
		int sufragios;

	 	Urna(int cod_mesa, int votantes); //hacer el arreglo de voto con el numero de wnes, sufragios=0;codigo=cod_mesa
		~Urna(); 
		bool votar(int cod_voto,int opcion);
		void escrutar(int cod_mesa); //el codigo de mesa es para abrir la urna, escrutar es contar los votos 
};
