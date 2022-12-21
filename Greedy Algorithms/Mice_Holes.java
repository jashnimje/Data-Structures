import java.util.Arrays;

public class Mice_Holes {
    public static void main(String[] args) {
        int[] mices = { 4, -4, 2 };
        int[] holes = { 4, 0, 5 };

        System.out.println(assign(mices, holes));
    }

    private static int assign(int[] mices, int[] holes) {
        Arrays.sort(mices);
        Arrays.sort(holes);
        int max = 0;
        for (int i = 0; i < mices.length; i++) {
            int val = Math.abs(mices[i] - holes[i]);
            if (val > max) {
                max = val;
            }
        }
        return Math.abs(max);
    }
}
