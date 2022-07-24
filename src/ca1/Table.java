package ca1;
import java.util.Scanner;

public class Table {
    public static void main(String[] args) {
        int rowOfTable = 3, columnOfTable = 3, i = 1, j = 1;
        Scanner getInput = new Scanner(System.in);

        System.out.print("Enter a number of rows: ");
        rowOfTable = getInput.nextInt();
        System.out.print("Enter a number of columns: ");
        columnOfTable = getInput.nextInt();
        System.out.println("Multiplication table is: ");

        do {
            do {
                System.out.print(i * j + "\t");
                j += 1;
            } while (j <= columnOfTable);
            j = 1;
            System.out.println("");
            i += 1;
        } while (i <= rowOfTable);
    }
}
