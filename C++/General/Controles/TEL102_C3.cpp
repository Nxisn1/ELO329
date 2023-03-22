#include "control3.cpp"


Beca::Beca(int id, int saldo){
	idBeca = id;
	saldo = this->saldo;  
}

int Beca::getId(){
	return idBeca;
}

int Beca::getSaldo(){
	return saldo;
}

void Beca::depositar(int d){
	saldo = d+saldo;
}

bool Beca::retirar(int d){
	if(saldo<d){
		return false;
	}else{
		saldo = saldo - d;
		return true;
	}
};


Universidad::Universidad(int n_becas, Beca *becas){
	n_becas = n_becas;
	becas = becas;
}


bool Universidad::transaccion(int id1, int id2,int d){
	if(((id1-d)-cobro)<0){
		return false;
	}else{
		id1 -= cobro;
		id1 -= d;
		id2 += d;
		return true;
	}
}


int main(){

	return 0;
}

