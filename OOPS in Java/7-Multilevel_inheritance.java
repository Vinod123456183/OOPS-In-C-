import java.util.Scanner;
    class A {
        protected int x ; 

        void input_x()  {
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter X") ;
            x = sc.nextInt();
        }
    }
    class B extends A {
        protected int y ;
        void input_y() {
            System.out.println("Enter Y");
            Scanner sc = new Scanner(System.in);
            y = sc.nextInt();
        }
    }
    class C extends B {
        protected int z ; 
        void input_z()  {
            System.out.println("Enter z");
            Scanner sc = new Scanner(System.in);
            z = sc.nextInt();
        }

        void sum ()  {
            System.out.println("Sum is " + (x+y+z));
        }
    }


public class Main {    //Main
  
    public static void main(String[] args) {
        C aa = new C() ;
        aa.input_x();
        aa.input_y();
        aa.input_z();
        aa.sum();
    }
    
}
