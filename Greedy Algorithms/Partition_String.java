import java.util.ArrayList;
import java.util.List;

public class Partition_String {
    public static void main(String[] args) {
        String str = "ababcbacadefegdehijhklij";
        System.out.println(partition(str));
    }

    private static List<Integer> partition(String str) {
        int[] lastOccur = new int[26];
        for (int i = 0; i < str.length(); i++) {
            lastOccur[str.charAt(i) - 'a'] = i;
        }
        int j = 0;
        int anchor = 0;
        List<Integer> ans = new ArrayList<>();
        for (int i = 0; i < str.length(); i++) {
            j = Math.max(j, lastOccur[str.charAt(i) - 'a']);
            if (i == j) {
                ans.add(i - anchor + 1);
                anchor = i + 1;
            }
        }
        return ans;
    }
}
