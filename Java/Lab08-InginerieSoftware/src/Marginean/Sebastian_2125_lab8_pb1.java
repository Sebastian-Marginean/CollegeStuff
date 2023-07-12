package prob1;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.StreamTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferreader = new BufferedReader(new InputStreamReader(System.in));
        StreamTokenizer streamtoken = new StreamTokenizer(bufferreader);

        String message = null;
        int day = 0;
        String month = null;
        int year = 0;

        while (streamtoken.nextToken() != StreamTokenizer.TT_EOL) {
            if (streamtoken.ttype == StreamTokenizer.TT_WORD) {
                if (message == null) {
                    message = streamtoken.sval;
                } else {
                    month = streamtoken.sval;
                }
            } else if (streamtoken.ttype == StreamTokenizer.TT_NUMBER) {
                if (day == 0) {
                    day = (int) streamtoken.nval;
                } else {
                    year = (int) streamtoken.nval;
                }
            }
        }

        System.out.println("Mesajul este: " + message);
        System.out.println("Ziua este: " + day);
        System.out.println("Luna este: " + month);
        System.out.println("Anul este: " + year);
    }
}




