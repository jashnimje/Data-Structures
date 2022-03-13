package Bitwise_Operators;

import java.util.Scanner;

public class SetBit {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        int bit = sc.nextInt();
        int mask = 1 << (bit - 1);

        System.out.println("Number: " + number);
        System.out.println("ith Bit: " + bit);
        System.out.println("Mask: " + mask);

        int ans = setBit(number, mask);
        System.out.println("After Setting ith Bit: " + ans);
    }

    static int setBit(int number, int mask) {
        return (number | mask);
    }
}
