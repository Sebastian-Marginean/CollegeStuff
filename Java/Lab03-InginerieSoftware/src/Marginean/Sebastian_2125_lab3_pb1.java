package Marginean;

import java.util.Scanner;

public class Sebastian_2125_lab3_pb1 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Scrieti o valoare intreaga cuprinsa intre 1-12: ");
		String Luna;
		
		
		if(sc.hasNextInt()){
			int ValoareIntreaga = sc.nextInt();
			
			switch(ValoareIntreaga) {
				case 1: Luna= "ianuarie"; break;
					case 2: Luna = "februarie"; break;
					case 3: Luna = "martie"; break;
					case 4: Luna = "aprilie"; break;
					case 5: Luna = "mai"; break;
					case 6: Luna = "iunie"; break;
					case 7: Luna = "iulie"; break;
					case 8: Luna = "august"; break;		
					case 9: Luna = "septembrie"; break;		
					case 10: Luna = "octombrie"; break;		
					case 11: Luna = "noiembrie"; break;
					case 12: Luna = "decembrie"; break;
					default: Luna = "Alege alt numar si sa fie cuprins intre 1-12."; break;
					
			}
			System.out.println(Luna);
		}
		else {
			Luna = sc.nextLine().toLowerCase();
			
			switch(Luna) {
				case "ianuarie": Luna= "1"; break;
				case "februarie": Luna = "2"; break;
				case "martie": Luna = "3"; break;
				case "aprilie": Luna = "4"; break;
				case "mai": Luna = "5"; break;
				case "iunie": Luna = "6"; break;
				case "iulie": Luna = "7"; break;
				case "august": Luna = "8"; break;		
				case "septembrie": Luna = "9"; break;		
				case "octombrie": Luna = "10"; break;		
				case "noiembrie": Luna = "11"; break;
				case "decembrie": Luna = "12"; break;
				default: Luna = "Nu ati scris luna corect."; break;
			}
			System.out.println(Luna);
		}
		
	}
	
}
