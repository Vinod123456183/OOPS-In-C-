import java.util.Scanner;

public class ISBNValidator {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the ISBN number:");
        String s = scanner.nextLine();

        if (s.length() != 10) {
            System.out.println("Illegal ISBN");
            return;
        }

        try {
            int sum = 0;
            for (int i = 0; i < 10; i++) {
                int digit = Character.getNumericValue(s.charAt(i));
                sum += ( i * digit );
            }

            if (sum % 11 == 0) {
                System.out.println("Legal ISBN");
            } else {
                System.out.println("Illegal ISBN");
            }
        } catch (NumberFormatException e) {
            System.out.println("Illegal ISBN");
        }
    }
}
