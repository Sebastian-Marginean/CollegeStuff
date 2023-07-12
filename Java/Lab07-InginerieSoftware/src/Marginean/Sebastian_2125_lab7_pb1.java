//Main.java 

package prob1;


public class Main {
    public static void main(String[] args) {
    	Generator<Integer> integerGenerator = new GeneratorDeValori<>();
        integerGenerator.next(1);

        Generator<Character> characterGenerator = new GeneratorDeValori<>();
        characterGenerator.next('s');

        Generator<String> stringGenerator = new GeneratorDeValori<>();
        stringGenerator.next("Salut");

        Generator<Double> doubleGenerator = new GeneratorDeValori<>();
        doubleGenerator.next(15.54);
    }
}


//GeneratorDeValori.java

package prob1;

public class GeneratorDeValori<T> implements Generator<T> {
    public void next(T var) {
        if (var instanceof Integer) {
            Integer val = (Integer) var;
            val++;
            System.out.println("Next Integer value is: " + val);
        } else if (var instanceof Character) {
            Character val = (Character) var;
            val++;
            System.out.println("Next Character value is: " + val);
        } else if (var instanceof String) {
            String val = (String) var;
            val = val + " Next";
            System.out.println("Next String value is: " + val);
        } else if (var instanceof Double) {
            Double val = (Double) var;
            val = val + 1.0;
            System.out.println("Next Double value is: " + val);
        } else {
            System.out.println("Type not supported");
        }
    }
}


//Generator.java

package prob1;

public interface Generator<T> {
    void next(T var);
}
