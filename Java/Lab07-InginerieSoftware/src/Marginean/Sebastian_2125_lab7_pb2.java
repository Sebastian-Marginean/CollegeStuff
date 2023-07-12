package prob2;

public class Calculator<T extends Number> {
	 @SuppressWarnings("unchecked")
	public T subtract(T a, T b) {
	        if (a instanceof Integer) {
	            return (T) (Integer.valueOf(a.intValue() - b.intValue()));
	        } else if (a instanceof Double) {
	            return (T) (Double.valueOf(a.doubleValue() - b.doubleValue()));
	        } else if (a instanceof Float) {
	            return (T) (Float.valueOf(a.floatValue() - b.floatValue()));
	        } else if (a instanceof Long) {
	            return (T) (Long.valueOf(a.longValue() - b.longValue()));
	        } else {
	            throw new IllegalArgumentException("Tipul nu este suportat");
	        }
	    }
	 
    @SuppressWarnings("unchecked")
	public T add(T a, T b) {
        if (a instanceof Integer) {
            return (T) (Integer.valueOf(a.intValue() + b.intValue()));
        } else if (a instanceof Double) {
            return (T) (Double.valueOf(a.doubleValue() + b.doubleValue()));
        } else if (a instanceof Float) {
            return (T) (Float.valueOf(a.floatValue() + b.floatValue()));
        } else if (a instanceof Long) {
            return (T) (Long.valueOf(a.longValue() + b.longValue()));
        } else {
            throw new IllegalArgumentException("Tipul nu este suportat");
        }
    }


    @SuppressWarnings("unchecked")
	public T multiply(T a, T b) {
        if (a instanceof Integer) {
            return (T) (Integer.valueOf(a.intValue() * b.intValue()));
        } else if (a instanceof Double) {
            return (T) (Double.valueOf(a.doubleValue() * b.doubleValue()));
        } else if (a instanceof Float) {
            return (T) (Float.valueOf(a.floatValue() * b.floatValue()));
        } else if (a instanceof Long) {
            return (T) (Long.valueOf(a.longValue() * b.longValue()));
        } else {
            throw new IllegalArgumentException("Tipul nu este suportat");
        }
    }

    @SuppressWarnings("unchecked")
	public T divide(T a, T b) {
        if (a instanceof Integer) {
            return (T) (Integer.valueOf(a.intValue() / b.intValue()));
        } else if (a instanceof Double) {
            return (T) (Double.valueOf(a.doubleValue() / b.doubleValue()));
        } else if (a instanceof Float) {
            return (T) (Float.valueOf(a.floatValue() / b.floatValue()));
        } else if (a instanceof Long) {
            return (T) (Long.valueOf(a.longValue() / b.longValue()));
        } else {
            throw new IllegalArgumentException("Tipul nu este suportat");
        }
    }
    
    public static void main(String[] args) {
        Calculator<Integer> intCalc = new Calculator<>();
        System.out.println("Rezultatul scaderii este: " + intCalc.subtract(6, 2));
        System.out.println("Rezultatul adunarii este: " + intCalc.add(1, 4));
        System.out.println("Rezultatul inmultirii este: " + intCalc.multiply(4, 5));
        System.out.println("Rezultatul impartirii este: " + intCalc.divide(15, 3));

        Calculator<Double> doubleCalc = new Calculator<>();
        System.out.println("Rezultatul scaderii este: " + doubleCalc.subtract(3.0, 1.5)); 
        System.out.println("Rezultatul adunarii este: " + doubleCalc.add(4.5, 1.7)); 
        System.out.println("Rezultatul inmultirii este: " + doubleCalc.multiply(5.5, 2.0)); 
        System.out.println("Rezultatul impartirii este: " + doubleCalc.divide(145.0, 23.0)); 
        
    
    }
}