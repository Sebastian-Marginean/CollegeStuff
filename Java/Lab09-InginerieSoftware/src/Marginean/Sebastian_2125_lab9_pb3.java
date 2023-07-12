package prob3;


public class Main {
	
    private int n;
    private int rezultat;
    
    
    public Main(int n) {
        this.n = n;
    }
    
    
    public synchronized void calculator() {
        if (n == 0) {
        	rezultat = 0;
            return;
        }
        
        int inainte = 0;
        int actual = 1;
        
        for (int i = 2; i <= n; i++) {
            int next = inainte + actual;
            inainte = actual;
            actual = next;
            
            System.out.println("Intermediate result: " + next);
        }
        
        rezultat = actual;
    }
    
    
    public synchronized void Rezultate() {
        System.out.println("Rezultatul: " + rezultat);
    }
    
    
    public static void main(String[] args) {
    	
        Main fibonacci = new Main(10);
        
        Thread primulThread = new Thread(() -> fibonacci.calculator());
        
        Thread alDoileaThread = new Thread(() -> fibonacci.Rezultate());
        
        
        primulThread.start();

        alDoileaThread.start();
        
        
        try {
        	primulThread.join();
        	alDoileaThread.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        
    }
}
