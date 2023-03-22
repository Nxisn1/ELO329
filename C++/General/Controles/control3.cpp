#include<iostream>
using namespace std;

// Las tildes han sido omitidas

const int cobro = 1000; // Desfalco por transaccion
const int n_becas = 4; // Numero de becas

class Beca{
    public:
        Beca(int id, int saldo);
        int getId();
        int getSaldo();
        void depositar(int d); // Deposita cantidad d de dinero
        bool retirar(int d); // Retira cantidad d de dinero
    private:
        int idBeca;
        int saldo;
};

class Universidad{
    public:
        Universidad(int n_becas, Beca *becas);
        ~Universidad();
        bool transaccion(int id1, int id2,int d); // Transaccion entre becas con d dinero
        void estadoUniv(); // Muestra becas de la universidad
    private:
        Beca *becas;
        int n_becas;
        int ganancias;
};

