public abstract class Personaje implements Metodos{

    protected String nombre;
    protected int vida;

    public Personaje(String nombre, int vida) {
        this.nombre = nombre;
        this.vida = vida;
    }

    @Override
    public abstract void atacar(Personaje objetivo);

    @Override
    public void recibirDano(int cantidad) {
        vida -= cantidad;
    }

    @Override
    public boolean estaVivo() {
        if(getVida()<0) {
            return false;
        }else
            return true;
    }

    public String getNombre() {
        return nombre;
    }

    public int getVida() {
        return vida;
    }

}

