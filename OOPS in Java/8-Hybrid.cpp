import java.util.Scanner;
class A {
    protected 
        int a , b;
    void input_a_b() {
        Scanner Sc = new Scanner(System.in);
        System.err.println("Enter A :  ");
        a = Sc.nextInt();
        System.err.println("Enter B :  ");
        b = Sc.nextInt();
    }
}
class B extends A { 
    void sum() {
        System.err.println("Sum Is  - >  " + (a+b));
    }
}
class C extends A { 
    void mul() {
        System.err.println("mul Is ->  " + (a*b));
    }
}
public class Main {
    public static void main(String[] args) {
        B bb = new B() ;
        bb.input_a_b();
        bb.sum();
        System.out.println("\nNext Class Obj  : \n");
        C cc = new C() ;
        cc.input_a_b();
        cc.mul();
    }   
}
