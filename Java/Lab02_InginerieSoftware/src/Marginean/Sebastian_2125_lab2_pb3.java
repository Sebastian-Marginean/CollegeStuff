package Marginean;

import java.util.Scanner;

public class Sebastian_2125_lab2_pb3 {

	 public static void main(String[] args) {
	        Scanner Sc = new Scanner(System.in);
	        int Numar;
	        System.out.println("Scrieti un numar intreg: ");
	        Numar = Sc.nextInt();
	        System.out.println("Divizorii acestui numar intreg sunt: ");
	        for(int i = 1; i <= Numar; i++){
	            if(Numar % i ==0)
	                System.out.print(i + " ");
	        }
	    }
	
}
