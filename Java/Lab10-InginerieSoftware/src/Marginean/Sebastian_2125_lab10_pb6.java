package ex6;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.RenderingHints;
import javax.swing.JFrame;
import javax.swing.JPanel;

public class Main extends JPanel {
    public void paint(Graphics g) {
    	
        Graphics2D g2d = (Graphics2D) g;

        // anti-aliasing pentru linii mai clare
       
        g2d.setRenderingHint(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);

        // corpul mașinii în albastru
        
        g2d.setColor(Color.BLUE);
        g2d.fillRect(200, 40, 400, 200);

        // roțile mașinii în negru
        
        g2d.setColor(Color.BLACK);
        
        g2d.fillOval(220, 190, 120, 120);
        g2d.fillOval(450, 190, 120, 120);
        
     // geamurile mașinii în negru
        
        g2d.setColor(Color.BLACK);
        g2d.fillRect(280, 60, 100, 80);
        g2d.fillRect(410, 60, 100, 80);
        
     // partile laterale ale mașinii în albastru
        
        g2d.setColor(Color.BLUE);
        g2d.fillRect(100, 140, 100, 100);
        g2d.fillRect(600, 140, 100, 100);

        //textul "Audi" în roșu
        
        g2d.setColor(Color.RED);
        g2d.drawString("AUDI", 385, 155);
    }

    public static void main(String[] args) {
    	
        JFrame frame = new JFrame("Mașina");
        frame.add(new Main());
        frame.setSize(800, 500);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
