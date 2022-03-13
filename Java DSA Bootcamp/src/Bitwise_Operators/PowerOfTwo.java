package Bitwise_Operators;

import java.util.Scanner;

public class PowerOfTwo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if (powerOfTwo(n)) {
            System.out.println("Is Power of Two");
        } else {
            System.out.println("Not a Power of Two");
        }
    }

    private static boolean powerOfTwo(int n) {
        return (n & n-1) == 0;
    }
}
