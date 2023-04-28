import java.io.File;
import java.io.IOException;
import java.io.PrintStream;
import java.util.ArrayList;
import java.util.Scanner;

public class Stage2 {

    private ArrayList<Door> doors;
    private ArrayList<Window> windows;
    private Central central;
    private Siren siren;
    public Stage2() {
        doors = new ArrayList<Door>();
        windows = new ArrayList<Window>();
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
        in.nextLine();
        String soundFile = in.next();
        siren = new Siren(soundFile);
        central.setSiren(siren);
        in.close();
    }
    public void executeUserInteraction (Scanner in, PrintStream out){
        String command;
        char parameter;
        int i;
        int step=0;
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
        out.println("\t"+siren.getHeader());
        out.println("\t"+central.getHeader());
        out.println();
    }
    public void printState(int step, PrintStream out){
        out.print(step);
        for (int i=0; i < doors.size(); i++) //for(Door d: doors) out.print("\t"+d.getState());
            out.print("\t"+doors.get(i).getState());
        for (int i=0; i < windows.size(); i++)  //for(Window w: windows) out.print("\t"+w.getState());
            out.print("\t"+windows.get(i).getHeader());
        out.println("\t"+siren.getState());
        out.println("\t"+central.getState());
        out.println();
    }
    public static void main(String [] args) throws IOException {
        if (args.length != 1) {
            System.out.println("Usage: java Stage1 <configurationFile.txt>");
            System.exit(-1);
        }
        Scanner in = new Scanner(new File(args[0]));
        System.out.println("File: " + args[0]);
        Stage2 stage = new Stage2();
        stage.readConfiguration(in);
        stage.executeUserInteraction(new Scanner(System.in), new PrintStream(new File("output.csv")));
    }


}
