import java.util.ArrayList;

public class Central {

    private ArrayList<Sensor> zone0;
    private final ArrayList<Person> people;

    private boolean isArmed;
    private Siren siren;

    public Central(){
        zone0 = new ArrayList<Sensor>();
        people = new ArrayList<Person>();
        isArmed = false;
        siren = null;
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
