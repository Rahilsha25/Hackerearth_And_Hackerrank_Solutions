import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    static long sumXor(long n) {
    /* Calculate number of "x" values that will satisfy n+x = n^x */
    int zeroes = numZeroes(n);
    return 1L << zeroes; // same as (long) Math.pow(2, zeroes);
}

private static int numZeroes(long n) {
    int count = 0;
    while (n > 0) {
        if ((n & 1) == 0) {
            count++;
        }
        n >>= 1; // divides by 2
    }
    return count;
}

    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        long n = Long.parseLong(bufferedReader.readLine().trim());

        long result = sumXor(n);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}
