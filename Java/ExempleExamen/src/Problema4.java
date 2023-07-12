/*Implementati o aplicatie grafica AWT sau SWING cu urmatoarele specificatii:
 * -Aplicatia contine o zona de desenare
 * -Aplicatia mai contine 1 element de selectie "FORMA" cu optiunile: patrat, cerc, text
 * -Aplicatia contine doua campuri text cu etichetele X si Y
 * -Aplicatia mai contine un camp text multilinie gol cu eticheta Istoric
 * -Buton pentru "Afiseaza"
 * -Buton pentru "Salveaza"
 * -O eticheta goala
 * 
 * Functionalitati:
 * (2p) Sa se implementeze interfata grafica descrisa mai sus
 * (2.5p)La selectarea unei noi combinatii Forma, X si Y si apasarea butonului "Afiseaza", se afiseaza o forma
 * geometrica de dimensiune aleatoare la pozitia (X,Y). Pentru optiunea text se va afisa "Salut!"
 * (1p)La fiecare actiune de afisarte se completeaza in campul text Istorie pe o linie forma geometrica selectata,
 *  pozitia X, Y si dimensiunea formei geometrice sau textul "Salut!"
 *  (1.5p)La apasarea butonului "Salveaza" se preita textul din componoenta text istoric si se scrie intr-un fisier text.
 *  (2p)In cazul in care pozitia de desenare (X, Y) combinata cu dimensiunea formei geometrice sau
 *  valoarea 50 pentru textul Salut depaseste dimensiunea componenentei de desenare, se arunca o exceptie
 *  proprie si se afiseaza in eticheta din interfata textul "Depasire zona de desenare"
 *  (1p - nota 10) - doar daca exista celelalte funcionalitati. Durata dintre afisarile efectuate de utilizator este temporizata
 *  folosind un timer (Thread) si marcata in componenta text istoric. Timerul se restarteaza dupa fiecare actiune.*/


import java.awt.EventQueue;
import java.awt.Graphics;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import java.awt.BorderLayout;
import java.awt.Choice;
import java.awt.Color;
import java.awt.Dimension;
import java.awt.GridLayout;
import javax.swing.JTextField;
import javax.swing.JButton;
import javax.swing.SwingConstants;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import java.awt.event.ActionListener;
import java.io.FileWriter;
import java.io.IOException;
import java.awt.event.ActionEvent;
import java.time.Instant;
import javax.swing.JTextArea;



public class PROB02 extends JFrame {

	private JPanel contentPane;
	private JTextField textX;
	private JTextField textX_edit;
	private JTextField txtY;
	private JTextField textY_edit;
	private JTextField textForma;
	private JLabel etichetaGoala;
	private JLabel Istoric;
	private JTextField durataButon;
	private Instant lastActionTime;
	private long startTime;
	private JLabel formular_optiuni;
	private JTextArea Istoric1;

	/**
	 * Launch the application.
	 */

	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					PROB02 frame = new PROB02();
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

	public PROB02() {
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 450, 300);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));

		setContentPane(contentPane);
		contentPane.setLayout(new BorderLayout(0, 0));

		JPanel panel = new JPanel();
		contentPane.add(panel, BorderLayout.NORTH);
		panel.setLayout(new GridLayout(3, 2, 4, 4));

		textX = new JTextField("X");
		textX.setHorizontalAlignment(SwingConstants.CENTER);
		textX.setEditable(false);
		panel.add(textX);
		textX.setColumns(15);

		textX_edit = new JTextField();
		panel.add(textX_edit);
		textX_edit.setColumns(10);

		txtY = new JTextField();
		txtY.setEditable(false);
		txtY.setText("Y");
		txtY.setHorizontalAlignment(SwingConstants.CENTER);
		panel.add(txtY);
		txtY.setColumns(10);

		textY_edit = new JTextField();
		panel.add(textY_edit);
		textY_edit.setColumns(10);

		textForma = new JTextField();
		textForma.setEditable(false);
		textForma.setText("Forma");
		textForma.setHorizontalAlignment(SwingConstants.CENTER);
		panel.add(textForma);
		textForma.setColumns(10);

		formular_optiuni = new JLabel("");
		Choice choice = new Choice();
		choice.add("patrat");
		choice.add("dreptunghi");
		choice.add("text");

		formular_optiuni.add(choice);
		panel.add(formular_optiuni);

		etichetaGoala = new JLabel("");
		etichetaGoala.setHorizontalAlignment(SwingConstants.CENTER);

		JPanel panelDesenare = new JPanel();
		panelDesenare.setPreferredSize(new Dimension(400, 400));

		JPanel panel_2 = new JPanel();
		contentPane.add(panel_2, BorderLayout.SOUTH);

		Istoric = new JLabel("");
		panelDesenare.setBackground(Color.white);

		JButton butonSalveaza = new JButton("Salveaza");
		butonSalveaza.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {

				// contorizarea utilizatorului
				long duration = System.currentTimeMillis() - startTime;
				durataButon.setText("Durata: " + (duration / 1000) + " secunde");
				startTime = System.currentTimeMillis();

				// scrierea in fisier a ariei
				writeToFile("fisierEX.txt", Istoric1.getText());
				// afisarea unui dialog cand utilizatorul scrie in fisier
				JOptionPane.showMessageDialog(PROB02.this, "Textul a fost salvat in fisier!");

			}
		});
		panel_2.add(butonSalveaza);

		JButton butonAfiseaza = new JButton("Afiseaza");
		butonAfiseaza.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				try {
					Istoric.setText("");
					// contorizarea utilizatorului
					long duration = System.currentTimeMillis() - startTime;
					durataButon.setText("Durata: " + (duration / 1000) + " secunde");
					startTime = System.currentTimeMillis();
					lastActionTime = Instant.now();

					// setarea textului vid pentru depasire dimensiune
					Istoric.setText("");

					// desenare patrat
					panelDesenare.setBackground(Color.white);
					int height = Integer.parseInt(textX_edit.getText());

					int x = Integer.parseInt(textX_edit.getText());
					int y = Integer.parseInt(textY_edit.getText());

					// verificarea daca patratul nu depaseste dimensiunea
					// si aruncarea unei exceptii + afisarea unui mesaj
					Dimension panelSize = panelDesenare.getSize();
					if (x + height > panelSize.width || y + height > panelSize.height) {
						Istoric.setText("figura depășește dimensiunea !");
						throw new DepasireZona("figura depășește dimensiunea !");
					}
					Graphics g = panelDesenare.getGraphics();
					g.setColor(Color.red);
					String sel = choice.getSelectedItem();
					int dim = 0;
					if (sel == "text") {
						Istoric.setText("Salut!");
						Istoric1.append("Salut!");
					}
					if (sel == "patrat") {
						g.fillRect(x, y, 100, 100);
						// Istoric.setText("");
						Istoric1.append("Forma" + sel + " " + "poz: " + x + " " + y + "dimensiunea: " + 100 * 100);
					}
					if (sel == "dreptunghi") {
						g.fillRect(x, y, 100, 200);//pentru cerc fillOval
//						  public void paint(Graphics g) 
//						  {
//						    int xpoints[] = {25, 145, 25, 145, 25};
//						    int ypoints[] = {25, 25, 145, 145, 25};
//						    int npoints = 5;
//
//						    g.fillPolygon(xpoints, ypoints, npoints);
//						  }PENTRU TRIUNGHI
						
						// Istoric.setText("");
						Istoric1.append("Forma" + sel + " " + "poz: " + x + " " + y + "dimensiunea: " + 100 * 200);
					}
					// g.fillRect(x, y, 100, 100);

				} catch (NumberFormatException ex) {

				} catch (IllegalArgumentException ex) {

				} catch (PROB02.DepasireZona e1) {
					// TODO Auto-generated catch block
					e1.printStackTrace();
				}

			}
		});

		panel_2.add(butonAfiseaza);
		panel_2.add(butonAfiseaza);

		durataButon = new JTextField();
		durataButon.setHorizontalAlignment(SwingConstants.CENTER);
		durataButon.setColumns(10);
		durataButon.setEditable(false);
		panel_2.add(durataButon);

		Istoric1 = new JTextArea();
		panel_2.add(Istoric1);
		contentPane.add(panelDesenare, BorderLayout.CENTER);
		contentPane.add(Istoric, BorderLayout.EAST);

		// contorizarea utilizatorului
		startTime = System.currentTimeMillis();
		Thread timerThread = new Thread(new Runnable() {
			@Override
			public void run() {
				while (true) {
					try {
						Thread.sleep(10); // Pauză de 10ms
						long duration = System.currentTimeMillis() - startTime;
						durataButon.setText("Durata: " + (duration / 1000) + " secunde");
					} catch (InterruptedException e) {
						e.printStackTrace();
					}
				}
			}
		});
		timerThread.start();
	}

	// functie care scrie in fisier un text
	private void writeToFile(String fileName, String text) {
		try (FileWriter writer = new FileWriter(fileName, true)) {
			writer.write(text);
			writer.write(System.lineSeparator()); // Adăugăm un rând nou după text
			writer.flush();
			System.out.println("Textul a fost scris în fișier.");
		} catch (IOException e) {
			System.err.println("Eroare la scrierea în fișier: " + e.getMessage());
		}
	}

	// exceptie proprie pentru mai mult de 2 val
	static class DepasireZona extends Exception {
		public DepasireZona(String message) {
			super(message);
		}
	}

}