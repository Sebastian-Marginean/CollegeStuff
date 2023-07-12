package Marginean;

public class Sebastian_2125_lab4_pb2 {

	public static class X {
	    private String primulSir;
	    protected String alDoileaSir;
	    int nrIntreg;

	    public X(String s1, String s2, int i) {
	    	primulSir = s1;
	    	alDoileaSir = s2;
	    	nrIntreg = i;
	    }

	    public String getPrimulSir() {
	        return primulSir;
	    }

	    public void setPrimulSir(String s1) {
	    	primulSir = s1;
	    }

	    protected String getAlDoileaSir() {
	        return alDoileaSir;
	    }

	    protected void setAlDoileaSir(String s2) {
	    	alDoileaSir = s2;
	    }

	    public int getNrIntreg() {
	        return nrIntreg;
	    }

	    public void setNrIntreg(int i) {
	    	nrIntreg = i;
	    }

	    
	    protected void finalize() throws Throwable {
	        System.out.println("Obiectul X a fost finalizat.");
	        super.finalize();
	    }
	}


	
	public static void main(String[] args) {
	    X primulX = new X("salut", "buna", 12345);
	    System.out.println("Primul sir este:: " + primulX.getPrimulSir());
	    System.out.println("Al doilea sir este: " + primulX.getAlDoileaSir());
	    System.out.println("Numarul intreg este: " + primulX.getNrIntreg());
	    primulX = null;
	    System.gc();
	    
	    
	    X alDoileaX = new X("salut2", "buna2", 67890);
	    System.out.println("Al treilea sir este: " + alDoileaX.getPrimulSir());
	    System.out.println("Al patrulea sir este: " + alDoileaX.getAlDoileaSir());
	    System.out.println("Numarul intreg este: " + alDoileaX.getNrIntreg());
	}
	
}
