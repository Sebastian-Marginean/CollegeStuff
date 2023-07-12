package Marginean;

import java.io.*;

public class Sebastian_2125_lab6_pb2 {

	@SuppressWarnings({ "null", "removal" })
	public static void main(String[] args) {
        try {
            int[] vector = {0, 1, 2, 3, 4};
            System.out.println(vector[5]);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("ArrayIndexOutOfBoundsException: " + e.getMessage());
        }
        
        
        try {
            String sir = "salut";
            int num = Integer.parseInt(sir);
        } catch (NumberFormatException e) {
            System.out.println("NumberFormatException: " + e.getMessage());
        }
        
        
        try {
            String sir1 = null;
            System.out.println(sir1.length());
        } catch (NullPointerException e) {
            System.out.println("NullPointerException: " + e.getMessage());
        }
        
        
        try {
            int nr = 10 / 0;
        } catch (ArithmeticException e) {
            System.out.println("ArithmeticException: " + e.getMessage());
        }
     
        
        try {
            FileReader fisier = new FileReader("fisier.txt");
        } catch (FileNotFoundException e) {
            System.out.println("FileNotFoundException: " + e.getMessage());
        }
        
        
        try {
            Object obiect = new Integer(100);
            String sir2 = (String)obiect;
        } catch (ClassCastException e) {
            System.out.println("ClassCastException: " + e.getMessage());
        }
        finally {
            System.out.println("Am prins sau nu excepții.");
        }
    }
	
}
