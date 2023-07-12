package Marginean;

import java.util.Scanner;

public class Sebastian_2125_lab4_pb6 {

	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Introduceți dimensiunea șirului: ");
        int lungimeaSirului = sc.nextInt();
        char[] sirAleatoriu = new char[lungimeaSirului];
        for (int i = 0; i < lungimeaSirului; i++) {
        	sirAleatoriu[i] = (char) (Math.random() * 26 + 'a');
            if (Math.random() < 0.5) {
            	sirAleatoriu[i] = (char) (Math.random() * 10 + '0');
            }
        }

        System.out.print("Șirul aletoriu este: ");
        
        for (int i = 0; i < lungimeaSirului; i++) {
            System.out.print(sirAleatoriu[i]);
        }
        System.out.println();

        String sirAleatoriu1 = new String(sirAleatoriu);


        StringBuilder sirModificat = new StringBuilder(sirAleatoriu1);
        for (int i = 0; i < sirAleatoriu1.length(); i++) {
            if (Character.isDigit(sirAleatoriu1.charAt(i))) {
                sirModificat.setCharAt(i, '*');
            }
        }
        System.out.print("Șirul nou este: ");
        System.out.println(sirModificat.toString());
    }
	
}
