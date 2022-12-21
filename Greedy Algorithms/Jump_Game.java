public class Jump_Game {
    public static void main(String[] args) {
        int[] arr = { 2, 3, 1, 1, 4 };
        System.out.println(count(arr));
    }

    private static int count(int[] arr) {
        int jumps = 0;
        int currEnd = 0;
        int farthest = 0;
        for (int i = 0; i < arr.length - 1; i++) {
            farthest = Math.max(farthest, i + arr[i]);
            if (i == currEnd) {
                jumps++;
                currEnd = farthest;
            }
        }
        return jumps;
    }
}
