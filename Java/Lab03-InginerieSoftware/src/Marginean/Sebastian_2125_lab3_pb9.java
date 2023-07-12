package Marginean;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;

public class Sebastian_2125_lab3_pb9 {

	 public static void main(String[] args) {
	        ArrayList<String> deck = new ArrayList<>(Arrays.asList(
	        		"2 de trefla", "3 de trefla", "4 de trefla", "5 de trefla", "6 de trefla", "7 de trefla",
	                "8 de trefla", "9 de trefla", "10 de trefla", "A de trefla", "J de trefla", "Q de trefla",
	                "K de trefla",
	                "2 de romb", "3 de romb", "4 de romb", "5 de romb", "6 de romb", "7 de romb", "8 de romb",
	                "9 de romb", "10 de romb", "A de romb", "J de romb", "Q de romb", "K de romb",
	                "2 de inima rosie", "3 de inima rosie", "4 de inima rosie", "5 de inima rosie",
	                "6 de inima rosie", "7 de inima rosie", "8 de inima rosie", "9 de inima rosie",
	                "10 de inima rosie", "A de inima rosie", "J de inima rosie", "Q de inima rosie", "K de inima rosie",
	                "2 de inima neagra", "3 de inima neagra", "4 de inima neagra", "5 de inima neagra",
	                "6 de inima neagra", "7 de inima neagra", "8 de inima neagra", "9 de inima neagra",
	                "10 de inima neagra", "A de inima neagra", "J de inima neagra", "Q de inima neagra", "K de inima neagra"    
	        ));
	        Collections.shuffle(deck);

	        int nr = 1;
	        String carte = deck.get(0);
	        while (!carte.contains("trefla") || carte.contains("8")) {
	        	nr++;
	            deck.remove(carte);
	            carte = deck.get(0);
	        }

	        System.out.println("Cartea extrasa este: " + carte);
	        System.out.println("Numarul de carti extrase pana la aceasta carte este: " + nr);
	    }
}
