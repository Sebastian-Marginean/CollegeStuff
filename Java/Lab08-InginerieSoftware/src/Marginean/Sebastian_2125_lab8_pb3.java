//clasa Serializer.java

package prob4;

import java.io.*;

public class Serializer {
    public static void serialize(array arr, String fileName) throws IOException {
        FileOutputStream fileOut = new FileOutputStream(fileName);
        ObjectOutputStream out = new ObjectOutputStream(fileOut);
        out.writeObject(arr);
        out.close();
        fileOut.close();
    }

    public static array deserialize(String fileName) throws IOException, ClassNotFoundException {
        FileInputStream fileIn = new FileInputStream(fileName);
        ObjectInputStream in = new ObjectInputStream(fileIn);
        array arr = (array) in.readObject();
        in.close();
        fileIn.close();
        return arr;
    }
}

// clasa array.java

package prob4;

import java.io.Serializable;
import java.util.Arrays;

public class array implements Serializable {
    private int[] values;

    public array(int[] values) {
        this.values = values;
    }

    public int[] getValues() {
        return values;
    }

    public void setValues(int[] values) {
        this.values = values;
    }

    public void sort() {
        Arrays.sort(values);
    }
}
 

// clasa Main.java

package prob4;

import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Introduceți numărul de valori întregi pe care le doriti: ");
        int n = scanner.nextInt();

        int[] values = new int[n];
        for (int i = 0; i < n; i++) {
            System.out.print(" Introduceți valoarea pentru index-ul: " + (i + 1) + ": ");
            values[i] = scanner.nextInt();
        }

        array arr = new array(values);
        arr.sort();

        try {
            Serializer.serialize(arr, "array.ser");
            System.out.println(" Obiectul a fost serializat! ");
        } catch (IOException e) {
            System.out.println(" Eroare la serializare: " + e.getMessage());
        }

        try {
        	array deserializedArr = Serializer.deserialize("array.ser");
            int[] deserializedValues = deserializedArr.getValues();

            System.out.println(" Valorile obiectului reconstruit sunt: ");
            for (int value : deserializedValues) {
                System.out.println(value);
            }
        } catch (IOException | ClassNotFoundException e) {
            System.out.println(" Eroare la deserializare: " + e.getMessage());
        }
    }
}