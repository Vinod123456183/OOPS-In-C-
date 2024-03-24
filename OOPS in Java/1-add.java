import java.util.Scanner;
public class Main {
    static class Add {
        int a = 0 , b = 0 ;
        void getdata() {
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter The Value Of A : ");
            a = sc.nextInt();
            System.out.println("Enter The Value Of B : ");
            b = sc.nextInt();
        }
        void putdata()  {
            int sum = 0;
            sum = a + b;
            System.out.println("Sum = " + sum);
        }
    }
    public static void main(String [] args) {
        Add aa = new Add();
        aa.getdata();
        aa.putdata();
    }

}
