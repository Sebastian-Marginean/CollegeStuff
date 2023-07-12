package prob1;

import java.util.concurrent.TimeUnit;


public class Main implements Runnable {

    private String sir;
    private static int n = 0;
    
    public Main(String sir) {
        this.sir = sir;
        n++;
    }
    

    //aici se realizeaza un override
    public void run() {
        for (int i = 1; i <= n; i++) {
            System.out.println(sir + "Mesajul: " + i);
            try {
                TimeUnit.MILLISECONDS.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
    

    public static void main(String[] args) {
        Thread primulThread = new Thread(new Main("Primul obiect : "));
        Thread alDoileaThread = new Thread(new Main("Al doilea obiect : "));
        Thread alTreileaThread = new Thread(new Main("Al treilea obeict : "));
        Thread alPatruleaThread = new Thread(new Main("Al patrulea obiect : "));
        Thread alCinceleaThread = new Thread(new Main("Al cincelea obeict : "));
        
        primulThread.start();
        alDoileaThread.start();
        alTreileaThread.start();
        alPatruleaThread.start();
        alCinceleaThread.start();
    }
}