package Marginean;

import java.util.Random;

public class Sebastian_2125_lab3_pb6 {

	public static void main(String[] args) {
		Random aleatoriu = new Random();
		
		int primulNumar = aleatoriu.nextInt(1000)+1;
		int AlDoileaNumar = aleatoriu.nextInt(1000)+1;
		
		System.out.println("Primul numar generat este: " + primulNumar);
		System.out.println("Al doilea numar generat este: " + AlDoileaNumar);
		
		int diferenta = primulNumar - AlDoileaNumar;
		System.out.println("Diferenta celor doua numere este: " + diferenta);
		
		int suma = primulNumar + AlDoileaNumar;
		System.out.println("Suma celor doua numere este: " + suma);
		
		double catul =  (double)primulNumar / AlDoileaNumar;
		System.out.println("Catul celor doua numere este: " + catul);
		
		int produsul = primulNumar * AlDoileaNumar;
		System.out.println("Produsul celor doua numere este: " + produsul);
		
		double radical1 = Math.sqrt((double) primulNumar);
		System.out.println("Radicalul primului numar este: " + radical1);
		
		double radical2 = Math.sqrt((double) AlDoileaNumar);
		System.out.println("Radicalul celui de al doilea numar este: " + radical2);
	}
	
}
