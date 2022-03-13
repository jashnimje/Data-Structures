package Bitwise_Operators;

import java.util.Scanner;

public class MagicNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int base = 5;

        System.out.println("N: " + n);
        System.out.println("Base " + base);

        int ans = magicNumber(n, base);
        System.out.println("Nth Magic Number: " + ans);
    }

    private static int magicNumber(int n, int base) {
        int mask = 1;
        int ans = 0;
        int count = 1;
        while (n > 0) {
            if ((mask & n) == 1) {
                ans += Math.pow(base, count);
            }
            count++;
            n >>= 1;
        }
        return ans;
    }
}
