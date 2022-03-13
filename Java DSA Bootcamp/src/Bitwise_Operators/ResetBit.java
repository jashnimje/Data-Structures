package Bitwise_Operators;

import java.util.Scanner;

public class ResetBit {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        int bit = sc.nextInt();
        int mask = ~(1 << (bit - 1));

        System.out.println("Number: " + number);
        System.out.println("ith Bit: " + bit);
        System.out.println("Mask: " + mask);

        int ans = resetBit(number, mask);
        System.out.println("After Resetting ith Bit: " + ans);
    }

    private static int resetBit(int number, int mask) {
        return (mask & number);
    }
}
