package Marginean;

import java.util.Scanner;

public class Sebastian_2125_lab4_pb4 {

	private float longitudine;
    private float latitudine;
    private String numePersoana;

    public Sebastian_2125_lab4_pb4() {
        this.longitudine = 0;
        this.latitudine = 0;
        this.numePersoana = null;
    }

    public Sebastian_2125_lab4_pb4(float longitudine, float latitudine, String numePersoana) {
        this.longitudine = longitudine;
        this.latitudine = latitudine;
        this.numePersoana = numePersoana;
    }

    public void setLongitudine(float longitudine) {
        this.longitudine = longitudine;
    }
    
    public void setLatitudine(float latitudine) {
        this.latitudine = latitudine;
    }
    
    public void setNumePersoana(String numePersoana) {
        this.numePersoana = numePersoana;
    }


    public float getLongitudine() {
        return longitudine;
    }

    public float getLatitudine() {
        return latitudine;
    }
    
    public String getNumePersoana() {
        return numePersoana;
    }

   

  
    @Override
    protected void finalize() {
        System.out.println("Obiectul " + this.numePersoana + " a fost distrus.");
    }

    public static void main(String[] args) {
    	Scanner sc = new Scanner(System.in);
    	System.out.println("Scrieti numarul n de obiecte: ");
        int n = sc.nextInt();
        
        Sebastian_2125_lab4_pb4[] persoane = new Sebastian_2125_lab4_pb4[n];
        
        for (int i = 0; i < n; i++) {
        	Sebastian_2125_lab4_pb4 persoanaA = new Sebastian_2125_lab4_pb4();
        	persoanaA.setLongitudine((float) (i+1));
        	persoanaA.setLatitudine((float) (i+1));
        	persoanaA.setNumePersoana("Persoana " + (i+1));
            persoane[i] = persoanaA;
        }

        for (int i = 0; i < n; i++) {
            System.out.println("Persoana cu numarul: " + (i+1) + ":");
            System.out.println("Longitudine este: " + persoane[i].getLongitudine());
            System.out.println("Latitudine este: " + persoane[i].getLatitudine());
            System.out.println("Numele persoanei este: " + persoane[i].getNumePersoana());
        }
    }
	
}
