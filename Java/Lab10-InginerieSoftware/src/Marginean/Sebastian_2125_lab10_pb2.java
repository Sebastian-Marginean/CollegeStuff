package ex2;

import java.awt.Canvas;
import java.awt.Color;
import java.awt.Dimension;
import java.awt.Graphics;
import javax.swing.JFrame;
import javax.swing.JPanel;

public class Main extends JFrame {
    public Main() {

        super("Problema 2");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(450, 450);


        JPanel panel = new JPanel() {
        	
            @Override
            
            public void paintComponent(Graphics g) {
                super.paintComponent(g);
                // Dimensiunile Canvas-ului
                Dimension marimea = getSize();
                int latime = marimea.width;
                int lungime = marimea.height;
                

                // Dimensiunea cercului
                int raza = Math.min(latime, lungime) / 2;

                
                // Coordonatele centrului cercului
                int x = (latime - raza * 2) / 2;
                int y = (lungime - raza * 2) / 2;

                
                // Desenam cercul
                g.setColor(Color.RED);
                g.fillOval(x, y, raza * 2, raza * 2);
            }
        };
        
        getContentPane().add(panel);
        

        setVisible(true);
    }

    public static void main(String[] args) {

        new Main();
        
    }
}