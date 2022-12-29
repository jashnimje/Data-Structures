package DP;

public class Robber {
    public static void main(String[] args) {
        System.out.println(robHouse(0, new int[] { 2, 7, 9, 3, 1 }, new int[6]));
    }

    private static int robHouse(int i, int[] arr, int[] strg) {
        if (i >= arr.length) {
            return 0;
        }
        if (strg[i] != 0) {
            return strg[i];
        }
        int r1 = robHouse(i + 1, arr, strg);
        int r2 = robHouse(i + 2, arr, strg) + arr[i];
        int ans = Math.max(r1, r2);
        strg[i] = ans;
        return ans;
    }
}
