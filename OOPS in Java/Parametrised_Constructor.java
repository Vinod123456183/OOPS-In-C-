class B{
    int a =1 ;
    int b =2;

    public B(int a , int b)  {
        this.a = a;
        this.b = b;
    }


    public void  Print() {
        System.out.println(a);
        System.out.println(b);
    }
}

public class P {
    public static void main(String [] args)  {
        B b = new B(11 , 22 );
        b.Print();

    }
}
