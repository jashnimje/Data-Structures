package Bitwise_Operators;

import java.util.Scanner;

public class BitsSetOrNot {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        int bit = sc.nextInt();
        int mask = 1 << (bit - 1);

        System.out.println("Number: " + number);
        System.out.println("ith Bit: " + bit);
        System.out.println("Mask: " + mask);

        if (setBitOrNot(number, mask)) {
            System.out.println("Bit is Set");
        } else {
            System.out.println("Bit is Not Set");
        }
    }

    static boolean setBitOrNot(int number, int mask) {
        return ((number & mask) != 0);
    }
}
