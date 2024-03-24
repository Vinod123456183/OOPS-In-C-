class Main{
    static class A     {
        int a ;
        String s;
        static String Clg_Name = "GEhU";
        
        A(int aa , String ss ) {
            s = ss;
            a = aa;
        }
        
        void display() {
            System.out.println(" " + a);
            System.out.println(" " + s);
            System.out.println(" "  + Clg_Name);
        }
        
        static void Diss() {
            Clg_Name = "Rama";
        }
    }
    public static void main(String [] args)     {
    
        A abc = new A(1 , "shiva");
        abc.display();
        abc.Diss();
      
        System.out.println("\n");
      
        abc.display();
    }
}

