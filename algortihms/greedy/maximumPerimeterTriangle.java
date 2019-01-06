import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class maximumPerimeterTriangle {

    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] a = new int[n];
        for(int i = 0; i < n; i++) {
            a[i] = scanner.nextInt();
        }
        scanner.close();
        Arrays.sort(a);
        int x, y, z;
        for(x=n-3, y=n-2, z=n-1; a[x]+a[y]<=a[z]; x--, y--, z--){
            if(x==0) {
                System.out.print(-1);
                return;
            }
        }
        System.out.printf("%d %d %d", a[x], a[y], a[z]);
    }
}
