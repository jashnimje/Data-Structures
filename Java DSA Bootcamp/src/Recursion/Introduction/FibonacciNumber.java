package Recursion.Introduction;

import java.util.Scanner;

public class FibonacciNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        int ans = fibo(number);
        System.out.println(ans);
    }

    private static int fibo(int number) {
        if (number == 0 || number == 1 || number == 2) {
            return 1;
        }

        return fibo(number-1) + fibo(number-2);
    }
}
