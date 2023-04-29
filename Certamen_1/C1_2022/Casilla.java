public class Casilla {
    private int usuario_propietario;

    public Casilla() {
        this.usuario_propietario = 0;
    }

    public void setUsuario(int usuario){
        usuario_propietario = usuario;
    }

    public int getUsuario(){
        return usuario_propietario;
    }
}
