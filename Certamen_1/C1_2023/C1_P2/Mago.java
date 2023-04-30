import java.util.Random;

public class Mago extends Personaje{
    private int poder;

    public Mago(String nombre, int vida, int poder) {
        super(nombre, vida);
        this.poder = poder;
    }

    public void aumentarVida(){
        Random random = new Random();
        vida += random.nextInt(5);
    }


    @Override
    public void atacar(Personaje objetivo) {
        objetivo.vida -= poder;
    }
}
