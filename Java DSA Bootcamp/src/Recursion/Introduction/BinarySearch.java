package Recursion.Introduction;

import java.util.Scanner;

public class BinarySearch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for (int i=0; i<n; i++) {
            arr[i] = sc.nextInt();
        }
        int target = sc.nextInt();
        int ans = binarySearch(arr, target, 0, arr.length-1);
        if (ans == -1) {
            System.out.println("Element not found.");
        } else {
            System.out.println("Element found at index: " + ans);
        }
    }

    public static int binarySearch(int[] arr, int target, int start, int end) {
        if (start >= end) {
            return -1;
        }
        int mid = start + (end - start)/2;
        if (arr[mid] == target) {
            return mid;
        }

        int index = -1;

        if (arr[mid] > target) {
            index = binarySearch(arr, target, start, mid - 1);
        } else {
            index = binarySearch(arr, target, mid + 1, end);
        }
        return index;
    }
}
