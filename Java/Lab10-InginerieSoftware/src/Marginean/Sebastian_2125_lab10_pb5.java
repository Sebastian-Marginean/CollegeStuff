package ex5;

import java.awt.Color;
import java.awt.Dimension;
import java.awt.GradientPaint;
import java.awt.Graphics;
import java.awt.Graphics2D;
import javax.swing.JFrame;
import javax.swing.JPanel;

public class Main extends JFrame {

    private panouCerc panouCerc;

    public Main() {
    	
        setTitle("Problema 5");
        
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // creăm un panou pentru cerc
        
        panouCerc = new panouCerc();
        
        add(panouCerc);
        

        
        // afișăm fereastra
        pack();
        
        setLocationRelativeTo(null);
        
        setVisible(true);
    }

    private class panouCerc extends JPanel {
    	
        private static final int SIZE = 400;
        
        private int colorValue = 0;
        
        private Color currentColor = Color.RED;
        

        public panouCerc() {
        	
            setPreferredSize(new Dimension(SIZE, SIZE));
            
            new Thread(() -> {
                while (true) {
                    // trecem la urmatoarea culoare
                    colorValue += 1;
                    if (colorValue > 255) {
                        colorValue = 0;
                    }
                    // generam culoarea
                    currentColor = new Color(colorValue, 255 - colorValue, colorValue);
                    // redesenam cercul
                    repaint();
                    // așteptam o perioadă de timp
                    try {
                        Thread.sleep(10);
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                    }
                }
            }).start();
        }

        @Override
        protected void paintComponent(Graphics g) {
            super.paintComponent(g);
            
            Graphics2D g2d = (Graphics2D) g;

            // desenam cercul folosind GradientPaint
            
            GradientPaint gradientPaint = new GradientPaint(0, 0, Color.WHITE, SIZE, SIZE, currentColor);
            
            g2d.setPaint(gradientPaint);
            
            g2d.fillOval(0, 0, SIZE, SIZE);
        }
    }

    public static void main(String[] args) {
    	
        new Main();
        
    }
}