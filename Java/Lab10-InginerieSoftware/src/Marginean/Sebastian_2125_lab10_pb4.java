package ex4;

import javax.swing.*;

import java.awt.*;

public class Main extends JFrame {
	
    public Main() {
    	
        super("Problema 4");

        JPanel panel = new JPanel() {
            @Override
            public void paintComponent(Graphics g) {
            	
                super.paintComponent(g);

                Graphics2D g2d = (Graphics2D) g;

                // obtinem dimensiunea panoului
                int width = getWidth();
                
                int height = getHeight();

                // calculam dimensiunea unui patrat
                int patrat = Math.min(width, height) / 20;

                // culorile de baza
                Color rosu = new Color(255, 0, 0);
                
                Color verde = new Color(0, 255, 0);
                
                Color albastru = new Color(0, 0, 255);
                
                Color galben = new Color(255, 255, 0);
                
                Color turcoaz = new Color(0, 255, 255);
                
                Color magenta = new Color(255, 0, 255);
                

                //patrate de diferite culori
                
                for (int i = 0; i < 20; i++) {
                    for (int j = 0; j < 20; j++) {
                        if ((i + j) % 2 == 0) {
                            g2d.setColor(Color.GRAY);
                        } else {
                            switch ((i + j) % 6) {
                                case 0:
                                    g2d.setColor(rosu);
                                    break;
                                case 1:
                                    g2d.setColor(verde);
                                    break;
                                case 2:
                                    g2d.setColor(albastru);
                                    break;
                                case 3:
                                    g2d.setColor(galben);
                                    break;
                                case 4:
                                    g2d.setColor(turcoaz);
                                    break;
                                case 5:
                                    g2d.setColor(magenta);
                                    break;
                            }
                        }
                        
                        g2d.fillRect(i * patrat, j * patrat, patrat, patrat);
                    }
                    
                }
            }
        };


        getContentPane().add(panel);

        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
        setSize(500, 500);
        
        setLocationRelativeTo(null);
        
        setVisible(true);
    }

    public static void main(String[] args) {
    	
        new Main();
    }
    
}
