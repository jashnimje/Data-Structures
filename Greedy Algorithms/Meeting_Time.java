import java.util.Arrays;

public class MeetingTime {
    public static void main(String[] args) {
        int[][] arr = { { 1, 10 }, { 2, 7 }, { 3, 19 }, { 8, 12 }, { 10, 20 }, { 11, 30 } };
        System.out.println(minConferenceRooms(arr));
    }

    public static int minConferenceRooms(int[][] arr) {
        if (arr.length == 0) {
            return 0;
        }
        int[] start = new int[arr.length];
        int[] end = new int[arr.length];
        for (int i = 0; i < arr.length; i++) {
            start[i] = arr[i][0];
            end[i] = arr[i][1];
        }
        Arrays.sort(start);
        Arrays.sort(end);
        int s = 0;
        int e = 0;
        int reqRooms = 0;
        while (s < arr.length) {
            if (start[s] >= end[e]) {
                reqRooms -= 1;
                e += 1;
            }
            reqRooms += 1;
            s += 1;
        }

        return reqRooms;
    }
}