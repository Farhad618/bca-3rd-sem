package ca1;
import java.util.Scanner;

public class PasswordCheck {
    public static void main(String[] args) {
        int password = 123;
        int userInput;
        Scanner getInput = new Scanner(System.in);

        do {
            System.out.print("Enter the password: ");
            userInput = getInput.nextInt();
        } while (password != userInput);

        System.out.println("User logged in successfully.");
    }

}
