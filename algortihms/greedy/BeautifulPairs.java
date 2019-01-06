import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class BeautifulPairs {

    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int [] bucketA = new int[1001];
        for (int i = 0; i < N; i++) {
            bucketA[scan.nextInt()]++;
        }
        int beautifulPairs = 0;
        for (int i = 0; i < N; i++) {
            int num = scan.nextInt();
            if (bucketA[num] > 0) {
                bucketA[num]--;
                beautifulPairs++;
            }
        }
        scan.close();

        /* Accounts for changing 1 element in B */
        if (beautifulPairs == N) {
            beautifulPairs--;
        } else {
            beautifulPairs++;
        }
        System.out.println(beautifulPairs);
    }
}
