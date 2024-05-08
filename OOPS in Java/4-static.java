// Note Before Running Program in Vs code File Name Should Main.java




class Main
{
    static class A 
    {
        int a ;
        static String s = "GEhu";
        
        A(int aa ) 
        {
            a = aa;
        }
        
        void display() 
        {
            System.out.println(" " + a);
            System.out.println(" "  + s);
        }
    
    }
    public static void main(String [] args) 
    {
        A aaa = new A(10) ;
        aaa.display();
        
        A bbb = new A(20);
        bbb.display();
    }
}
