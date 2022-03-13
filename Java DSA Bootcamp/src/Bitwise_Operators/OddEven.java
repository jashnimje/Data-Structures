package Bitwise_Operators;

import java.util.Scanner;

public class OddEven {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if (oddEven(n)) {
            System.out.println(n + " is an Odd Number.");
        } else {
            System.out.println(n + " is an Even Number.");
        }
    }

    private static boolean oddEven(int n) {
        return (n & 1) == 1;
    }
}
