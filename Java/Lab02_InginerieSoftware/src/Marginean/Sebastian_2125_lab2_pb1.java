package Marginean;

import java.util.Scanner;

public class Sebastian_2125_lab2_pb1 {
	 public static void main(String args[]){

	        Scanner Sc = new Scanner(System.in);
	        int valoareIntreaga;
	        long FactorialulNumarului = 1;
	        System.out.print("Scrieti o valoarea intreaga: ");

	        System.out.flush();

	        valoareIntreaga = Sc.nextInt();
	        System.out.println("Valoare pe care ati scris-o este: " + valoareIntreaga);
	        for(int i = 1; i <= valoareIntreaga; i++){
	            FactorialulNumarului = FactorialulNumarului * i;
	        }
	        System.out.println("Factorialul numarului intreg dat este: " + FactorialulNumarului);
	    }
}
