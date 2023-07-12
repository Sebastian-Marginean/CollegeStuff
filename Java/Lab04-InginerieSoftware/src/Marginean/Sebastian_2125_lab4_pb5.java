package Marginean;

public class Sebastian_2125_lab4_pb5 {

	public static void main(String[] args) {
		
		String caractere2 = "  Salut ma numesc Sebastian ";
    
		String lowerCaseStr = caractere2.toLowerCase();
		System.out.println("Lowercase string: " + lowerCaseStr);
    
		String upperCaseStr = caractere2.toUpperCase();
		System.out.println("Uppercase string: " + upperCaseStr);

		String trimmedStr = caractere2.trim();
		System.out.println("Trimmed string: " + trimmedStr);

		String replacedStr = caractere2.replace("Sebastian", "Constantin");
    	System.out.println("Replaced string: " + replacedStr);

	
	 	String[] caractere = {"Salut", "ma", "numesc", "Marginean", "Sebastian"};
        String Cuvinte = String.join(" ", caractere);
        System.out.println("Cuvintele alaturate: " + Cuvinte);

        String Cuvinte1 = " Salut ma numesc Marginean Sebastian.";
        Cuvinte1.chars().forEach(c -> System.out.print((char) c + "-"));
        System.out.println();

        String Cuvinte2 = "Salut 1\nSalut 2\nSalut 3";
        Cuvinte2.lines().forEach(linie -> System.out.println(linie));

        String Cuvinte3 = "Pa";
        String repetare = Cuvinte3.repeat(10);
        System.out.println("Sirul repetat este: " + repetare);

        String Cuvinte4 = "Salut".transform(str -> str + ", Sebi!");
        System.out.println("Sirul transformat: " + Cuvinte4);

        String Cuvinte5 = "Ma numesc %s si am %d de ani.";
        String sirSchimbat = String.format(Cuvinte5, "Sebastian", 20);
        System.out.println("Sirul este: " + sirSchimbat);
        
        

}
	
}
