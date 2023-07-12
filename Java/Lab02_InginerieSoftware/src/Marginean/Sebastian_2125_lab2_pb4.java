package Marginean;

import java.util.Scanner;

public class Sebastian_2125_lab2_pb4 {

	 public static void main(String[] args) {
	        int NumereTest, i;
	        System.out.println("Scrieti cate numere intregi doriti sa testati: ");
	        Scanner Sc = new Scanner(System.in);
	        NumereTest = Sc.nextInt();

	        int[] Numere = new int[NumereTest];
	        System.out.println("Scrieti un numar intreg: ");
	        for(i = 0; i < NumereTest; i++){
	            Numere[i] = Sc.nextInt();
	        }

	        System.out.println("Numerele prime din lista de mai sus sunt: ");
	        for(int Numar : Numere){
	            boolean NumarPrim = true;
	            for(int k = 2; k <= Numar / 2; k++){
	                if(Numar % k == 0){
	                    NumarPrim = false;
	                    break;
	                }
	            }
	            if(NumarPrim && Numar >1){
	                System.out.print(Numar + " ");
	            }
	        }
	    }
	
}
