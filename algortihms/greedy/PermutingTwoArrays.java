import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Scanner;

public class PermutingTwoArrays {

    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0) {
            int n,k;
            n = sc.nextInt();
            k = sc.nextInt();
            int a[] = new int[n];
            int b[] = new int[n];
            for(int i=0;i<n;i++){
                a[i] = sc.nextInt();
            }
            for(int i=0;i<n;i++){
                b[i] = sc.nextInt();
            }
            System.out.println(solver(a,b,k,n));
        }
    }

    public static String solver(int[] a, int[] b, int k, int n){
        Arrays.sort(a);
        Arrays.sort(b);
        for(int i=0;i<n;i++){
            if(a[i]+b[n-i-1]<k){
                return "NO";
            }
        }
        return "YES";
    }
}
