import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class MaxMin {

    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int K = scan.nextInt();
        int [] list = new int[N];
        for(int i=0;i<N;i++){
            list[i] = scan.nextInt();
        }
        int unfairness = Integer.MAX_VALUE;
        Arrays.sort(list);
        for (int i = 0; i < N - K + 1; i++)
            if (list[i+K-1]-list[i]<unfairness)
                unfairness = list[i+K-1]-list[i];
        System.out.println(unfairness);
    }
}
