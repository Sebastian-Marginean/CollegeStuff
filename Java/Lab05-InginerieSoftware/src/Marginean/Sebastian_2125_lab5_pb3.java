package Marginean;

import java.util.Scanner;

interface scadereNumere{
	double scadeNumerele(double nr1, double nr2);
}
interface adunareNumere{
	double adunaNumerele(double nr1, double nr2);;
}
interface impartireNumere{
	double imparteNumerele(double nr1, double nr2);
}
interface inmultireNumere{
	double inmultireaNumerelor(double nr1, double nr2);
}
interface radicalNumere{
	double radicalulNumerelor(double nr1);
}
interface ridicareLaPutereNumere{
	double ridicareLaPutereANumerelor(double nr1, double nr2);
}

class calculatorPrototipuri {
	scadereNumere  scadeNumerele = (nr1, nr2) -> nr1 - nr2;
	
	adunareNumere  adunaNumerele = (nr1, nr2) -> nr1 + nr2;
	
	impartireNumere  imparteNumerele = (nr1, nr2) -> nr1 / nr2;
	
	inmultireNumere  inmultireaNumerelor = (nr1, nr2) -> nr1 * nr2;
	
	radicalNumere  radicalulNumerelor = nr1 -> Math.sqrt(nr1);
	
	ridicareLaPutereNumere  ridicareLaPutereANumerelor = (nr1, nr2) -> Math.pow(nr1, nr2);
}

public class Sebastian_2125_lab5_pb3 {
	
	 public static void main(String[] args) {
		  Scanner sc = new Scanner(System.in);
		  
		  calculatorPrototipuri calcule = new calculatorPrototipuri();
		  
		  System.out.println("Scrieti va rog primul numar: ");
		  double nr1 = sc.nextDouble();
		  System.out.println("Scrieti va rog al doilea numar: ");
		  double nr2 = sc.nextDouble();
		  
		 System.out.println("Rezultatul scaderii este : : " + calcule.scadeNumerele.scadeNumerele(nr1, nr2));
	     	 System.out.println("Rezultatul adunarii este : " + calcule.adunaNumerele.adunaNumerele(nr1, nr2));
	     	 System.out.println("Rezultatul impartirii este : " + calcule.imparteNumerele.imparteNumerele(nr1, nr2));
	     	 System.out.println("Rezultatul inmultirii este : " + calcule.inmultireaNumerelor.inmultireaNumerelor(nr1, nr2));
	    	 System.out.println("Rezultatul radicalului numarului " + nr1 + " este : " + calcule.radicalulNumerelor.radicalulNumerelor(nr1));
	       System.out.println("Rezultatul numarului " + nr1 + " ridicat la puterea " + nr2 + " este : " + calcule.ridicareLaPutereANumerelor.ridicareLaPutereANumerelor(nr1, nr2));
	  }

}
