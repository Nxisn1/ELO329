public class Door {
    private MagneticSensor magneticSensor;
    private State state;
    private final int id;
    private static int nextId;
    static {
        nextId = 0;
    }

    public Door () {
        magneticSensor = new MagneticSensor();
        magneticSensor.setState(SwitchState.CLOSE);
        state = state.CLOSE;
        id = nextId++;
    }
    public void open() {
        state = State.OPEN;
        magneticSensor.moveMagnetAwayFromSwitch();
    }
    public void close() {
        state = State.CLOSE;
        magneticSensor.putMagnetNearSwitch();
    }
    public String getHeader(){
        return "d"+id;
    }
    public int getState(){
        if(state == state.CLOSE){
            return 1;
        }else{
            return 0;
        }
    }

    public int getId() {
        return id;
    }

    public MagneticSensor getMagneticSensor() {
        return magneticSensor;
    }


}
