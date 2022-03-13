package Bitwise_Operators;

import java.util.Scanner;

public class NumberOfDigits {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        int base = 10;
        int ans1 = numberOfDigits(number);
        int ans2 = numberOfDigitsFormula(number, base);
        System.out.println("Number of Digits: " + ans1);
        System.out.println("Number of Digits using Formula: " + ans2);
    }

    private static int numberOfDigitsFormula(int number, int base) {
        return ((int)(Math.log(number) / Math.log(base)) + 1);
    }

    private static int numberOfDigits(int number) {
        int count = 0;
        while (number > 0) {
            number /= 10;
            count++;
        }
        return count;
    }

}
