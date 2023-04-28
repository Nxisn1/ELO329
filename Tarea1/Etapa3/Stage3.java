import java.awt.event.PaintEvent;
import java.io.File;
import java.io.IOException;
import java.io.PipedReader;
import java.io.PrintStream;
import java.util.ArrayList;
import java.util.Scanner;
import java.util.InputMismatchException;


public class Stage3 {

    private ArrayList<Door> doors;
    private ArrayList<Window> windows;
    private ArrayList<PIR_Detector> pir;

    private Central central;
    private Siren siren;
    public Stage3() {
        doors = new ArrayList<Door>();
        windows = new ArrayList<Window>();
        pir = new ArrayList<PIR_Detector>();
    }
    public void readConfiguration(Scanner in){
        // reading <#_doors> <#_windows> <#_PIRs>
        central = new Central();
        int numDoors = in.nextInt();
        for (int i = 0; i < numDoors; i++) {
            Door d = new Door();
            doors.add(d);
            central.addNewSensor(d.getMagneticSensor()); //raztor, mati hace new sensor y puras weas xd
        }
        int numWindows = in.nextInt();
        for (int i = 0; i < numWindows; i++) {
            Window w = new Window();
            windows.add(w);
            central.addNewSensor(w.getMagneticSensor());
        }
        int numPIRs = in.nextInt();
        for(int i = 0; i < numPIRs; i++){
            in.nextLine();
            double x, y, directionAngle, sensingAngle, sensingRange;
            try{
                x = in.nextDouble();
                y = in.nextDouble();
                directionAngle = in.nextDouble();
                sensingAngle = in.nextDouble();
                sensingRange = in.nextDouble();
            } catch (InputMismatchException e) {
                System.err.println("Error: formato de coordenadas incorrecto en la línea " + (i+3));
                return; // Salir del método si hay un error
            }
            PIR_Detector p = new PIR_Detector(x,y,directionAngle,sensingAngle,sensingRange);
            pir.add(p);
            central.addNewSensor((p.getSensor()));
            }
        in.nextLine();
        String soundFile = in.next();
        siren = new Siren(soundFile);
        central.setSiren(siren);
        in.close();
        }

    public void executeUserInteraction (Scanner in, PrintStream out){
        in.useLocale(java.util.Locale.US);
        String command;
        char parameter;
        int i;
        int step=1;
        printHeader(out);
        boolean done = false;
        while (!done) {
            printState(step++, out);
            command = in.next();
            if (command.charAt(0)=='x') break;
            switch (command.charAt(0)) {
                case 'd':
                    i = Integer.parseInt(command.substring(1));
                    parameter = in.next().charAt(0);
                    if (parameter== 'o')
                        doors.get(i).open();
                    else
                        doors.get(i).close();
                    break;
                case 'w':
                    i = Integer.parseInt(command.substring(1));
                    parameter = in.next().charAt(0);
                    if (parameter== 'o')
                        windows.get(i).open(); //el mati le pone las weas de siren.plaY()
                    else
                        windows.get(i).close();
                    break;
                case 'k':
                    parameter = in.next().charAt(0);
                    switch (parameter) {
                        case 'a': //all, armar t0d0
                            central.arm();
                            System.out.println("alarma armada");
                            break;
                        case 'p': //armar perimetro
                            //central.perimeter(); pero no hay perímetro en la etapa 2
                            break;
                        case 'd': //desarmar
                            central.disarm();
                            System.out.println("alarma desarmada");
                            break;
                    }
                case 'c':
                    // Este caso crea una persona con las coordenadas que se ingresan
                    // y mueve la persona con las flechas
                    //i = Integer.parseInt(command.substring(1));

                    Person persona = new Person();
                    double double1 = in.nextDouble();
                    double double2 = in.nextDouble();
                    //Crear una persona con las coordenadas que se ingresan y añadir al array
                    persona.setX(double1);
                    persona.setY(double2);
                    central.getPeople().add(persona);
                    break;

                case 'p':
                    //este caso mueve la persona con wasd
                    i = Integer.parseInt(command.substring(1));
                    parameter = in.next().charAt(0);
                    if(parameter == 'w'){
                        central.getPeople().get(i).moveNorth();
                    }else if(parameter == 's') {
                    central.getPeople().get(i).moveSouth();
                    }else if(parameter == 'd') {
                    central.getPeople().get(i).moveWest();
                    }else if(parameter == 'a') {
                    central.getPeople().get(i).moveEast();
                    }
                    break;

                case 'x':
                    done = true;

                default:
                    System.out.println("Error, comando invalido");
                    break;
            }if(!done){
                out.println();
            }
            central.checkZone();
        }
    }
    public void printHeader(PrintStream out) {
        out.print("Step");
        for (int i = 0; i < doors.size(); i++)
            out.print("\t" + doors.get(i).getHeader());
        for (int i = 0; i < windows.size(); i++)
            out.print("\t" + windows.get(i).getHeader());
        for (PIR_Detector pir : pir) out.print("\t" + pir.getHeader());
        out.println("\t"+siren.getHeader());
        out.println("\t"+central.getHeader());
        //for (Person person : central.getPeople()) out.print("\t" + person.getHeader());

        out.println();
    }
    public void printState(int step, PrintStream out){
        out.print(step);
        for (int i=0; i < doors.size(); i++) //for(Door d: doors) out.print("\t"+d.getState());
            out.print("\t"+doors.get(i).getState());
        for (int i=0; i < windows.size(); i++)  //for(Window w: windows) out.print("\t"+w.getState());
            out.print("\t"+windows.get(i).getHeader());
        for (PIR_Detector pir : pir) out.print("\t" + pir.getState());
        out.println("\t"+siren.getState());
        out.println("\t"+central.getState());
        try {
            for (Person person : central.getPeople()) out.print("\t" + person.getState());
        }catch (NullPointerException e) {
            System.out.println("No hay personas");
        }
        out.println();
    }
    public static void main(String [] args) throws IOException {
        if (args.length != 1) {
            System.out.println("Usage: java Stage1 <configurationFile.txt>");
            System.exit(-1);
        }
        Scanner in = new Scanner(new File(args[0]));
        System.out.println("File: " + args[0]);
        Stage3 stage = new Stage3();
        stage.readConfiguration(in);
        stage.executeUserInteraction(new Scanner(System.in), new PrintStream(new File("output.csv")));
    }


}
