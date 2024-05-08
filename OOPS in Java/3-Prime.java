// Note Before Running Program File Name Should Main.java



import java.util.Scanner;
public class Main {

    static class Prime {
        int n = 0 ;
        
        void getdata()  {
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter Value of N ");
            n = sc.nextInt();
        }

        void putdata() {
            int i = 1 , count = 0;
            for(; i<= n; i++)  {
                if(n%i == 0)  {
                    count++;
                }
            }

            if(count  ==  2)  {
                System.out.println("Yes");
            } else  {
                System.out.println("! Yes");
            }
        }

    }

    public static void main(String [] args)  {
        Prime aa = new Prime();
        aa.getdata();
        aa.putdata();
    }
}
