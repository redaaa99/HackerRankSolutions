import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] a=new int[n];
        for(int i=0;i<n;i++){
            a[i] = sc.nextInt();
        }
        System.out.println(solver(a,n));
    }

    public static int solver(int[] a,int n){
        int res = 1;
        Arrays.sort(a);
        int p= a[0];
        for(int i=0;i<n;i++)
        {
            if(a[i]>p+4){
                res=res+1;
                p=a[i];
            }
        }
        return res;
    }
}

