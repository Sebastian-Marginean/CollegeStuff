package Marginean;

import java.util.Scanner;

public class Sebastian_2125_lab3_pb5 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Scrieti de cate numere doriti sa fie sirul: ");
		int numarulSirului = sc.nextInt();
		
		System.out.println("Introduceti cele " + numarulSirului + " numere");
		int[] array = new int[numarulSirului];
		
		for(int i = 0; i < numarulSirului; i++) {
			array[i] = sc.nextInt();
		}
		
		insertionSort(array);
        System.out.println("Sirul sortat prin insertionSort este: ");
        for (int i = 0; i < numarulSirului; i++) {
            System.out.print(array[i] + " ");
        }
        
        System.out.println();
        bubbleSort(array);
        System.out.println("Sirul sortat prin bubbleSort este: ");
        for (int i = 0; i < numarulSirului; i++) {
            System.out.print(array[i] + " ");
        }
        
        System.out.println();
        quickSort(array, 0, numarulSirului - 1);
        System.out.println("Sirul sortat prin quickSort este: ");
        for (int i = 0; i < numarulSirului; i++) {
            System.out.print(array[i] + " ");
        }
    }
		
	
	public static void insertionSort(int[] array) {
        int a = array.length;
        for (int i = 1; i < a; i++) {
            int k = array[i];
            int j = i - 1;
            while (j >= 0 && array[j] > k) {
                array[j + 1] = array[j];
                j--;
            }
            array[j + 1] = k;
        }
    }
	
	public static void bubbleSort(int[] array) {
        int a = array.length;
        for (int i = 0; i < a - 1; i++) {
            for (int j = 0; j < a - i - 1; j++) {
                if (array[j] > array[j + 1]) {
                    int k = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = k;
                }
            }
        }
	}
	

    public static void quickSort(int[] array, int stanga, int dreapta) {
        if (stanga < dreapta) {
            int i = partitie(array, stanga, dreapta);
            quickSort(array, stanga, i - 1);
            quickSort(array, i + 1, dreapta);
        }
    }

    public static int partitie(int[] array, int stanga, int dreapta) {
        int p = array[dreapta];
        int i = stanga - 1;
        for (int j = stanga; j < dreapta; j++) {
            if (array[j] <= p) {
                i++;
                int k = array[i];
                array[i] = array[j];
                array[j] = k;
            }
        }
        int k = array[i + 1];
        array[i + 1] = array[dreapta];
        array[dreapta] = k;
        return i + 1;
    }
	
}
