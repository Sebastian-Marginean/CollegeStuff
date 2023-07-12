package ex3;

import javax.swing.*;
import java.awt.*;
import java.awt.image.BufferedImage;
import java.io.File;
import javax.imageio.ImageIO;

public class Main extends JFrame {
    private JLabel imageLabel;
    private JLabel filenameLabel;

    public Main() {
        super("Problema 3");
        
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        
        JPanel panel = new JPanel();
        
        panel.setBackground(Color.WHITE);
        panel.setLayout(new BoxLayout(panel, BoxLayout.PAGE_AXIS));
        
        add(panel);
        


        
        String img = "my_image.png";
        
        BufferedImage image;
        
        try {
            image = ImageIO.read(new File(img));
            ImageIcon icon = new ImageIcon(image);
            imageLabel = new JLabel(icon);
            panel.add(imageLabel);
        } catch (Exception ex) {
            ex.printStackTrace();
            
        }

        filenameLabel = new JLabel(img);
        
        filenameLabel.setFont(new Font("Arial", Font.PLAIN, 20));
        
        filenameLabel.setForeground(new Color(51, 102, 204)); // culoare formata din valori RGB (rosu, verde, albastru)
        
        panel.add(filenameLabel);

        pack();
        
        setLocationRelativeTo(null);
        
        setVisible(true);
    }

    public static void main(String[] args) {
        new Main();
    }
}
