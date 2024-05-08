
// Note Before Running Program in Vs code File Name Should single.java
// Note There Are Two Code in this Page



import java.util.Scanner;
class single 
{

    Scanner sc = new Scanner(System.in);

    class A 
    {
        int a ;
        void get()  
        {
            System.out.println("Enter A");
            a = sc.nextInt();
        }
    }


    class B  extends A  // in cpp class B : public A
    { 
        int b ;
        void getd() 
        {
            System.out.println("Enter b");
            b = sc.nextInt();
        }
        void sum () 
        {
            System.out.println("Sum is " + (a + b)); 
        }
    }


    public static void main(String [] args)  {
        single.B aa = new single().new B(); // in cpp =>  B aa;
        aa.get();
        aa.getd();
        aa.sum();
    }


}















// Code 2 

import java.util.Scanner;

public class single {
    static class A {
        protected int x;

        public void input() {
            System.out.println("Enter x");
            Scanner scanner = new Scanner(System.in);
            x = scanner.nextInt();
        }
    }

    // static class B {
    //     protected int y;

    //     public void get_y() {
    //         System.out.println("Enter Y");
    //         Scanner scanner = new Scanner(System.in);
    //         y = scanner.nextInt();
    //     }
    // }

    static class C extends A {
        protected int z;

        public void get_z() {
            System.out.println("Enter z");
            Scanner scanner = new Scanner(System.in);
            z = scanner.nextInt();
        }

        public void ans() {
            System.out.println("Sum IS " + (x + z));
        }
    }

    public static void main(String[] args) {
        C aa = new C();
        aa.input();
        // aa.get_y();
        aa.get_z();
        aa.ans();
    }
}

