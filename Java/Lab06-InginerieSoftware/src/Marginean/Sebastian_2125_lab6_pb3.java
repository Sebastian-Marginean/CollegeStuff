//cream o interfata numita Int1 si scriem codul de mai jos

package PACKAGE;

public interface Int1 {
	double sum(double nr1, double nr2);
}

//cream o interfata numita Int2 si scriem codul de mai jos

package PACKAGE;

public interface Int2 {
	double product(double nr1, double nr2);
}

//cream o interfata numita Class1 si scriem codul de mai jos

package PACKAGE;

public class Class1 {
	protected double nr1;
	protected double nr2;
	  
	public Class1(double x, double y) {
	  this.nr1 = nr1;
	  this.nr2 = nr2;
	}
	  
	public double getX() {
	  return nr1;
	}
	  
	public double getY() {
	  return nr2;
	}
	  
	public void setX(double x) {
	  this.nr1 = nr1;
	}
	  
	public void setY(double y) {
	  this.nr2 = nr2;
	}
}



//cream o interfata numita Class2 si scriem codul de mai jos

package PACKAGE;

public class Class2 extends Class1 implements Int1, Int2 {
  
  public Class2(double nr1, double nr2) {
    super(nr1, nr2);
  }
  
  @Override
  public double sum(double nr3, double nr4) {
    return nr3 + nr4;
  }
  
  @Override
  public double product(double nr3, double nr4) {
    return nr3 * nr4;
  }
}



//cream o interfata numita EX3 si scriem codul de mai jos

package PACKAGE;

import java.util.Scanner;

public class EX3 {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    
    
    System.out.print("Scrieti valoarea pentru x: ");
    double nr1 = sc.nextDouble();
    System.out.print("Scrieti valoarea pentru y: ");
    double nr2 = sc.nextDouble();
    Class2 obj = new Class2(nr1, nr2);
    System.out.println("Suma celor 2 numere este: " + obj.sum(nr1, nr2));
    
    
    System.out.print("Scrieti valoarea pentru a: ");
    double nr3 = sc.nextDouble();
    System.out.print("Scrieti valoarea pentru b: ");
    double nr4 = sc.nextDouble();
    System.out.println("Produsul celor 2 numere este: " + obj.product(nr3, nr4));
  }
}

