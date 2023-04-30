import java.util.InputMismatchException;
import java.util.Scanner;
import java.util.Random;

/*
Supuesto: en el enunciado no especifíca comando para salir antes del juego, por lo cual supongo que el programa solo termina cuando
de los muere (vida<0).
 */


public class Juego {

    // Método para creación de enemigos
    public static Enemigo crearEnemigoAleatorio(){
        String[] nombresEnemigos = {"Goblin", "Orco", "Esqueleto", "Zombie", "Araña gigante", "Ogro"};
        Random random = new Random();
        String nombre = nombresEnemigos[random.nextInt(nombresEnemigos.length)];
        int vida = random.nextInt(5) + 5; //Genera un número aleatorio entre 5 y 10
        int fuerza = random.nextInt(3) + 1;
        Enemigo enemigo = new Enemigo(nombre, vida, fuerza); //Fuerza del enemigo establecida en 1
        return enemigo;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner (System.in);
        Random random = new Random();
        
        System.out.println("Bienvenido a Mago Adventures");
        System.out.println("Ingrese el nombre de su mago");
        Mago m = new Mago(s.nextLine(), random.nextInt(10) + 10 , random.nextInt(10) + 1);

        // Código de lógica de lucha entre personaje Mago y enemigos
        boolean continuarLucha = true;
        while (continuarLucha && (m.estaVivo())) {
            // Creación de enemigo aleatorio
            Enemigo e = crearEnemigoAleatorio();

            while(e.estaVivo()) {
                // Acciones de mago
                System.out.println("Estado del mago: " + m.getNombre() + " (vida: " + m.getVida() + ")");
                System.out.println("Estado del enemigo: " + e.getNombre() + " (vida: " + e.getVida() + ")");
                System.out.println("Seleccione acción");
                System.out.println("1. Atacar ");
                System.out.println("2. Aumentar Vida ");
                int accion;
                try {
                    accion = s.nextInt();
                } catch (InputMismatchException i) {
                    accion = -1;
                }
                s.nextLine(); // Consumir línea en blanco después de leer el entero

                // Manejo de acciones según según selección
                switch (accion) {
                    case 1:
                        m.atacar(e);
                        System.out.println("Mago " + m.getNombre() + " ataca!");
                        break;
                    case 2:
                        m.aumentarVida();
                        System.out.println("Mago " + m.getNombre() + " se ha curado!");
                        break;
                    case -1:
                        System.out.println("Opción inválida. Se pierde el turno.");
                }

                // Turno del ataque enemigo
                e.atacar(m);

                // Verificación de fin de lucha
                if (!e.estaVivo()) {
                    System.out.println("El enemigo ha sido derrotado!");
                } else {
                    System.out.println("El enemigo ha sobrevivido al ataque!");
                }
                if (!m.estaVivo()) {
                    continuarLucha = false;
                    break;
                }
            }
        }

        // Resultados de la lucha
        System.out.println("La lucha ha terminado.");
        if (!m.estaVivo()) {
            System.out.println("El mago ha sido derrotado. ¡La victoria es del enemigo!");
        }
        s.close();
    }
    
}
