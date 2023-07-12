package Marginean;

import java.util.Scanner;

public class Sebastian_2125_lab3_pb8 {

	 public static void main(String[] args) {
	        Scanner scanner = new Scanner(System.in);

	        // Aici citim din linia de comanda m
	        int m = Integer.parseInt(args[0]);

	        // Aici o sa cream matricea si o s-o afisam
	        int[][] matrice = new int[m][];
	        for (int i = 0; i < m; i++) {
	            matrice[i] = new int[i + 1];
	            System.out.println("Introduceti elementele pentru linia " + (i + 1));
	            for (int j = 0; j < i + 1; j++) {
	                matrice[i][j] = scanner.nextInt();
	            }
	        }

	        // Aici vom afisa matricea linie cu linie
	        System.out.println("Matricea afisata linie cu linie este:");
	        for (int i = 0; i < m; i++) {
	            for (int j = 0; j < i + 1; j++) {
	                System.out.print(matrice[i][j] + " ");
	            }
	            System.out.println();
	        }

	        // Aici vom afisa matricea coloana cu coloana
	        System.out.println("Matricea afisata coloana cu coloana este:");
	        for (int j = 0; j < m; j++) {
	            for (int i = j; i < m; i++) {
	                System.out.print(matrice[i][j] + " ");
	            }
	            System.out.println();
	        }

	        // Eliminam valorile care nu sunt cuprinse intre limite
	        System.out.println("Scrieti o limita inferioasa");
	        int limitaInferioara = scanner.nextInt();
	        System.out.println("Scrieti o limita superioara");
	        int limitaSuperioara = scanner.nextInt();
	        for (int i = 0; i < m; i++) {
	            for (int j = 0; j < i + 1; j++) {
	                if (matrice[i][j] < limitaInferioara || matrice[i][j] > limitaSuperioara) {
	                    matrice[i][j] = 0;
	                }
	            }
	        }

	        // Afisam matricea dupa eliminarea valorilor
	        System.out.println("Matricea dupa eliminarea valorilor este:");
	        for (int i = 0; i < m; i++) {
	            for (int j = 0; j < i + 1; j++) {
	                System.out.print(matrice[i][j] + " ");
	            }
	            System.out.println();
	        }

	        // Afisam vecinii unui element
	        System.out.println("Introduceti coordonatele unui element:");
	        System.out.println("Introduceti linia:");
	        int i = scanner.nextInt();
	        System.out.println("Introduceti coloana:");
	        int j = scanner.nextInt();
	        if (i > 0) {
	            System.out.println("Vecinul de deasupra: " + matrice[i - 1][j]);
	            if (j > 0) {
	                System.out.println("Vecinul de stanga sus: " + matrice[i - 1][j - 1]);
	            }
	            if (j < i) {
	                System.out.println("Vecinul de dreapta sus: " + matrice[i - 1][j]);
	            }
	        }
	        if (i < m - 1) {
	            System.out.println("Vecinul de dedesubt: " + matrice[i + 1][j]);
	            if (j > 0) {
	                System.out.println("Vecinul  de stanga jos" + matrice[i + 1][j - 1]);
	            }
	            if (j < i) {
	            	System.out.println("Vecinul de dreapta jos: " + matrice[i + 1][j]);
	            }
	        }
	        if (j > 0) {
	        	System.out.println("Vecinul din stanga: " + matrice[i][j - 1]);
	        }
	        if (j < i) {
	        	System.out.println("Vecinul din dreapta: " + matrice[i][j + 1]);
	        }
	}
	
}
