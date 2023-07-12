/*Scrieti o aplicate Java in care intr-o fereastra sa aveti urmatoarele componente grafice(AWT sau Swing):
 * - doua campuri de editare(TextField). In primul camp de editare sa puteti introduce doar litere(numele unui produs),
 *		 , in al doilea doar valori numerice reale( pretul unui produs, sa permita introducerea valorii cu zecimale). validari la introducerea datelor!
 * - un camp de editare TextArea
 * - o eticheta
 * - 2 butoane, Scrie si Salveaza
 * 
 * La apasarea butonului Scrie se citesc valorile din campurile de editare si apiu:
 * 		- daca pretul este mai mare de 200, se va genera o exceptie proprie, care va scrie un mesaj corespunzator in eticheta
 * 		- altfel:
 * 			1) Valorile din campurile de editare vor fi folosite pentru a instantia un obiect de tip PRODUS.
 * 				 Clasa Produs contine campurile nume(String) si pret (double), constructori, setteri/getteri, 
 * 				 redefinirea metodei toStgring().
 * 			2) Valorile vor fi scrise in componenta TextArea, la fiecare apasare de buton pe randuri diferite Culoarea
 * 				 de scriere se modifica la fiecare scriere si se genereazsa aleator
 * 			3) fiecare obiect PRODUS se va adauga in colectie
 * 
 * La apasarea butonului SALVEAZA se sorteaza elementele din lista descrescator dupa pret, iar cele cu acelasi pret se sorteaza crescator
 * dupa nume. Se scriu apoi in fisierul "PRODUSE.txt" obiectele din colectia sortata, fiecare pe linii diferite.*/


import java.awt.EventQueue;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import java.awt.BorderLayout;
import java.awt.Color;
import javax.swing.JTextField;
import java.awt.GridLayout;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.util.Random;
import java.util.Comparator;
import javax.swing.SwingConstants;
import javax.swing.JTextArea;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class problemaEx1 extends JFrame {

	private JPanel contentPane;
	private JTextField nume_on;
	private JTextField nume_off;
	private JTextField pret_off;
	private JTextField pret_on;
	private JPanel panel_1;
	private JButton Scrie;
	private JButton Salveaza;
	private JLabel eticheta;
	private JTextArea textArea;
	List<Produs> lista = new ArrayList<>();
	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					problemaEx1 frame = new problemaEx1();
					frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	   

	
	/**
	 * Create the frame.
	 */
	public problemaEx1() {
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 450, 300);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));

		setContentPane(contentPane);
		contentPane.setLayout(new BorderLayout(0, 0));
		
		JPanel panel = new JPanel();
		contentPane.add(panel, BorderLayout.NORTH);
		panel.setLayout(new GridLayout(2, 4, 3, 3));
		
		nume_off = new JTextField("Nume produs:");
		nume_off.setEditable(false);
		nume_off.setHorizontalAlignment(SwingConstants.CENTER);
		panel.add(nume_off);
		nume_off.setColumns(10);
		
		nume_on = new JTextField();
		panel.add(nume_on);
		nume_on.setColumns(10);
		
		pret_off = new JTextField("Pret produs:");
		pret_off.setEditable(false);
		pret_off.setHorizontalAlignment(SwingConstants.CENTER);
		panel.add(pret_off);
		pret_off.setColumns(10);
		
		pret_on = new JTextField();
		panel.add(pret_on);
		pret_on.setColumns(10);
		
		panel_1 = new JPanel();
		contentPane.add(panel_1, BorderLayout.SOUTH);
		
		Random random = new Random();
		
		
		Scrie = new JButton("Scrie");
		Scrie.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				//pentru a nu adauga in lista produse cu pretul > 200
				int k = 0;
				
				//tratarea exceptiei
				String text = pret_on.getText();
                try {
                    Double value = Double.parseDouble(text);
                    if (value > 200) {
                    	k=1;
                        throw new ValueTooLargeException("Valoarea pretului depaseste 200!");
                    }
                } catch (ValueTooLargeException ex) {
                    // Aici poți trata sau afișa o notificare corespunzătoare
                    JOptionPane.showMessageDialog(panel, ex.getMessage(), "Eroare", JOptionPane.INFORMATION_MESSAGE);
                    eticheta.setText("Valoarea pretului depaseste 200!");
                    pret_on.requestFocus();
                }
                
                //instantierea unui obiect de tip Produs 
                Produs produs = new Produs(nume_on.getText(), Double.parseDouble(pret_on.getText()));
                //scrierea produsului in culori alese aleator
                Color randomColor = new Color(random.nextInt(256), random.nextInt(256), random.nextInt(256));
                textArea.setForeground(randomColor);
                textArea.append(produs.toString() + "\n");
                
                //adaugarea produsului in lista
                //cu exceptia celor care depasesc pretul 200
                if(k==0){
                	lista.add(produs);
                 }
                else k = 0;
                
                
			}
		});
		panel_1.add(Scrie);
		
		Salveaza = new JButton("Salveaza");
		Salveaza.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				 //sortare desc dupa pret si cresc dupa nume
		        lista.sort(Comparator.comparingDouble(Produs::getPret).reversed());
		        lista.sort(Comparator.comparing(Produs::getNume));
		        
		        //scrierea in fisier a produselor
		        try (BufferedWriter writer = new BufferedWriter(new FileWriter("Produse.txt"))) {
                    for (Produs produs : lista) {
                        writer.write(produs.toString());
                        writer.newLine();//trecerea pe linie noua
                    }
                } catch (IOException ex) {
                    ex.printStackTrace();
                }

			}
		});
		panel_1.add(Salveaza);
		
		eticheta = new JLabel("");
		eticheta.setHorizontalAlignment(SwingConstants.CENTER);
		contentPane.add(eticheta, BorderLayout.EAST);
		
		textArea = new JTextArea();
		textArea.setEditable(false);
		contentPane.add(textArea, BorderLayout.CENTER);
		
		
		//permite doar introducerea caracterelor 
		nume_on.addKeyListener(new KeyListener() {
            @Override
            public void keyTyped(KeyEvent e) {
                char c = e.getKeyChar();
                if (!Character.isLetter(c)) {
                    e.consume();
                }
            }

            @Override
            public void keyPressed(KeyEvent e) {
            	// nu exte necesara implementarea metodei
            }

            @Override
            public void keyReleased(KeyEvent e) {
            	// nu exte necesara implementarea metodei
            }
        });
		
		//permite doar introducerea valorilor reale
		pret_on.addKeyListener(new KeyListener() {
            @Override
            public void keyTyped(KeyEvent e) {
                char c = e.getKeyChar();
                if (!Character.isDigit(c) && c != '.' && c != KeyEvent.VK_BACK_SPACE && c != KeyEvent.VK_DELETE) {
                    e.consume();
                }
            }
            @Override
            public void keyPressed(KeyEvent e) {
                // nu exte necesara implementarea metodei
            }
            @Override
            public void keyReleased(KeyEvent e) {
            	// nu exte necesara implementarea metodei
            }
        });
	}
	
	 //exceptie proprie pentru valori prea mari
    static class ValueTooLargeException extends Exception {
        public ValueTooLargeException(String message) {
            super(message);
        }
    }

    //clasa produs
    public class Produs {
        private String nume;
        private Double pret;

        public Produs() {
        	nume = " ";
        	pret = 0.0;
        }
        public Produs(String nume, Double pret) {
            this.nume = nume;
            this.pret = pret;
        }

        public String getNume() {
            return nume;
        }

        public void setNume(String nume) {
            this.nume = nume;
        }

        public Double getPret() {
            return pret;
        }

        public void setPret(Double pret) {
            this.pret = pret;
        }

        @Override
        public String toString() {
            return "Nume: " + getNume() + 
            		"pret: " + getPret();
        }
    }
    
    

}