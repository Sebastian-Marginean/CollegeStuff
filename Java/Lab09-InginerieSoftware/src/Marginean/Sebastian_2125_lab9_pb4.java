//Clasa Numarator.java
package prob4;

public class Numarator {
    private int val = 0;

    public synchronized void incrementare () {
    	val++;
    }

    public synchronized void decrementare() {
    	val--;
    }

    public int getVal() {
        return val;
    }
}


//Clasa Main.java

package prob4;

import java.util.*;

public class Main {
    public static void main(String[] args) {
    	Numarator numarator = new Numarator();
    	Scanner sc = new Scanner(System.in);

    	System.out.println("Scrie valoarea contorului pentru incrementare(de preferabil > 10000): ");
    	int n = sc.nextInt();
    	
    	System.out.println("Scrie valoarea contorului pentru decrementare(de preferabil > 10000): ");
    	int n2 = sc.nextInt();
    	
    	Thread primulThread = new Thread(() -> {
            for (int i = 0; i < n; i++) {
            	numarator.incrementare ();
            }
        });

        Thread alDoileaThread = new Thread(() -> {
            for (int i = 0; i < n; i++) {
            	numarator.incrementare ();
            }
        });

        Thread alTreileaThread = new Thread(() -> {
            for (int i = 0; i < n2; i++) {
            	numarator.decrementare();
            }
        });

        primulThread.start();
        alDoileaThread.start();
        alTreileaThread.start();

        try {
        	primulThread.join();
        	alDoileaThread.join();
        	alTreileaThread.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        System.out.println("Valoarea finala este: " + numarator.getVal());
    }
}