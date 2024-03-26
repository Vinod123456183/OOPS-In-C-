
final class A { 
  final void inp() {
    System.out.println("Base Class");
  }
}
class B {
  void inp1() {
    System.out.println("base Class 1");
  }
}

class C extends A { // bec of final keyword in class we cannot inherit class A
  void inp2() {
    System.out.println("Derived Class");
  }
}

public class Main {

  public static void main(String[] args) {
    C aa = new C();
    aa.inp(); 
    aa.inp1();
    aa.inp2(); 
}

}
