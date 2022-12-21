public class Min_Subset_Product {
    public static void main(String[] args) {
        // int[] arr = { 2, 1, 3, 0, 4, 5, -2, -1 };

        // All Positive
        // int[] arr = { 2, 1, 3, 0, 4, 5 };

        // One Negative
        int[] arr = { 2, 1, 0, 3, 4, 5, -3 };
        System.out.println(inSubsetProduct(arr));
    }

    private static int inSubsetProduct(int[] arr) {
        if (arr.length == 1) {
            return arr[0];
        }
        int nMax = Integer.MIN_VALUE;
        int pMin = Integer.MAX_VALUE;
        int cNeg = 0;
        int cZero = 0;
        int prod = 1;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == 0) {
                cZero++;
                continue;
            }
            if (arr[i] < 0) {
                cNeg++;
                nMax = Math.max(arr[i], nMax);
            }

            if (arr[i] > 0 && arr[i] < pMin) {
                pMin = arr[i];
            }
            prod *= arr[i];
        }

        // Case 1
        if (cZero == arr.length || (cNeg == 0 && cZero > 0)) {
            return 0;
        }

        // Case 2
        if (cNeg == 0) {
            return pMin;
        }

        // Case 3
        if (cNeg % 2 == 0 && cNeg != 0) {
            prod = prod / nMax;
        }

        return prod;
    }

}
