package Bitwise_Operators;

import java.util.Scanner;

public class NthSumOfPascalTriangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int ans = sumOfPascal(n);
        System.out.println("Sum of Nth Row of Pascal Triangle: " + ans);
    }

    private static int sumOfPascal(int n) {
        return (int) Math.pow(2, n-1);
    }
}
