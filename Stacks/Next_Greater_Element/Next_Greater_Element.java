package Stacks.Next_Greater_Element;

import java.util.*;

public class Next_Greater_Element {
    public static void main(String[] args) {
        Stack<Integer> s = new Stack<>();
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] array = new int[n];
        Hashtable<Integer, Integer> dict = new Hashtable<Integer, Integer>();
        for (int i = 0; i < n; i++) {
            array[i] = sc.nextInt();
        }
        s.push(array[0]);
        for (int i = 1; i < n; i++) {
            int next = array[i];
            if (!s.empty()) {
                int element = s.pop();
                while (element < next) {
                    dict.put(element, next);
                    if (s.empty()) {
                        break;
                    }
                    element = s.pop();
                }
                if (element > next) {
                    s.push(element);
                }
            }
            s.push(next);
        }
        while (!s.empty()) {
            int element = s.pop();
            int next = -1;
            dict.put(element, next);
        }
        for (int i = 0; i < n; i++) {
            System.out.print(dict.get(array[i]) + " ");
        }
        sc.close();
    }
}