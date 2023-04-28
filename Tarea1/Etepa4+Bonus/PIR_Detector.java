public class PIR_Detector {

    private Sensor s;
    private final double direction_angle;
    private final double sensing_angle;
    private final double sensing_range;
    private double cord_x;
    private double cord_y;
    private final int id;
    private static int nextId;
    static {
        nextId = 0;
    }

    public PIR_Detector(double direction_angle, double sensing_angle, double sensing_range, double cord_x, double cord_y) {
        s = new Sensor();
        s.setState(SwitchState.CLOSE);
        s.setPir(true);
        s.setDoor(false);
        s.setWindow(false);
        this.direction_angle = direction_angle;
        this.sensing_angle = sensing_angle;
        this.sensing_range = sensing_range;
        this.cord_x = cord_x;
        this.cord_y = cord_y;
    }{
        id = nextId++;
    }

    public void setY(float y){
        this.cord_y = y;
    }

    public void setX(float x){
        this.cord_x = x;
    }

    public String getHeader(){
        return "Pir"+id;
    }

    public int getState(){
        if(s.getState() == SwitchState.CLOSE){
            return 1;
        }else{
            return 0;
        }
    }

    public double getX(){
        return cord_x;
    }

    public double getY(){
        return cord_y;
    }


    public void detectMotion(Person p){
        double dist_person = Math.sqrt(Math.pow(p.getX()-cord_x,2)+Math.pow(p.getY()-cord_y,2)); //distancia entre dos puntos, rango y persona
        double angle = Math.atan((p.getX()-cord_x)/(p.getY()-cord_y));
        if(dist_person<=sensing_range){
            if(sensing_range-(sensing_angle/2)<=angle && angle<=sensing_range+(sensing_angle/2)){
                s.setState(SwitchState.OPEN);
            }
        }
        else{
            s.setState(SwitchState.CLOSE);
        }
    }

    public Sensor getSensor(){
        return s;
    }


}


