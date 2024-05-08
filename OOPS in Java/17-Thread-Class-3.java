// Note To run This Code SAve File As Main.java 

// Note Multiple Task using Single Thread is Not Possible 

// Example - Vlc Different Task Can be done using Multi Threading 

// Alll Threads Starts At Same Time 

// multiple Task Using Multiple Thread . 


class Thread1 extends Thread {
    public void run() {
        System.out.println("Task 1");
    }
}


class Thread2 extends Thread {
    public void run() {
        System.out.println("Task 2");
    }
}


public class Main extends Thread  {

    public static void main(String[] args) 
    {

        Thread1 t1 = new Thread1();
        t1.start();

        Thread2 t2 = new Thread2();
        t2.start();

    }
}
