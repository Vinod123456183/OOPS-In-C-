// DErived class ne base class k function ko overwrite krna  
// To avoid it use final keyword on class A final void Print(){ // }

// Note Before Running Program in Vs code File Name Should Main.java



class A {
  void Print()  {
        System.out.println("Inside base Class");
  }
}

class B extends A {
    
  void Print()  {
        System.out.println("Inside Derived Class");
  }
}

class Main {
    public static void main (String [] args)  {

    B aa = new B();
    aa.Print();
    
}
}
