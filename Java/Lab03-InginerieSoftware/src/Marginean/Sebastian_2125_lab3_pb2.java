package Marginean;

import java.util.Scanner;


public class Sebastian_2125_lab3_pb2 {

	public static void main(String[] args) {
		int nr = 0;
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Scrieti ce caracter ati dori sa cautati in urmatorul sir: ");
		char caracterulCautat = sc.nextLine().charAt(0);
		
		System.out.println("Scrieti sirul de caractere: ");
		String sirCaractere = sc.nextLine();
		
		for(char caracter : sirCaractere.toCharArray()) {
			if(caracter == caracterulCautat)
				nr++;
		}
		
		System.out.println("Caracterul " + caracterulCautat + " a aparut in sir de: " + nr + " ori");
	}
	
}
