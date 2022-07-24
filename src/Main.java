import java.util.Locale;

public class Main {
    public static void main(String[] args) {
        String str1 = "Madras";
        String str2 = "Delhi";
        String str3 = "Delhi";
        String str4 = "DelABC";
        String str5 = "delhi";
        String str6 = "DELHI";
        String str7 = "      DELHI         ";
        int num1 = 1234;


        System.out.println(str1); //
        //System.out.println(String.valueOf(num1)); //

        /*
        System.out.println(str7.trim()); // DELHI*/

        System.out.println(str1.toCharArray()); // 1234
/*
        System.out.println(str5.toUpperCase()); // DELHI
        System.out.println(str6.toUpperCase()); // DELHI

        System.out.println(str6.toLowerCase()); // delhi
        System.out.println(str5.toLowerCase()); // delhi

        System.out.println(str1.substring(0)); // Madras
        System.out.println(str1.substring(1)); // adras
        System.out.println(str1.substring(6)); // [EMPTY]
        // System.out.println(str1.substring(7)); // Range [7, 6) out of bounds for length 6
        System.out.println(str1.substring(1, 5)); // adra

        System.out.println(str5.equalsIgnoreCase(str6)); // true

        System.out.println(str1.length()); // 6

        System.out.println(str1.indexOf("Mad")); // 0
        System.out.println(str1.indexOf("Maf")); // -1
        System.out.println(str1.indexOf('f')); // -1
        System.out.println(str1.indexOf('a')); // 1
        System.out.println(str1.indexOf('a', 2)); // 4
        System.out.println(str1.lastIndexOf('a')); // 4
        System.out.println(str1.lastIndexOf('a', 2)); // 1

        System.out.println(str1.equals(str2)); // false
        System.out.println(str3.equals(str2)); // true

        System.out.println(str2.compareTo(str3)); // 0
        System.out.println(str1.compareTo(str2)); // 9
        System.out.println(str2.compareTo(str1)); // -9

        System.out.println(str1.charAt(0)); // M
        // System.out.println(str1.charAt(6)); // Index 6 out of bounds for length 6
        // System.out.println(str1.charAt(-1)); // Index 6 out of bounds for length 6

        System.out.println(str1 + " " + str2); // Madras Delhi
        System.out.println(str1 + 5 + str2); // Madras5Delhi
        */
    }
}