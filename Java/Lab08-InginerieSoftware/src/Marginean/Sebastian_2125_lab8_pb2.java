package prob2;

import java.text.DateFormatSymbols;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        SimpleDateFormat formatData = new SimpleDateFormat("dd/MM/yyyy");
        DateFormatSymbols simbol = new DateFormatSymbols();

        while (true) {
            System.out.println("Introduceti data (DD/MM/YYYY) sau X pentru a iesi:");
            String input = sc.nextLine();
            if (input.equalsIgnoreCase("x")) {
                break;
            }
            try {
                Date data = formatData.parse(input);
                Calendar calendar = Calendar.getInstance();
                calendar.setTime(data);

                int ziua = calendar.get(Calendar.DAY_OF_MONTH);
                int anul = calendar.get(Calendar.YEAR);
                boolean AnBisect = (anul % 4 == 0 && anul % 100 != 0) || anul % 400 == 0;

                int indexLuna = calendar.get(Calendar.MONTH);
                String[] Luna = simbol.getMonths();
                String month = Luna[indexLuna];

                System.out.printf("%02d %s %d %s\n", ziua, month, anul, AnBisect ? "(an bisect)" : "");
            } catch (ParseException e) {
                System.out.println("Data introdusa nu este valida, mai incearca!");
            }
        }

        sc.close();
    }
}