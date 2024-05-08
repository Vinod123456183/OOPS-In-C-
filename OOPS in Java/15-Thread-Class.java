// NOTE File Name Should Main.java
// E O C S


/*
 Creating  Thread Using Thread CLass
 */


//  Step 1 -> Extend Thread Class
public class Main extends Thread {
    // Step 2  OverRide Run Method
    public void run() {
        System.out.println("Thread Is Running......");
    }

    public static void main(String[] args) {
        // Step 3 Create Object Of Class 
        Main t = new Main();

        // Step 4 - Start Thread
        t.start();

    }
}
