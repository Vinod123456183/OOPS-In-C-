class A extends Thread {
    public void run() {
        for (int i = 0; i <= 20; i++) {
            if (i == 2) {
                Thread.yield(); // Yield the thread at i = 2
            }
            System.out.println("i: " + i);
        }
        System.out.println("Thread A completed");
    }
}

class B extends Thread {
    public void run() {
        for (int j = 0; j <= 20; j++) {
            System.out.println("j: " + j);
            try {
                Thread.sleep(100); // Sleep for 100 milliseconds
            } catch (InterruptedException e) {
                // Handle interruption
                System.out.println("Thread B interrupted");
                return; // Exit the run method
            }
        }
        System.out.println("Thread B completed");
    }
}

class C extends Thread {
    private volatile boolean running = true; // Flag to control thread execution

    public void run() {
        for (int k = 0; k <= 20; k++) {
            if (!running) {
                break; // Exit if the running flag is set to false
            }
            System.out.println("k: " + k);
            try {
                Thread.sleep(100); // Sleep for 100 milliseconds
            } catch (InterruptedException e) {
                // Handle interruption
                System.out.println("Thread C interrupted");
                return; // Exit the run method
            }
            if (k == 5) {
                running = false; // Signal to stop the thread
                System.out.println("Thread C stopped at k = 5");
                break;
            }
        }
        System.out.println("Thread C completed");
    }
}

public class Main {
    public static void main(String[] args) {
        A threadA = new A();
        B threadB = new B();
        C threadC = new C();
        
        threadA.start();
        threadB.start();
        threadC.start();
    }
}
