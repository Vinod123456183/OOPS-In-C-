import java.util.Scanner;
class 6-Single-Inheritance {

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
