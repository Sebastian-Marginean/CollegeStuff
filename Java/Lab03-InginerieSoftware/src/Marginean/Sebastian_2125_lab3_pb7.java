package Marginean;

import java.util.Scanner;

public class Sebastian_2125_lab3_pb7 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
        int valoareaIntreaga = 0;

        do {
            System.out.print("Scrieti o valoare intreaga mai mare decat 16.777.216: ");
            valoareaIntreaga = scanner.nextInt();
        } while (valoareaIntreaga <= 16777216);

        System.out.println("Valoarea initiala este: " + valoareaIntreaga);

        //In urmatoarele linii de cod vom izola fiecare octet
        int PrimulOctet = (valoareaIntreaga >> 24) & 0xff;
        int AlDoileaOctet = (valoareaIntreaga >> 16) & 0xff;
        int AlTreileaOctet = (valoareaIntreaga >> 8) & 0xff;
        int AlPatruleaOctet = valoareaIntreaga & 0xff;

        //In urmatoarele linii de cod vom afisa octetii in zecimal, apoi in binar si apoi in hexadecimal
        System.out.println("Primul Octet: " + PrimulOctet + ", in binar este: " + Integer.toBinaryString(PrimulOctet) + ", iar in hexazecimal este: " + Integer.toHexString(PrimulOctet));
        System.out.println("Al Doilea Octet: " + AlDoileaOctet + ", in binar este: " + Integer.toBinaryString(AlDoileaOctet) + ", iar in hexazecimal este: " + Integer.toHexString(AlDoileaOctet));
        System.out.println("Al Treilea Octet: " + AlTreileaOctet + ", in binar este: " + Integer.toBinaryString(AlTreileaOctet) + ", iar in hexazecimal este: " + Integer.toHexString(AlTreileaOctet));
        System.out.println("Al Patrulea Octet: " + AlPatruleaOctet + ", in binar este: " + Integer.toBinaryString(AlPatruleaOctet) + ", iar in hexazecimal este: " + Integer.toHexString(AlPatruleaOctet));

	}
	
}
