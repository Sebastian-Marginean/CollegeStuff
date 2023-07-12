package Marginean;

import java.util.Scanner;


public class Sebastian_2125_lab5_pb4 {

	public interface FormaGeometrica {
	    double Aria(int lat);
	    double Perimetru(int lat);
	}

	public static class TriunghiEchi implements FormaGeometrica {
	    public double Aria(int lat) {
	        return (Math.sqrt(3) / 4) * lat * lat;
	    }

	    public double Perimetru(int lat) {
	        return 3 * lat;
	    }
	}

	public static class Patrat implements FormaGeometrica {
	    public double Aria(int lat) {
	        return lat * lat;
	    }

	    public double Perimetru(int lat) {
	        return 4 * lat;
	    }
	}

	public static class Hexagon implements FormaGeometrica {
	    public double Aria(int lat) {
	        return (3 * Math.sqrt(3) / 2) * lat * lat;
	    }

	    public double Perimetru(int lat) {
	        return 6 * lat;
	    }
	}


	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Scrieti numarul de triungiuri echilaterale la cred doriti sa le stiti aria si perimetru: ");
        int Tech = sc.nextInt();
        double ariaTotTriunghi = 0;
        double perimetruTotTriunghi = 0;
        
        System.out.println("Scrieti numarul de patrate la cred doriti sa le stiti aria si perimetru: ");
        int Patr = sc.nextInt();
        double ariaTotPatrat = 0;
        double perimetruTotPatrat = 0;
        
        System.out.println("Scrieti numarul de hexagoane la cred doriti sa le stiti aria si perimetru: ");
        int Hexa = sc.nextInt();
        double ariaTotalaHexagon = 0;
        double perimetruTotalaHexagon = 0;
	
        
        System.out.println("Scrieti de cat doriti sa fie latura triunghiului echilateral: ");
        for (int i = 0; i < Tech; i++) {
            int lat1 = sc.nextInt();
            FormaGeometrica formaGeom = new TriunghiEchi();
            ariaTotTriunghi += formaGeom.Aria(lat1);
            perimetruTotTriunghi += formaGeom.Perimetru(lat1);
        }
        System.out.println("Aria totala a triungiului echilateral este: " + ariaTotTriunghi);
        System.out.println("Perimetrul total al triungiului echilateral este: " + perimetruTotTriunghi);

        
        System.out.println("Scrieti de cat doriti sa fie latura patratului: ");
        for (int i = 0; i < Patr; i++) {
            int lat2 = sc.nextInt();
            FormaGeometrica formaGeom = new Patrat();
            ariaTotPatrat += formaGeom.Aria(lat2);
            perimetruTotPatrat += formaGeom.Perimetru(lat2);
        }
        System.out.println("Aria totala a patratului este: " + ariaTotPatrat);
        System.out.println("Perimetrul total al patratului este: " + perimetruTotPatrat);

        
        System.out.println("Scrieti de cat doriti sa fie latura hexagonului regulat: ");
        for (int i = 0; i < Hexa; i++) {
            int lat3 = sc.nextInt();
            FormaGeometrica formaGeom = new Hexagon();
            ariaTotalaHexagon += formaGeom.Aria(lat3);
            perimetruTotalaHexagon += formaGeom.Perimetru(lat3);
        }
        System.out.println("Aria totala a hexagonului regulat este: " + ariaTotalaHexagon);
        System.out.println("Perimetrul total al hexagonului regulat este: " + perimetruTotalaHexagon);
        

        System.out.println("Aria totala a figurilor este: " + (ariaTotTriunghi + ariaTotPatrat + ariaTotalaHexagon));
        System.out.println("Perimetrul total al figurilor este: " + (perimetruTotTriunghi + perimetruTotPatrat + perimetruTotalaHexagon));
    }
	
}
