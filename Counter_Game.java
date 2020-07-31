import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;
import java.math.BigInteger;

public class Solution {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int T = scan.nextInt();
        while (T-- > 0) {
            BigInteger N = new BigInteger(scan.next());
            N = N.subtract(BigInteger.ONE);
            System.out.println(N.bitCount() % 2 == 0 ? "Richard" : "Louise");
        }
        scan.close();
    }
}
