// NOTE File Name Should Main.java

/*Creating  Thread Using Runnable*/


//  Step 1 -> Implements Thread Class
public class Main implements Runnable {
    // Step 2  OverRide Run Method
    public void run() {
        System.out.println("Thread Is Running......");
    }

    public static void main(String[] args) {
        // Step 3 Create Object Of Class 
        Main t = new Main();
        // Step 4 - Start Thread Object and Putting Value t in this obj to access run()
        Thread th = new Thread(t);
        th.start();

    }
}
