public class Enemigo extends Personaje {
    private int fuerza;

    public Enemigo(String nombre, int vida, int fuerza) {
        super(nombre, vida);
        this.fuerza = fuerza;
    }


    @Override
    public void atacar(Personaje objetivo) {
        objetivo.vida -= fuerza;
    }
}
