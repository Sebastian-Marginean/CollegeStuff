package Marginean;

import java.util.Scanner;

public class Sebastian_2125_lab6_pb1 {


	public static void main(String[] args) {
		System.out.println("Scrieti lungimea sirului de valori: ");
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		
		System.out.println("Scrieti valorile pentru sir: ");
		double[] valori = new double[n];
		for(int i = 0; i < n; i++) {
			valori[i] = sc.nextDouble();
		}
		
		try {
            System.out.print("Scrieti indexul elementului, index-ul sa fie intre 0 si " + (n-1));
            int i1 = sc.nextInt();
            System.out.println("Numarul care se afla in acea pozitie este:  " + valori[i1]);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Indexul invalid, scrieti un index care sa fie intre 0 si " + (n - 1) + ".");
        }
		
		System.out.print("Scrieti numarul de linii ale matricei: ");
        int m = sc.nextInt();
        int[][] mat = new int[m][];
        for (int i = 0; i < m; i++) {
            System.out.println("Scrieti numarul de elemente de pe linia " + (i + 1) + " a matricei: ");
            int nr = sc.nextInt();
            mat[i] = new int[nr];
            System.out.println("Scrieti elementele de pe linia " + (i + 1) + " a matricei:");
            for (int j = 0; j < nr; j++) {
            	mat[i][j] = sc.nextInt();
            }
        }

        System.out.println("Matricea este:");
        for (int i = 0; i < m; i++) {
            try {
                for (int j = 0; j < mat[i].length; j++) {
                    System.out.print(mat[i][j] + " ");
                }
                System.out.println();
            } catch (ArrayIndexOutOfBoundsException e) {
                System.out.println("Linia " + (i + 1) + " a matricei este invalida, are un numar invalid de elemente.");
            }
        }
    }
	
}
