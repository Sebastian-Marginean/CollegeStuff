package Marginean;

import java.util.Scanner;
import java.util.Arrays;
import java.util.Random;

public class Sebastian_2125_lab4_pb1 {

	public class Methods {

		
	    public static double mediaAritmetica(int... numere) {
	        int suma = 0;
	        for (int n : numere) {
	            suma = suma + n;
	        }
	        return (double) suma / numere.length;
	    }

	  
	    public static double[] generareVector(int n) {
	        double[] vector = new double[n];
	        Random NrRandom = new Random();
	        for (int i = 0; i < n; i++) {
	        	vector[i] = NrRandom.nextDouble(1001);
	        }
	        return vector;
	    }

	    
	    public static String majuscule(char[] caractere) {
	        String sir = "";
	        for (char c : caractere) {
	            sir = sir + Character.toUpperCase(c);
	        }
	        return sir;
	    }
	}

	public static void main(String[] args) {
		//Aici se va apela metoda mediaAritmetica
        double mediaArit = Methods.mediaAritmetica(2, 5, 14, 21, 37);
        System.out.println("Media aritmetica este: " + mediaArit);

       //Aici se va apela metoda generareVector
        Scanner sc = new Scanner(System.in);
        System.out.print("Din cate numere doriti sa fie vectorul generat: ");
        int n = sc.nextInt();
        double[] vector = Methods.generareVector(n);
        System.out.println("Vectorul care a fost generat random este: " + Arrays.toString(vector));

        //Aici se va apela metoda majuscule
        char[] caractere = {'s', 'a', 'l', 'u', 't', 'a', 'r', 'e'};
        String sirNeschimbat = new String(caractere);
        System.out.println("Sirul care NU are caracterele schimbate in majusule este: " + sirNeschimbat);
        String sirSchimbat = Methods.majuscule(caractere);
        System.out.println("Sirul care are caracterele schimbate in majusule este: " + sirSchimbat);
    }
	
}
