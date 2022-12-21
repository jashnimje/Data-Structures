import java.util.Arrays;

public class Task_Scheduler {
    public static void main(String[] args) {
        char[] tasks = new char[] { 'A', 'B', 'A', 'A', 'B', 'C', 'A', 'A' };
        System.out.println(minInterval(tasks, 2));

    }

    private static int minInterval(char[] tasks, int n) {

        int[] freq = new int[26];
        for (int t : tasks) {
            freq[t - 'A']++;
        }
        Arrays.sort(freq);
        int f_max = freq[25];
        int idle = (f_max - 1) * n; // max possible idle time
        for (int i = freq.length - 2; i >= 0 && idle > 0; i--) {
            idle -= Math.min(f_max - 1, freq[i]);
        }
        idle = Math.max(0, idle);

        return idle + tasks.length;
    }
}
