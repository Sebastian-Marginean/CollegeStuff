package ex1;

import java.awt.Color;
import java.awt.Dimension;
import java.awt.Font;
import java.awt.GridBagConstraints;
import java.awt.GridBagLayout;
import javax.swing.JFrame;
import javax.swing.JLabel;

import javax.swing.JPanel;
import javax.swing.WindowConstants;

public class MyFrame extends JFrame {
    public MyFrame() {
    	
    	
        super("Student");
        setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        setSize(375, 375);

        
        JPanel panel = new JPanel(new GridBagLayout());
        panel.setBackground(Color.WHITE);
        
        GridBagConstraints constraints = new GridBagConstraints();
        constraints.gridx = 0;
        
        constraints.gridy = 0;
        constraints.weighty = 1.0;
        
        constraints.fill = GridBagConstraints.VERTICAL;

        // afișăm numele și grupa în JPanel
        JLabel nameLabel = new JLabel("Marginean Sebastian", JLabel.CENTER);
        nameLabel.setForeground(Color.BLUE);
        panel.add(nameLabel, constraints);

        
        constraints.gridy = 1;
        

        JLabel groupLabel = new JLabel("Grupa: 2125", JLabel.CENTER);
        groupLabel.setForeground(Color.BLUE);
        panel.add(groupLabel, constraints);

        // centram textul pe verticala,dar și pe orizontala
        nameLabel.setPreferredSize(new Dimension(0, 200));
        
        groupLabel.setPreferredSize(new Dimension(0, 200));

        // adăugăm JPanel în JFrame
        
        getContentPane().add(panel);
    }

    public static void main(String[] args) {
    	
    	
        MyFrame frame = new MyFrame();
        
        frame.setVisible(true);
    }
}
