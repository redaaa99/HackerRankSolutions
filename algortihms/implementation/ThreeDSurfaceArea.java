import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class ThreeDSurfaceArea {

    // Complete the surfaceArea function below.
    static long surfaceArea(long[][] A,int H,int W) {
        int area = 2*W*H;
        for (int i = 1; i <= H; i++) {
            for (int j = 1; j <= W; j++) {
                area += Math.max(0, A[i][j]-A[i-1][j]);
                area += Math.max(0, A[i][j]-A[i+1][j]);
                area += Math.max(0, A[i][j]-A[i][j-1]);
                area += Math.max(0, A[i][j]-A[i][j+1]);
            }
        }
        return area;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        int H = scanner.nextInt();

        int W = scanner.nextInt();

        long[][] A = new long[H+2][W+2];

        for (int i = 0; i < H + 2; i++)
        {
            A[i][0] = 0;
            A[i][W+1] = 0;
        }
        for (int i = 0; i < W + 2; i++)
        {
            A[0][i] = 0;
            A[H+1][i] = 0;
        }

        for (int i = 1; i <= H; i++) {
            for (int j = 1; j <= W; j++) {
                A[i][j] = scanner.nextInt();
            }
        }


        System.out.println(surfaceArea(A,H,W));

        scanner.close();
    }
}
