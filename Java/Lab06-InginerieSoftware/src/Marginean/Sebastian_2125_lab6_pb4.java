//creeam clasa ExceptieMaiMica



public class ExceptieMaiMica extends SuperExceptie {
  public ExceptieMaiMica() {
	super("Exceptiea mai mica a fost generata!");
  }

public ExceptieMaiMica(String string) {
	// TODO Auto-generated constructor stub
}
}

//creeam clasa SuperExceptie

public class SuperExceptie extends Exception {
  public SuperExceptie() {
    super("Super exceptia a fost generata!");
  }

public SuperExceptie(String string) {
	// TODO Auto-generated constructor stub
}
}


//creeam clasa Clasa


public class Clasa {
  public void a() throws ExceptieMaiMica {
    throw new ExceptieMaiMica();
  }
  
  public void b() throws SuperExceptie {
    throw new SuperExceptie();
  }


public static void main(String[] args) {
	  Clasa obiect = new Clasa();
	  
	  try {
		  obiect.a();
	  } catch (ExceptieMaiMica e) {
	    System.out.println("O exceptie a fost prinsa: " + e.getMessage());
	  } catch (SuperExceptie e) {
	    System.out.println("O exceptie a fost prinsa: " + e.getMessage());
	  }
	  
	  try {
		  obiect.b();
	  } catch (ExceptieMaiMica e) {
	    System.out.println("O exceptie a fost prinsa: " + e.getMessage());
	  } catch (SuperExceptie e) {
	    System.out.println("O exceptie a fost prinsa: " + e.getMessage());
	  }
	}
}