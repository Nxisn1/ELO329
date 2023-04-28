public class Sensor {

    private SwitchState state;
    private boolean isPir;
    private boolean isDoor;
    private boolean isWindow;

    public Sensor(){
        this(SwitchState.OPEN);
    }
    public Sensor(SwitchState s) {
        state = s;
    }
    public SwitchState getState(){
        return state;
    }
    protected void setState(SwitchState s) {
        state = s;
    }

    public String toString(){
        if (state== SwitchState.CLOSE)
            return "1";
        else
            return "0";
    }



    public void setPir(boolean isPir) {
        this.isPir = isPir;
    }

    public void setDoor(boolean isDoor) {
        this.isDoor = isDoor;
    }

    public void setWindow(boolean isWindow) {
        this.isWindow = isWindow;
    }



    public boolean isPir() {
        return isPir;
    }

    public boolean isDoor() {
        return isDoor;
    }

    public boolean isWindow() {
        return isWindow;
    }
}
