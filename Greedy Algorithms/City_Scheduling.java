import java.util.Arrays;
import java.util.Comparator;

public class City_Scheduling {
    public static void main(String[] args) {
        int[][] arr = { { 10, 20 }, { 30, 200 }, { 400, 50 }, { 30, 20 } };
        System.out.println(schedule(arr));
    }

    private static int schedule(int[][] arr) {
        Arrays.sort(arr, new Comparator<int[]>() {
            public int compare(int[] o1, int[] o2) {
                return (o1[0] - o1[1]) - (o2[0] - o2[1]);
            }
        });
        int total = 0;
        int n = arr.length / 2;
        for (int i = 0; i < n; i++) {
            total += arr[i][0] + arr[i + n][1];
        }
        return total;
    }
}
