package Bitwise_Operators;

import java.util.Scanner;

public class RightmostSetBit {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        int mask = 1;

        System.out.println("Number: " + number);
        int ans = rightmostSetBit(number, mask);
        System.out.println("The Rightmost Set Bit is: " + ans);
    }

    private static int rightmostSetBit(int number, int mask) {
        int count = 1;
        while ((mask & number) == 0) {
            mask <<= 1;
            count++;
        }
        return count;
    }
}
