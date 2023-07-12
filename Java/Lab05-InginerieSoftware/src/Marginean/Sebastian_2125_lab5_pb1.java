package Marginean;

import java.util.Scanner;

interface Prototipuri {
	double scadereNumere(double nr1, double nr2);
	double adunareNumere(double nr1, double nr2);
	double impartireNumere(double nr1, double nr2);
	double inmultireNumere(double nr1, double nr2);
	double radicalNumere(double nr1);
	double ridicareLaPutereNumere(double nr1, double nr2);
}

class calculatorPrototipuri implements Prototipuri {
		public double scadereNumere(double nr1, double nr2) {
		    return nr1 - nr2;
		}
		public double adunareNumere(double nr1, double nr2) {
			return nr1 + nr2;
		}
		
		public double impartireNumere(double nr1, double nr2) {
			return nr1 / nr2;
		}

		public double inmultireNumere(double nr1, double nr2) {
			return nr1 * nr2;
		}

		public double radicalNumere(double nr1) {
			return Math.sqrt(nr1);
		}

		public double ridicareLaPutereNumere(double nr1, double nr2) {
			return Math.pow(nr1, nr2);
		}
}

public class Sebastian_2125_lab5_pb1 {
	
	public static void main(String[] args) {
		 Scanner sc = new Scanner(System.in);
		  
		 calculatorPrototipuri calcule = new calculatorPrototipuri();
		  
		 System.out.println("Scrieti va rog primul numar: ");
		 double nr1 = sc.nextDouble();
		 System.out.println("Scrieti va rog al doilea numar: ");
		 double nr2 = sc.nextDouble();
		  
		 System.out.println("Rezultatul scaderii este : : " + calcule.scadereNumere(nr1, nr2));
	     	 System.out.println("Rezultatul adunarii este : " + calcule.adunareNumere(nr1, nr2));
	     	 System.out.println("Rezultatul impartirii este : " + calcule.impartireNumere(nr1, nr2));
	     	 System.out.println("Rezultatul inmultirii este: " + calcule.inmultireNumere(nr1, nr2));
	     	 System.out.println("Rezultatul radicalului numarului " + nr1 + " este : " + calcule.radicalNumere(nr1));
	     	 System.out.println("Rezultatul numarului " + nr1 + " ridicat la puterea " + nr2 + " este : " + calcule.ridicareLaPutereNumere(nr1, nr2));
	  }

}
