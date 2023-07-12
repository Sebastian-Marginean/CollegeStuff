package Marginean;

import java.util.Scanner;


public class Sebastian_2125_lab3_pb3 {
	
	 public static void main(String[] args) {
	        Scanner sc = new Scanner(System.in);
	        System.out.print("Scrieti o valoare intreaga: ");
	        int valoareIntreaga = sc.nextInt();

	        System.out.println("Reprezentarea binara: " + Integer.toBinaryString(valoareIntreaga));
	        System.out.println("Reprezentarea octala: " + Integer.toOctalString(valoareIntreaga));
	        System.out.println("Reprezentarea hexazecimala: " + Integer.toHexString(valoareIntreaga));
	    }

}
