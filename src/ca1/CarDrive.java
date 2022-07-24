package ca1;
import java.util.Scanner;

public class CarDrive {
    public static void help(){
        System.out.println("HELP  - Help");
        System.out.println("START - To start the car engine.");
        System.out.println("RUN   - To run the car forward.");
        System.out.println("STOP  - To stop the car engine.");
        System.out.println("QUIT  - Exit");
        System.out.println("");
    }
    public static void main(String[] args) {
        String previousStatus = "STOP";
        String carStatus = "HELP";
        Scanner getInput = new Scanner(System.in);

        do {
            switch (carStatus) {
                case "HELP" -> help();
                case "START" -> {
                    if (previousStatus.equals("STOP")) {
                        System.out.println("The engine is started successfully.");
                        previousStatus = carStatus;
                    } else if (previousStatus.equals("START")) {
                        System.out.println("Car is already started.");
                    } else if (previousStatus.equals("RUN")) {
                        System.out.println("Car is already running, no need to start again.");
                    }
                }
                case "RUN" -> {
                    if (previousStatus.equals("STOP")) {
                        System.out.println("Start the engine first.");
                    } else if (previousStatus.equals("START")) {
                        System.out.println("Car is running successfully.");
                        previousStatus = carStatus;
                    } else if (previousStatus.equals("RUN")) {
                        System.out.println("Car is already running, no need to run again.");
                    }
                }
                case "STOP" -> {
                    if (previousStatus.equals("STOP")) {
                        System.out.println("Car is already Stopped.");
                    } else if (previousStatus.equals("START")) {
                        System.out.println("The engine is stopped successfully.");
                        previousStatus = carStatus;
                    } else if (previousStatus.equals("RUN")) {
                        System.out.println("The engine is stopped successfully.");
                        previousStatus = carStatus;
                    }
                }
                default -> System.out.println("You entered a wrong command.");
            }

            System.out.print("Command the car: ");
            carStatus = getInput.nextLine().toUpperCase();
        } while (!carStatus.equals("QUIT"));
        System.out.println("Quit");
    }
}
