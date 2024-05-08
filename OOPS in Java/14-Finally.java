// Note Before Running This Program file name should be Main.java in Your Vs code

// Note Finally Block Will Always Execute

// Note - > We use try catch , try finaly , try catch finally together 

// We Cannot put Statement between try Catch , try finally , try catch finally 

class Main {
    public static void main(String[] args) {
        try {
            int a = 100 ; 
            int b = 0 ; 
            int c = a/b;
            System.out.println(c);
        }
        //  catch(Exception e) {
                // System.err.println(e);
        // }
        finally {
            System.err.println("Finally Block Will execute ");
        }
    }

}
