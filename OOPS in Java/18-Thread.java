// File name shoukd Main.java
class Thread1 extends Thread {
    public void run() {
        for (int i = 0; i <= 10; i++) {
            System.out.println("i: " + i);  // Corrected print statement
            try {
                Thread.sleep(100);  // Optional delay for demonstration
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

class Thread2 extends Thread {
    public void run() {
        for (int j = 0; j <= 20; j++) {
            System.out.println("j: " + j);  // Corrected print statement
            try {
                Thread.sleep(100);  // Optional delay for demonstration
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

public class Main {
    public static void main(String[] args) {
        Thread1 t1 = new Thread1();
        t1.start();

        Thread2 t2 = new Thread2();
        t2.start();
    }
}
