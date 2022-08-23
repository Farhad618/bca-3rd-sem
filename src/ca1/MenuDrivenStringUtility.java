package ca1;
import java.util.Scanner;

public class MenuDrivenStringUtility {
    public static void help(){
        System.out.println("0 - Help");
        System.out.println("1 - Convert to uppercase.");
        System.out.println("2 - Convert to lowercase.");
        System.out.println("3 - Length of the string.");
        System.out.println("4 - Concat some text at the end.");
        System.out.println("5 - Replace all appearances.");
        System.out.println("6 - Extract text from the string");
        System.out.println("7 - Exit");
        System.out.println("");
    }
    public static void main(String[] args) {
        String txt = "";
        int usersChoice;
        Scanner getInput = new Scanner(System.in);

        System.out.println("Enter the string: ");
        txt = getInput.nextLine();

        help();

        do {
            System.out.print("Enter your choice: ");
            usersChoice = getInput.nextInt();

            switch (usersChoice) {
                case 0 -> help();
                case 1 -> System.out.println(txt.toUpperCase());
                case 2 -> System.out.println(txt.toLowerCase());
                case 3 -> System.out.println("Length: " + txt.length());
                case 4 -> {
                    System.out.println("Enter the string to concat at the end: ");
                    getInput.nextLine();
                    String temp = getInput.nextLine();
                    System.out.println(txt.concat(temp));
                }
                case 5 -> {
                    System.out.print("Enter the text to find: ");
                    getInput.nextLine();
                    String temp1 = getInput.nextLine();
                    System.out.print("Enter the text to replace: ");
                    String temp2 = getInput.nextLine();

                    if (txt.contains(temp1)) {
                        System.out.println(txt.replace(temp1, temp2));
                    } else {
                        System.out.println("Could not find " + temp1 + " in the string.");
                    }
                }
                case 6 -> {
                    System.out.print("Enter the start index: ");
                    int temp1 = getInput.nextInt();
                    System.out.print("Enter the end index: ");
                    int temp2 = getInput.nextInt();

                    System.out.println(txt.substring(temp1, temp2));
                }
                default -> System.out.println("You entered a wrong command.");
            }
        } while (usersChoice != 7);
        System.out.println("Quit");
    }
}
