
import java.io.*;

public class Segment_Tree {
    public static void main(String[] args) throws NumberFormatException, IOException {
        InputStreamReader is = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(is);
        int t = Integer.parseInt(br.readLine());
        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine());
            int[] arr = new int[n];
            int[] st = new int[4 * n]; // Array size of resultant array is max = 4*n.

            // Input = 1 3 5 7 9 11

            // Take input of an array as a String and then split it into array.
            String[] str = br.readLine().trim().split("\\s+");
            for (int i = 0; i < n; i++) {
                arr[i] = Integer.parseInt(str[i]);
            }
            build(arr, st, 0, n - 1, 0);

            // Output 36 9 27 4 5 16 11 1 3 0 0 7 9 0 0 0 0 0 0 0 0 0 0 0
            for (int i = 0; i < st.length; i++) {
                System.out.print(st[i] + " ");
            }
            System.out.println("Before Update");
            System.out.println(getSum(st, 0, arr.length - 1, 0, 3, 0));
            update(st, 0, arr.length - 1, 5, 1, 0);
            System.out.println("After Update");
            System.out.println(getSum(st, 0, arr.length - 1, 0, 3, 0));
        }
    }

    private static void build(int[] arr, int[] st, int ss, int se, int si) {
        if (ss == se) {
            st[si] = arr[ss];
            return;
        }
        int mid = ss + (se - ss) / 2;
        // Left Child
        build(arr, st, ss, mid, 2 * si + 1);

        // Right Child
        build(arr, st, mid + 1, se, 2 * si + 2);

        // Parent Node
        st[si] = st[2 * si + 1] + st[2 * si + 2];
        return;
    }

    // Get Sum of a Range eg-> R[0, 4]
    private static int getSum(int[] st, int ss, int se, int qs, int qe, int si) {

        // Complete Overlap
        if (qs <= ss && qe >= se) {
            return st[si];
        }

        // No Overlap
        if (se < qs || ss > qe) {
            return 0;
        }

        int mid = ss + (se - ss) / 2;
        return getSum(st, ss, mid, qs, qe, 2 * si + 1) + getSum(st, mid + 1, se, qs, qe, 2 * si + 2);
    }

    private static void update(int[] st, int ss, int se, int val, int idx, int stIdx) {

        if (idx < ss || idx > se) {
            return;
        }

        if (ss == se) {
            st[stIdx] = val;
            return;
        }
        int mid = ss + (se - ss) / 2;
        if (idx <= mid) {
            // Left Child
            update(st, ss, mid, val, idx, 2 * stIdx + 1);
        } else {
            // Right Child
            update(st, mid + 1, se, val, idx, 2 * stIdx + 2);
        }
        st[stIdx] = st[2 * stIdx + 1] + st[2 * stIdx + 2];
    }
}