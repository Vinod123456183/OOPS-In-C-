// Note Before Running This Program file name should be Main.java in Your Vs code


class Main {
    public static void main(String[] args) {
        try {
            int a = 100 ; 
            int b = 0 ; 
            int c = a/b;
            System.out.println(c);
        } catch(Exception e) {
                System.err.println(e);
        }
        System.err.println();
        System.out.println("After Applying Try Catch , JVM Will Not Terminate Program");
    }

}
