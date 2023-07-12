/*
Implementați o aplicație grafică AWT sau SWING cu următoarele 
specificații: ● Aplicația conține o zonă de desenare;
● Aplicația mai conține 3 câmpuri text marcate cu etichetele X, Y, R;
● Aplicația conține un câmp text etichetat Arie;
● Un buton ”Afișează”;
● Un buton ”Salvează”.
● O etichetă goală.
Funcționalități:
● (2p) Să se implementeze interfața grafică descrisă mai sus
● (2,5p) La selectarea unei noi combinații X, Y, R și apăsarea butonului ”Afișează”, 
se afișează un pătrat plin de dimensiune R, la poziția (X,Y) . Culoarea pătratului 
este aleatoare.
● (1p) La fiecare acțiune de afișare se calculează aria pătratului și se afișează în 
câmpul text Arie pe o linie nouă.
● (1,5p) La apăsarea butonului ”Salvează” se preia textul din componenta text 
Arie și se scrie într-un fișier text.
● (2p) În cazul în care poziția de desenare (X,Y) combinată cu latura pătratului 
depășește dimensiunea componentei de desenare, se aruncă o excepție și se 
afișează în eticheta din interfață textul ”Depășire zonă de desenare”.
● (1p - nota 10 - doar dacă există celelalte funcționalități) Durata dintre afișările 
efectuate de utilizator este temporizată folosind un timer (Thread) și marcată în 
componenta text multilinie. Timerul se restartează după fiecare acțiune.
*/

import java.awt.EventQueue;
import java.awt.Graphics;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import java.awt.BorderLayout;
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

public class PROB2 extends JFrame{
	private JPanel contentPane;
	private JTextField textX;
	private JTextField textX_edit;
	private JTextField txtY;
	private JTextField textY_edit;
	private JTextField textR_edit;
	private JTextField textAria;
	private JTextField textR;
	private JTextField textArie_edit;
	private JLabel etichetaGoala;
	private JLabel depasireDimensiune;
	private JTextField durataButon;
	private Instant lastActionTime;
	private long startTime;
	
//	Lunch the application
	
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					PROB2 frame = new PROB2();
					frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
					}
				}
			});
		}
	
	// Create the frame
	
	public PROB2() {
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 450, 300);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		
		setContentPane(contentPane);
		contentPane.setLayout(new BorderLayout(0, 0));
		
		JPanel panel = new JPanel();
		contentPane.add(panel, BorderLayout.NORTH);
		panel.setLayout(new GridLayout(4, 2, 4, 4));
		
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
		
		textR = new JTextField();
		textR.setEditable(false);
		textR.setText("R");
		textR.setHorizontalAlignment(SwingConstants.CENTER);
		panel.add(textR);
		textR.setColumns(10);
		
		textR_edit = new JTextField();
		panel.add(textR_edit);
		textR_edit.setColumns(10);
		
		textAria = new JTextField();
		textAria.setEditable(false);
		textAria.setText("AREA");
		textAria.setHorizontalAlignment(SwingConstants.CENTER);
		panel.add(textAria);
		textAria.setColumns(10);
		
		textArie_edit = new JTextField();
		panel.add(textArie_edit);
		textArie_edit.setColumns(10);
		
		etichetaGoala = new JLabel("");
		etichetaGoala.setHorizontalAlignment(SwingConstants.CENTER);
		
		JPanel panelDesenare = new JPanel();
		panelDesenare.setPreferredSize(new Dimension(400, 400));
		
		JPanel panel_2 = new JPanel();
		contentPane.add(panel_2, BorderLayout.SOUTH);
		
		depasireDimensiune = new JLabel("");
		panelDesenare.setBackground(Color.white);
		
		JButton butonSalveaza = new JButton("Salveaza");
		butonSalveaza.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				//contorizarea utilizatorului
				long duration = System.currentTimeMillis() - startTime;
				durataButon.setText("Durata: " + (duration / 1000) + "secunde");
				
				startTime = System.currentTimeMillis();
				
				//afisarea + calcularea ariei
				long arie = Integer.parseInt(textX_edit.getText());
				arie = arie * arie;
				
				//scrierea in fisier a ariei
				writeToFile("output3.txt",Long.toString(arie));
				//afisarea unui dialog cand utilizatorul scrie in fisier 
				JOptionPane.showMessageDialog(PROB2.this, "Aria a fost salvata in fisier!");

			}
		});
		panel_2.add(butonSalveaza);
		
		JButton butonAfiseaza = new JButton("Afiseaza");
		butonAfiseaza.addActionListener(new ActionListener() {
		public void actionPerformed(ActionEvent e) {
			try {
				//contorizarea utilizatorului
				long duration = System.currentTimeMillis() - startTime;
				durataButon.setText("Durata: " + (duration / 1000) + "secunde");

				startTime = System.currentTimeMillis();
				lastActionTime = Instant.now();
				
				//setare text vid pentru depasire dimensiune
				depasireDimensiune.setText("");
				
				//desenare patrat
				panelDesenare.setBackground(Color.white);
				int height = Integer.parseInt(textX_edit.getText());
				int x = Integer.parseInt(textY_edit.getText());
				int y = Integer.parseInt(textR_edit.getText());

				// Generați o culoare aleatoare
				Color randomColor = new Color((int) (Math.random() * 256), (int) (Math.random() * 256),(int) (Math.random() * 256));

				//verificarea daca patratul nu depaseste 
				//dimensiunea si aruncarea unei exceptii + afisarea 
				//unui mesaj 
				
				Dimension panelSize = panelDesenare.getSize();
				if (x + height > panelSize.width || y + height > panelSize.height) {
					depasireDimensiune.setText("Pătratul depășește dimensiunea JPanel!");
					throw new IllegalArgumentException("Pătratul depășește dimensiunea JPanel!");
					
				}
				// Desenarea pătratului pe panou
				Graphics g = panelDesenare.getGraphics();
				g.setColor(randomColor);
				g.fillRect(x, y, height, height);
				
				//calcularea ariei + afisarea ei 
				String text = Integer.toString(height * height);
				textArie_edit.setText(text);
			} catch (NumberFormatException ex) {
			} catch (IllegalArgumentException ex) {
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
		contentPane.add(panelDesenare, BorderLayout.CENTER);
		contentPane.add(depasireDimensiune, BorderLayout.EAST);
		
		//contorizarea utilizatorului
		startTime = System.currentTimeMillis();
		Thread timerThread = new Thread(new Runnable() {
			@Override
			public void run() {
				while (true) {
					try {
						Thread.sleep(10); // Pauză de 10ms
						long duration = System.currentTimeMillis() - startTime;
						durataButon.setText("Durata: " + (duration / 1000) + " secunde");
					}catch (InterruptedException e) {
						e.printStackTrace();
					}
				}
		}
		});
		timerThread.start();
	}

//functie care scrie in fisier un text

private void writeToFile(String fileName, String text) {
	try (FileWriter writer = new FileWriter(fileName, true)) {
		writer.write(text);
		 writer.write(System.lineSeparator()); // Adăugăm un rând nou după text
		 writer.flush();
		 System.out.println("Textul a fost scris în fișier.");
	}catch (IOException e) {
		System.err.println("Eroare la scrierea în fișier: " + e.getMessage());
	}
}
}