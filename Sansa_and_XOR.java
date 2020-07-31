import java.util.Scanner;

static int sansaXor(int[] array) {
    if (array.length % 2 == 0) { // Case 1
        return 0;
    } else { // Case 2
        int result = 0;
        for (int i = 0; i < array.length; i++) {
            if (i % 2 == 0) {
                result ^= array[i];
            }
        }
       return result;
    }
}
