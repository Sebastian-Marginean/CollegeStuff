package prob2;

import java.util.Random;

class CalculatorArieCerc implements Runnable {
    private int r;
    
    public CalculatorArieCerc(int r) {
        this.r = r;
    }
    
    @Override
    public void run() {
        if (r % 3 == 0) {
            double aria = Math.PI * r * r;
            System.out.println("Aria cercului este: " + aria);
        } else {
            System.out.println("Raza nu este divizibila cu 3!");
        }
    }
}

public class Main implements Runnable {
    private int[] nr = new int[30];
    
    @Override
    public void run() {
        Random rand = new Random();
        for (int i = 0; i < 30; i++) {
        	nr[i] = rand.nextInt(31);
        }
    }
    
    public int[] getNumbers() {
        return nr;
    }


    
    public static void main(String[] args) {
    	Main generator = new Main();
        Thread primulThread = new Thread(generator);
        primulThread.start();
        
        try {
        	primulThread.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        
        int radius = generator.getNumbers()[0];
        Thread alDoileaThread = new Thread(new CalculatorArieCerc(radius));
        alDoileaThread.start();
    }
    
}

