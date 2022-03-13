package Bitwise_Operators;

import java.util.Scanner;

public class FindUniqueFromDuplicates {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        // Iterate over the array and xor it to remove duplicates
        // Reason: a ^ a = 0
        int ans = 0;
        for (int i : arr) {
            ans ^= i;
        }
        System.out.println("The Number that is unique: " + ans);
    }
}
