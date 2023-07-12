//Student.java

package prob4;

public class Student implements Comparable<Student> {
    private String numeleStudentului;
    private String grupaStudentului;
    private double mediaStudentului;

    public Student(String numeleStudentului, String grupaStudentului, double mediaStudentului) {
        this.numeleStudentului = numeleStudentului;
        this.grupaStudentului = grupaStudentului;
        this.mediaStudentului = mediaStudentului;
    }

    public String getNume() {
        return numeleStudentului;
    }

    public void setNume(String numeleStudentului) {
        this.numeleStudentului = numeleStudentului;
    }

    public String getGrupa() {
        return grupaStudentului;
    }

    public void setGrupa(String grupaStudentului) {
        this.grupaStudentului = grupaStudentului;
    }

    public double getMedia() {
        return mediaStudentului;
    }

    public void setMedia(double mediaStudentului) {
        this.mediaStudentului = mediaStudentului;
    }

    @Override
    public int compareTo(Student student) {
        if (this.mediaStudentului != student.mediaStudentului) {
            return Double.compare(student.mediaStudentului, this.mediaStudentului);
        } else {
            return this.numeleStudentului.compareTo(student.numeleStudentului);
        }
    }

    @Override
    public String toString() {
        return "Nume: " + numeleStudentului + ", Grupa: " + grupaStudentului + ", Medie: " + mediaStudentului;
    }
}



//Main.java
package prob4;

import java.util.*;

public class Main {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
			SortedSet<Student> studenti = new TreeSet<>();

			System.out.print("Introduceti numarul de studenti: ");
			int nrStudenti = sc.nextInt();

			for (int i = 0; i < nrStudenti; i++) {
			    System.out.println("Introduceti informatiile pentru studentul " + (i+1) + ":");
			    System.out.print("Prenumele Studentului: ");
			    String numeleStudentului = sc.next();
			    System.out.print("Grupa Studentului: ");
			    String grupaStudentului = sc.next();
			    System.out.print("Media Studentului(Integer): ");
			    double mediaStudentului = sc.nextDouble();

			    studenti.add(new Student(numeleStudentului, grupaStudentului, mediaStudentului));
			}

			System.out.println("\nStudentii care sunt sortati dupa medie descrescator si nume crescator: ");
			for (Student student : studenti) {
			    System.out.println(student);
			}

			System.out.println("\nStudentii care au media >= 8: ");
			Iterator<Student> iterator = studenti.iterator();
			while (iterator.hasNext()) {
			    Student student = iterator.next();
			    if (student.getMedia() >= 8) {
			        System.out.println(student);
			    }
			}

			System.out.print("\nIntroduceti grupa studentului: ");
			String grupaStudentului = sc.next();

			System.out.println("\nStudentii din grupa " + grupaStudentului + ":");
			studenti.forEach(student -> {
			    if (student.getGrupa().equals(grupaStudentului)) {
			        System.out.println(student);
			    }
			});
		}
    }
}