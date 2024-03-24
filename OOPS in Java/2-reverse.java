import java.util.Scanner;

public class Main {
  
    static class Add {
        int x = 0;
        
        void getdata(int y) {
            x = y;
        }
        
        int putdata() {
            int reversedNumber = 0;
            int originalNumber = x; // Store the original number for printing later
            while (x != 0) {
                int digit = x % 10; 
                reversedNumber = reversedNumber * 10 + digit; 
                x /= 10;
            }
            return reversedNumber; // Return the reversed number
        }
    }
    
    public static void main(String[] args) {
        Add aa = new Add();
        aa.getdata(123);
        int ans = aa.putdata();
        
        System.out.println(ans);
    }
}
