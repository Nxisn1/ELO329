public class Person {

    double x,y;
    private final int id;
    private static int nextId=0;

    public Person(){
        x = 0.0f;
        y = 0.0f;
    }{
        id = nextId++;
    }

    public void moveNorth(){
        this.y += 0.5;
    }

    public void moveSouth(){
        this.y -= 0.5;
    }

    public void moveWest(){
        this.y -= 0.5;
    }

    public void moveEast(){
        this.y += 0.5;
    }
    public void setX(double x) {
        this.x = x;
    }

    public void setY(double y) {
        this.y = y;
    }

    public double getX(){
        return x;
    }

    public double getY(){
        return y;
    }

    public String getHeader() {
        return "Person"+id;
    }

    public String getState(){
        return x+" "+y;
    }
}
