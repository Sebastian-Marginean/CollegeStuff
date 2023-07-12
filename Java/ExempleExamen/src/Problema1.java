/*EXAMEN IS - 29.07.2022
Implementați o aplicație grafică AWT sau SWING cu următoarele specificații:
● Aplicația conține o zonă de desenare;
● Aplicația mai conține 2 câmpuri text marcate cu etichetele ”Text”, ”Culoare”;
● Aplicația conține un câmp text etichetat ”Număr caractere”;
● Un buton ”Afișează”;
● Un buton ”Salvează”.
● O etichetă goală.
Funcționalități:
● (2p) Să se implementeze interfața grafică descrisă mai sus
● (2p) La introducerea unui text în câmpul ”Text”, precum și a unei culori abreviate prin literele
”R”, ”G” sau ”B” și apăsarea butonului ”Afișează”, se afișează textul introdus în culoarea
selectată (roșu, verde sau albastru)
● (1,5p) La fiecare acțiune de afișare se afișează în câmpul ”Număr caractere” numărul de
caractere din textul tocmai introdus pe câte o linie nouă.
● (1,5p) La apăsarea butonului ”Salvează” se preia textul din componenta ”Număr caractere”
și se scrie într-un fișier text.
● (2p) În cazul în care culoarea introdusă de utilizator nu este R, G sau B, se aruncă o
excepție și se afișează în eticheta din interfață textul ”Culoare indisponibilă”.
● (1p - nota 10 - doar dacă există celelalte funcționalități) Durata dintre afișările efectuate
de utilizator este temporizată folosind un timer (Thread) și marcată în componenta text
multilinie. Timerul se restartează după fiecare acțiune.*/

import java.awt.EventQueue;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.GridLayout;
import javax.swing.JTextField;
import javax.swing.JButton;
import java.awt.event.ActionListener; 
import java.io.FileWriter;
import java.io.IOException;
import java.awt.event.ActionEvent;
import javax.swing.JTextArea;
import javax.swing.JLabel;

public class prob1 extends JFrame{
	
	
	//Variabile de instanta privata utilizate pentru a 
	//stoca si accesa date in cadrul undei instante a unei clase
	 private JPanel continutPanou;
	 private JTextField primulTextField;
	 private JTextField alDoileaTextField;
	 private JTextField alTreileaTextField;
	 private JTextField alPatruleaTextField;
	 private JTextField alCinceleaTextField;
	 private JTextField alSaseleaTextField;
	 private JPanel primulPanel;
	 private JPanel alDoileaPanel;
	 private JPanel alTreileaPanel;
	 private JButton primulButon;
	 private JButton alDoileaButon;
	 private JTextArea primulTextArea;
	 private JTextArea alDoileaTextArea;
	 private JLabel pimulNewLabel;
	 private long timpulDeStart;
	 private JTextField durataButon;
	
	//Pentru a ne asigura ca modificarile la interfata grafica a utilizatorului
	//sunt facut intr-un mod sigur si coerent.
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					prob1 frame = new prob1(); //creeaza o instanta a clasei prob1
					frame.setVisible(true);
				}catch(Exception e) {
					e.printStackTrace();
				}
			}
		});
	}
	
//	Create the frame
	public prob1() {
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 450, 300);// Seteaza dimensiunea ferestrei
		continutPanou = new JPanel();
		continutPanou.setBorder(new EmptyBorder(5, 5, 5, 5));//reprezinta o margine sau un spatiu gol in jurul componenetelor
		
		
		alDoileaTextArea = new JTextArea();//creaza un nou obiect de tip JPanel
		setContentPane(continutPanou);
		continutPanou.setLayout(new BorderLayout(0, 0));
		
		JPanel panel = new JPanel();//creaza un nou obiect de tip JPanel
		continutPanou.add(panel, BorderLayout.NORTH);//specifica pozitionarea panoului in partea de nord(sus)
		panel.setLayout(new GridLayout(3, 3, 0, 0));//grid cu 3 rânduri și 3 coloane (new GridLayout(3, 3)), iar valorile 0, 0 reprezintă spațiul orizontal și vertical între celulele gridului.
		
		primulTextField = new JTextField();
		primulTextField.setEditable(false);
		primulTextField.setText("Text:");
		panel.add(primulTextField);
		primulTextField.setColumns(10);
		
		alDoileaTextField = new JTextField();
		alDoileaTextField.setEditable(true);
		panel.add(alDoileaTextField);
		alDoileaTextField.setColumns(10);
		
		alTreileaTextField = new JTextField();
		alTreileaTextField.setEditable(false);
		alTreileaTextField.setText("Culoare:");
		panel.add(alTreileaTextField);
		alTreileaTextField.setColumns(10);
		
		alPatruleaTextField = new JTextField();
		alPatruleaTextField.setEditable(true);
		panel.add(alPatruleaTextField);
		alPatruleaTextField.setColumns(10);
		
		alCinceleaTextField = new JTextField();
		alCinceleaTextField.setEditable(false);
		alCinceleaTextField.setText("Nr. caractere:");
		panel.add(alCinceleaTextField);
		alCinceleaTextField.setColumns(10);
		
		primulTextArea = new JTextArea();
		primulTextArea.setEditable(false);
		panel.add(primulTextArea);
		alCinceleaTextField.setColumns(10);
		
		primulPanel = new JPanel();
		continutPanou.add(primulPanel, BorderLayout.CENTER);//ocupa spatiul central al ferestrei
	
		alTreileaPanel = new JPanel();
		primulPanel.add(alTreileaPanel);
		
		alSaseleaTextField = new JTextField();
		alSaseleaTextField.setEditable(false);
		alTreileaPanel.add(alSaseleaTextField);
		alSaseleaTextField.setColumns(10);
		
		pimulNewLabel = new JLabel("");
		
		alDoileaPanel = new JPanel();
		continutPanou.add(alDoileaPanel, BorderLayout.SOUTH);
		
		//Primul buton
		primulButon = new JButton("Salveaza");
		
		//Al doilea buton
		alDoileaButon = new JButton("Afiseaza");
		
		primulPanel.add(alDoileaTextArea);
		primulPanel.add(pimulNewLabel);
		
		alDoileaPanel.add(primulButon);
		alDoileaPanel.add(alDoileaButon);
		
		durataButon = new JTextField();
		durataButon.setEditable(false);
		alDoileaPanel.add(durataButon);
		durataButon.setColumns(10);
		
		//Primul buton
		primulButon.addActionListener(new ActionListener() {//genereaza un eveniment de actiune
			public void actionPerformed(ActionEvent e) {//metoda responsabila pentru gestionarea evenimentelor de actiune
				//contorizarea utilizatorului
				long duration = System.currentTimeMillis() - timpulDeStart;
				durataButon.setText("Durata: " + (duration / 1000) + " secunde");
				timpulDeStart = System.currentTimeMillis();
				
				//scrierea in fisier
				scrieInFisier(primulTextArea.getText());
			}
		});
		
		//Al doilea buton
		alDoileaButon.addActionListener(new ActionListener(){
			public void actionPerformed(ActionEvent e) {
				//contorizarea utilizatorului
				long duration = System.currentTimeMillis() - timpulDeStart;
				timpulDeStart = System.currentTimeMillis();
				
				//culoarea introdusa de utilizator
				String txt = alPatruleaTextField.getText();
				
				//textul introdus de utilizato "Text"
				String txt2 = alDoileaTextField.getText();
				
				//culorile posibile
				String r = "R";
				String g = "G";
				String b = "B";
				
				//setarea textului vid
				pimulNewLabel.setText("");
				
				//Verificare culoare + aruncare exceptie + mesaj
				if(r.equals(txt))
					alSaseleaTextField.setForeground(Color.red);
				else if (g.equals(txt))
					alSaseleaTextField.setForeground(Color.green);
				else if (b.equals(txt))
					alSaseleaTextField.setForeground(Color.blue);
				else {
					pimulNewLabel.setText("culoare indisponibila");
					throw new RuntimeException("Culoarea introdusa este incorecta.");
				}
				
				//scrierea numarului de caractere introdus in util
				primulTextArea.append(Integer.toString((alDoileaTextField.getText().length())));
				
				//scrierea textului dat de utilizator
				alSaseleaTextField.setText(txt2);
			}
		});
		
		//contorizarea utilizatorului
		timpulDeStart = System.currentTimeMillis();
		Thread timerThread = new Thread(new Runnable() {
			@Override
			public void run() {
				while (true) {
					try {
						Thread.sleep(10); // Pauza de 10ms
			long duration = System.currentTimeMillis() - timpulDeStart;
			durataButon.setText("Durata: " + (duration / 1000) + " secunde");
					} catch (InterruptedException e) {
						e.printStackTrace();
					}
				}
			}
		});
		
		// pentru a incepe de la 0
		timerThread.start();
	}
	
	
	
	
	public static void scrieInFisier(String text) {
		try {
			FileWriter writer = new FileWriter("output3.txt");
			writer.write(text);
			writer.close();
			System.out.println("Textul a fost scris in fisier cu succes.");
		} catch (IOException e) {
			System.out.println("A aparut o eroare la scrierea in fisier: " + e.getMessage());
		}
	}
}