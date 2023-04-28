import java.io.File;
import java.net.URL;

public class Siren {
    private URL dir;
    private boolean isSounding;
    private AePlayWave aWave;

    public Siren (String soundFileName){
        try {
            dir = new File(soundFileName).toURI().toURL();
        }
        catch (Exception exc){
            exc.printStackTrace(System.out);
        }
        isSounding = false;
    }
    public void play(){
        aWave= new AePlayWave(dir);
        aWave.start();
        isSounding = true;
        System.out.println("la alarma está sonando. ");
    }
    public void stop(){
        isSounding = false;
        aWave.stopSounding();
        System.out.println("la alarma no está sonando. ");
    }
    public String getHeader() {
        return "Siren";
    }
    public int getState() {
        return isSounding?1:0;
    }

}
