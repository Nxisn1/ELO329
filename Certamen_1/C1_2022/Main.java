/*
        Este programa asume que el usuario sabe usarlo, por lo cual NO maneja input's incorrectos, es decir se pueden quitar
    movimientos (puede elegir una posción ya ocupada) y sigue de forma infinita si nadie gana. Igual que ingresar índices
    fuera de rango, tira error.
*/

/*
        El buen uso de este programa es: empieza, el primer jugador tiene que elegir una posición del 0 al 15 que forma una
    cuadricula de 4x4, luego sigue el segundo. hasta que uno de los dos logre una fila o una columna completa, de ser así
    es el ganador.
 */

public class Main {
    public static void main(String[] args) {
        System.out.println("Gato 4x4");
        TickTackToe gato = new TickTackToe();
        gato.play();
    }

}