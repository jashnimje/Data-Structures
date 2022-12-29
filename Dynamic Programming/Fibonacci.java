package DP;

public class Fibonacci {
    public static void main(String[] args) {
        System.out.println((fib(10)));
        System.out.println((fib(10, new long[100])));
        System.out.println((fibI(10)));
        System.out.println((fibSlider(10)));
        System.out.println((climbStairs(10)));
    }

    private static long fibSlider(int n) {
        if (n == 0 || n == 1) {
            return n;
        }
        long[] store = new long[2];
        store[0] = 0;
        store[1] = 1;
        for (int i = 1; i <= n - 1; i++) {
            long temp = store[0] + store[1];
            store[0] = store[1];
            store[1] = temp;
        }

        return store[1];
    }

    private static long fibI(int n) {
        if (n == 0 || n == 1) {
            return n;
        }
        long[] store = new long[n + 1];
        store[0] = 0;
        store[1] = 1;
        for (int i = 2; i < store.length; i++) {
            store[i] = store[i - 1] + store[i - 2];
        }
        return store[n];

    }

    private static long fib(int n, long[] store) {
        if (n == 0 || n == 1) {
            return n;
        }
        if (store[n] != 0) {
            return store[n];
        }
        long fm1 = fib(n - 1, store);
        long fm2 = fib(n - 2, store);
        long fm = fm1 + fm2;
        store[n] = fm;
        return fm;
    }

    private static long fib(int n) {
        if (n == 0 || n == 1) {
            return n;
        }
        long fm1 = fib(n - 1);
        long fm2 = fib(n - 2);
        long fm = fm1 + fm2;
        return fm;
    }

    private static long climbStairs(int n) {
        if (n == 1) {
            return 1;
        }
        long[] store = new long[2];
        store[0] = 0;
        store[1] = 1;
        for (int i = 1; i <= n - 1; i++) {
            long temp = store[0] + store[1];
            store[0] = store[1];
            store[1] = temp;
        }
        return store[1];
    }
}