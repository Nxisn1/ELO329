import java.util.*;

public class TickTackToe {
    private Casilla[] casillas = new Casilla[16];
    private boolean flag = true;
    private int winner;
    TickTackToe(){}
    public void play(){
        for(int i=0; i<16; i++) {
            casillas[i] = new Casilla();
        }
        while(flag) {
            System.out.println("Jugador 1 elige tu movimiento (0-15): ");
            preguntarMovimiento(1);
            imprimirEscenario();
            termino();
            if(flag) {
                System.out.println("Jugador 2 elige tu movimiento (0-15): ");
                preguntarMovimiento(2);
                imprimirEscenario();
                termino();
            }
        }
        imprimirMensajeFinal();
    };

    public void imprimirEscenario(){
        for(int i=0; i<16; i++){
            System.out.print(casillas[i].getUsuario()+" ");
            if((i+1)%4==0){ //para imprimirlo 4x4
                System.out.println("");
            }
        }
    };

    public Casilla[] preguntarMovimiento(int jugador){
        Scanner entrada = new Scanner(System.in);
        int mov = entrada.nextInt();
        casillas[mov].setUsuario(jugador);
        return casillas;
    };


    public boolean termino(){
        for(int i=0; i<16; i+=4){ //verificar ganardor fila
        if(casillas[i].getUsuario()==casillas[i+1].getUsuario() && casillas[i+1].getUsuario()==casillas[i+2].getUsuario() && casillas[i+2].getUsuario()==casillas[i+3].getUsuario() && casillas[i].getUsuario()!=0 && casillas[i+1].getUsuario()!=0 && casillas[i+2].getUsuario()!=0 && casillas[i+3].getUsuario()!=0) {
            winner = casillas[i].getUsuario();
            flag = false;
            return false; //hay ganador
            }
        }
        for(int i=0;i<4;i++) { //verificar ganador columnas
            if(casillas[i].getUsuario()==casillas[i+4].getUsuario() && casillas[i+4].getUsuario()==casillas[i+8].getUsuario() && casillas[i+8].getUsuario()==casillas[i+12].getUsuario() && casillas[i].getUsuario()!=0 && casillas[i+4].getUsuario()!=0 && casillas[i+8].getUsuario()!=0 && casillas[i+12].getUsuario()!=0) {
                winner = casillas[i].getUsuario();
                flag = false;
                return false; //hay ganador
            }
        }
        return true;
    };

    public void imprimirMensajeFinal(){
        if(winner==1) {
            System.out.println("Felicitaciones, El jugador 1 es el ganador");
        }
        else if(winner==2) {
            System.out.println("Felicitaciones, El jugador 2 es el ganador");
        }else{
            System.out.println("no hay ganadores");
        }
    };


}
