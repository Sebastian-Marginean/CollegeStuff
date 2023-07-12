package Marginean;


import java.util.Scanner;

public class Sebastian_2125_lab2_pb2 {

	public static void main(String[] args) {
        Scanner Sc = new Scanner(System.in);
        int PrimulNumar, AlDoileaNumar;
        System.out.println("Scrieti primul numar intreg: ");
        PrimulNumar = Sc.nextInt();
        System.out.println("Scrieti al doilea numar intreg: ");
        AlDoileaNumar = Sc.nextInt();
        while(PrimulNumar != AlDoileaNumar){
            if( PrimulNumar > AlDoileaNumar)
                PrimulNumar = PrimulNumar - AlDoileaNumar;
            else
                AlDoileaNumar = AlDoileaNumar - PrimulNumar;
        }
        System.out.println("Cel mai mare divizor comun al celor 2 valori intregi este: " + PrimulNumar);
    }
	
}
