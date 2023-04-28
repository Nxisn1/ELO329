import javax.management.relation.RoleUnresolvedList;
import java.util.ArrayList;
import java.util.Base64;

public class Central {

    private ArrayList<Sensor> zone0;
    private final ArrayList<Person> people;

    private boolean isArmed;
    private Siren siren;

    private boolean Solo_perimetral;
    private int retardo;//esto es para el Bonus

    public Central(){
        zone0 = new ArrayList<Sensor>();
        people = new ArrayList<Person>();
        isArmed = false;
        siren = null;
        Solo_perimetral = false;
    }

    // Constructor de una Central con 4 zonas, este constructor es para el Bonus
    public Central(int r){
        retardo = r;
        people = new ArrayList<Person>();
        zone0 = new ArrayList<Sensor>();/* se pueden agregar más zonas
        zone1 = new ArrayList<Sensor>();
        zone2 = new ArrayList<Sensor>();
        people = new ArrayList<Person>();
        */isArmed = false;
        siren = null;
        Solo_perimetral = Boolean.FALSE;
    }

    public void arm() {
        isArmed=true;
    }
    public void disarm() {
        isArmed = false;
    }
    public void setSiren(Siren s) {
        siren =s;
    }



    public void addPerson(Person p){
        people.add(p);
    }

    public void setSolo_perimetral(Boolean solo_perimetral){
        Solo_perimetral = solo_perimetral;
    }


    public ArrayList<Person> getPeople(){
        return people;
    }

    public void addNewSensor(Sensor s){
        zone0.add(s);
    }
    public void checkZone(){
        if(isArmed){
            for(Sensor s:zone0){
                if(s.getState()==SwitchState.OPEN){
                    siren.play();
                    break;
                }
            }

        }
    }
    public String getHeader(){
        return "Central";
    }
    public int getState(){
        return isArmed?1:0;
    }

}
