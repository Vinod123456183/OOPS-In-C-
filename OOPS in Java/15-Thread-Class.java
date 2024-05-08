// NOTE File Name Should Main.java
// E O C S


/* Creating  Thread Using Thread CLass*/
//  we can say This Program is Single Task Single Thread
// For Single Task Multiple thread Create an object  

//  Step 1 -> Extend Thread Class
public class Main extends Thread {
    // Step 2  OverRide Run Method
    public void run() {     //task 1
        System.out.println("Thread Is Running......"); 
    }

    public static void main(String[] args) {
        // Step 3 Create Object Of Class 
        Main t = new Main();    //Thread 1
        // Step 4 - Start Thread
        t.start();

        Main t2 = new Main();
        t2.start();   // Thread 2  , 

     // Both Thread Will Call run So it Will called Single Task Multiple Thread
    }
}
